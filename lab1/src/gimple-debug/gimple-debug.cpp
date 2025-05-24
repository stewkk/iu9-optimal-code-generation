#undef _FORTIFY_SOURCE

#include <iostream>
#include <cstdint>

#include <gcc-plugin.h>
#include <coretypes.h>
#include <context.h>
#include <basic-block.h>
#include <tree-core.h>
#include <tree.h>
#include <tree-pass.h>
#include <gimple-expr.h>
#include <gimple.h>
#include <gimple-ssa.h>
#include <gimple-iterator.h>

std::int32_t plugin_is_GPL_compatible;

const pass_data kGimpleDebugPassData = {
    .type = GIMPLE_PASS,
    .name = "gimple-debug",
    .optinfo_flags = OPTGROUP_NONE,
    .tv_id = TV_NONE,
    .properties_required = PROP_gimple_any,
    .properties_provided = 0,
    .properties_destroyed = 0,
    .todo_flags_start = 0,
    .todo_flags_finish = 0,
};

class GimpleDebugPass : public gimple_opt_pass {
public:
  GimpleDebugPass(gcc::context *ctx)
      : gimple_opt_pass(kGimpleDebugPassData, ctx) {}

  virtual std::uint32_t execute(function *fun) override;
  virtual GimpleDebugPass *clone() override { return this; }
};

std::uint32_t visit_tree(tree t) {
  switch (TREE_CODE(t)) {
  case INTEGER_CST:
    std::cout << TREE_INT_CST_LOW(t);
    break;
  case STRING_CST:
    std::cout << "\"" << TREE_STRING_POINTER(t) << "\"";
    break;
  case LABEL_DECL:
    std::cout << (DECL_NAME(t) ? IDENTIFIER_POINTER(DECL_NAME(t))
                               : "label_decl")
              << ":";
    break;
  case VAR_DECL:
    std::cout << (DECL_NAME(t) ? IDENTIFIER_POINTER(DECL_NAME(t)) : "var_decl");
    break;
  case CONST_DECL:
    std::cout << (DECL_NAME(t) ? IDENTIFIER_POINTER(DECL_NAME(t))
                               : "const_decl");
    break;
  case ARRAY_REF:
    visit_tree(TREE_OPERAND(t, 0));
    std::cout << "[";
    visit_tree(TREE_OPERAND(t, 1));
    std::cout << "]";
    break;

  case MEM_REF:
    std::cout << "((typeof(";
    visit_tree(TREE_OPERAND(t, 1));
    std::cout << "))";
    visit_tree(TREE_OPERAND(t, 0));
    std::cout << ")";
    break;

  case SSA_NAME: {
    gimple *st = SSA_NAME_DEF_STMT(t);
    if (gimple_code(st) == GIMPLE_PHI) {
      std::cout << "("
                << (SSA_NAME_IDENTIFIER(t)
                        ? IDENTIFIER_POINTER(SSA_NAME_IDENTIFIER(t))
                        : "ssa_name")
                << "__v" << SSA_NAME_VERSION(t);
      std::cout << " = GIMPLE_PHI(";
      for (std::uint32_t i = 0; i < gimple_phi_num_args(st); i++) {
        visit_tree(gimple_phi_arg(st, i)->def);
        if (i != gimple_phi_num_args(st) - 1) {
          std::cout << ", ";
        }
      }
      std::cout << "))";
    } else {
      std::cout << (SSA_NAME_IDENTIFIER(t)
                        ? IDENTIFIER_POINTER(SSA_NAME_IDENTIFIER(t))
                        : "ssa_name")
                << "__v" << SSA_NAME_VERSION(t);
    }

    break;
  }
  default:
    std::cout << "tree_code(" << TREE_CODE(t) << ")";
    break;
  }

  return 0;
}

std::uint32_t visit_operator(enum tree_code code) {
  switch (code) {
  case PLUS_EXPR:
    std::cout << "+";
    break;
  case MINUS_EXPR:
    std::cout << "-";
    break;
  case MULT_EXPR:
    std::cout << "*";
    break;
  case RDIV_EXPR:
    std::cout << "/";
    break;
  case BIT_IOR_EXPR:
    std::cout << "|";
    break;
  case BIT_NOT_EXPR:
    std::cout << "!";
    break;
  case TRUTH_AND_EXPR:
    std::cout << "&&";
    break;
  case TRUTH_OR_EXPR:
    std::cout << "||";
    break;
  case TRUTH_NOT_EXPR:
    std::cout << "!";
    break;
  case LT_EXPR:
    std::cout << "<";
    break;
  case LE_EXPR:
    std::cout << "<=";
    break;
  case GT_EXPR:
    std::cout << ">";
    break;
  case GE_EXPR:
    std::cout << ">=";
    break;
  case EQ_EXPR:
    std::cout << "==";
    break;
  case NE_EXPR:
    std::cout << "!=";
    break;
  default:
    std::cout << "unknown op(" << code << ")";
    break;
  }
  return 0;
}

std::uint32_t visit_assign_statement(gimple *statement) {
  std::cout << "      GIMPLE_ASSIGN(" << GIMPLE_ASSIGN << ") { ";
  switch (gimple_num_ops(statement)) {
  case 2:
    visit_tree(gimple_assign_lhs(statement));
    std::cout << " = ";
    visit_tree(gimple_assign_rhs1(statement));
    break;
  case 3:
    visit_tree(gimple_assign_lhs(statement));
    std::cout << " = ";
    visit_tree(gimple_assign_rhs1(statement));
    std::cout << " ";
    visit_operator(gimple_assign_rhs_code(statement));
    std::cout << " ";
    visit_tree(gimple_assign_rhs2(statement));
    break;
  }
  std::cout << " }" << std::endl;

  return 0;
}

std::uint32_t visit_call_statement(gimple *statement) {
  std::cout << "      " << "stmt: " << "\"GIMPLE_CALL\"" << " " << "("
            << GIMPLE_CALL << ")" << " { ";
  tree lhs = gimple_call_lhs(statement);
  if (lhs) {
    visit_tree(lhs);
    printf(" = ");
  }
  std::cout << fndecl_name(gimple_call_fndecl(statement)) << "(";
  for (std::uint32_t i = 0; i < gimple_call_num_args(statement); i++) {
    visit_tree(gimple_call_arg(statement, i));
    if (i != gimple_call_num_args(statement) - 1) {
      std::cout << ", ";
    }
  }
  std::cout << ")";
  std::cout << " }" << std::endl;

  return 0;
}

std::uint32_t visit_cond_statement(gimple *statement) {
  std::cout << "      GIMPLE_COND(" << GIMPLE_COND << ") { ";
  visit_tree(gimple_cond_lhs(statement));
  std::cout << " ";
  visit_operator(gimple_assign_rhs_code(statement));
  std::cout << " ";
  visit_tree(gimple_cond_rhs(statement));
  std::cout << " }" << std::endl;
  return 0;
}

std::uint32_t visit_label_statement([[maybe_unused]] gimple *statement) {
  std::cout << "      GIMPLE_LABEL(" << GIMPLE_LABEL << ")" << std::endl;
  return 0;
}

std::uint32_t visit_return_statement([[maybe_unused]] gimple *statement) {
  std::cout << "      GIMPLE_RETURN(" << GIMPLE_RETURN << ")" << std::endl;
  return 0;
}

std::uint32_t GimpleDebugPass::execute(function *fun) {
  std::cout << "function: \"" << function_name(fun) << "\"" << std::endl;
  basic_block bb;
  FOR_ALL_BB_FN(bb, fun) {
    std::cout << "  basic block: " << bb->index << std::endl;

    std::cout << "    preds: ";
    edge e;
    edge_iterator it;
    FOR_EACH_EDGE(e, it, bb->preds) { std::cout << e->src->index << ' '; }
    std::cout << std::endl;

    std::cout << "    succs: ";
    FOR_EACH_EDGE(e, it, bb->succs) { std::cout << e->dest->index << ' '; }
    std::cout << std::endl;
    std::cout << "    statements:" << std::endl;
    for (gimple_stmt_iterator it = gsi_start_bb(bb); !gsi_end_p(it);
         gsi_next(&it)) {
      gimple *statement = gsi_stmt(it);
      switch (gimple_code(statement)) {
      case GIMPLE_ASSIGN:
        visit_assign_statement(statement);
        break;
      case GIMPLE_CALL:
        visit_call_statement(statement);
        break;
      case GIMPLE_COND:
        visit_cond_statement(statement);
        break;
      case GIMPLE_LABEL:
        visit_label_statement(statement);
        break;
      case GIMPLE_RETURN:
        visit_return_statement(statement);
        break;
      default:
        break; // NOTE: just skip
      }
    }
  }
  return 0;
}

register_pass_info kGimpleDebugPassInfo = {
    .pass = new GimpleDebugPass(g),
    .reference_pass_name = "ssa",
    .ref_pass_instance_number = 1,
    .pos_op = PASS_POS_INSERT_AFTER,
};

plugin_info kGimpleDebugPluginInfo{
    .version = "0.1.0",
    .help = "some help",
};

std::int32_t plugin_init(struct plugin_name_args *args,
                         [[maybe_unused]] struct plugin_gcc_version *version) {

  register_callback(args->base_name, PLUGIN_INFO, nullptr,
                    &kGimpleDebugPluginInfo);
  register_callback(args->base_name, PLUGIN_PASS_MANAGER_SETUP, nullptr,
                    &kGimpleDebugPassInfo);
  return 0;
}
