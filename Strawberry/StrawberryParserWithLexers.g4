parser grammar StrawberryParserWithLexers;

options {
	tokenVocab = StrawberryLexer;
}

/* ================================================================================ */
// SCRIPT STRUCTURE

script
: action+ EOF
;

action
: statement ';'
| scope
| fnDeclaration
;

scope: '{' action* '}' ;

statement
: value
| scope
;

fnDeclaration: 'fn' Id '(' parameters ')' scope ;

lambda: '(' parameters ')' '=>' statement ;

parameters
: (Id ',')* Id #params
| (Id ',')* Id '...' #paramsExpand
;

args
: (argument (',' argument)*)?
;

argument
: value #arg
| '...' value #argExpand
;

/* ================================================================================ */
// VALUE AND EXPRESSIONS

value
: expression
| lambda
;

expression
: '(' expression ')' #parenExpr
| assign #assignExpr
| prefix expression #prefixExpr
| expression op1 expression #opExpr
| expression op2 expression #opExpr
| expression op3 expression #opExpr
| expression op4 expression #opExpr
| expression op5 expression #opExpr
| expression op6 expression #opExpr
| fnCall #fnExpr
| access #accessExpr
| literal #litExpr
;

literal
: Dquote .*? Dquote #dStringLit // TODO: revise double quotes
| Squote .*? Squote #sStringLit
| Number #numLit
;

assign
: 'let'? Id '=' value #assignEq
| 'let'? Id '->' access #assignPoint
| Id (op1|op2|op3) '=' expression #opEq
;

access
: access '.' Id #dotAccess
| access '[' expression ']' #arrAccesss
| Id #idAccess
;

fnCall: access '(' args ')' ;

/* ================================================================================ */
// OPERATORS

prefix
: '!' #negatePrefix
| '&' #refPrefix
;

op1
: '^' #pow
;

op2
: '*' #mult
| '/' #div
| '%' #mod
;

op3
: '+' #plus
| '-' #min
;

op4
: DefOr #definedOr
| '..' #rangeOp
;

op5
: '==' #boolEq
| '!=' #boolNeq
| Gt #boolGt
| GtEq #boolGtEq
| Lt #boolLt
| LtEq #boolLtEq
;

op6
: '||' #or
| '&&' #and
;
