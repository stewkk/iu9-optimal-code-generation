parser grammar TParser;

options {
    tokenVocab = TLexer;
}

main: stat+ EOF;

stat: ID Assign expr Semicolon
    | Return expr Semicolon
    | Break Semicolon
    | Continue Semicolon
    | control OpenPar cond ClosePar OpenCurly stat+ CloseCurly
;

control: If
    | While
;

cond: expr Equal expr
    | expr NotEqual expr
    | expr LessThan expr
    | expr GreaterThan expr
;


expr: expr Star expr
    | expr Minus expr
    | expr Plus expr
    | OpenPar expr ClosePar
    | identifier = ID
    | INT
;
