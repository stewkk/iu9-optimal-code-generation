parser grammar TParser;

options {
    tokenVocab = TLexer;
}

main: stat+ EOF;

stat: ID Assign expr Semicolon # Assign
    | Return expr Semicolon # Return
    | Break Semicolon # Break
    | Continue Semicolon # Continue
    | control OpenPar cond ClosePar OpenCurly stat+ CloseCurly # FlowControl
;

control: If # If
    | While # While
;

cond: expr Equal expr # Eq
    | expr NotEqual expr # Ne
    | expr LessThan expr # Lt
    | expr GreaterThan expr # Gt
;

expr: expr Star expr # Star
    | expr Minus expr # Minus
    | expr Plus expr # Plus
    | OpenPar expr ClosePar # Nested
    | identifier = ID # Ident
    | INT # Int
;
