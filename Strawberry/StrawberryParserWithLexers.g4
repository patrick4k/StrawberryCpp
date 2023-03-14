parser grammar StrawberryParserWithLexers;

options {
	tokenVocab = StrawberryLexer;
}

/* ================================================================================ */
// SCRIPT STRUCTURE

script
: (action|controlFlow|declaration)+ EOF
;

declaration
: fnDeclaration
;

action
: statement ';'
| scope
;

controlFlow
: compoundStatement ';'
| forLoop
;

scope: '{' action* '}' ;

statement
: value
| scope
;

fnDeclaration: 'fn' Id '(' parameters ')' scope ;

lambda: '(' parameters ')' '=>' statement ;

parameters
: ((Id ',')* Id)? #params
| (Id ',')* Id '...' #paramsExpand
;

args
: (argument (',' argument)*)?
;

argument
: value #arg
| '...' value #argExpand
| looseFnCall #looseFnCallArg
;

/* ================================================================================ */
// CONTROL FLOW

loopBody
: '{' (statement ';'| scope | loopActions)* '}'
;

forLoop
: 'for' expression loopBody
| 'for' '(' expression ')' (loopBody | statement ';')
;

/* Compount Statements */
compoundStatement
: compoundAction (compoundKeyword (expression| '(' args ')'))*
;

compoundAction
: compoundAction 'if' expression ('else' compoundAction)?
| compoundAction 'unless' expression ('else' compoundAction)?
| loopActions
| value
;

compoundKeyword
: 'for' #forCompound
| 'while' #whileCompound
| 'until' #untilCompound
;

loopActions
: 'break' #breakAction
| 'once' scope #onceAction
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
| expression op1 expression #opExpr
| expression op2 expression #opExpr
| expression op3 expression #opExpr
| expression op4 expression #opExpr
| prefix expression #prefixExpr
| expression op5 expression #opExpr
| expression op6 expression #opExpr
| identifyer #accessExpr
| literal #litExpr
| looseFnCall #looseFnCallExpr
;

literal
: Dquote .*? Dquote #dStringLit // TODO: revise double quotes
| Squote .*? Squote #sStringLit
| '[' args ']' #arrayLit
| Number #numLit
;

assign
: 'let' Id '=' value #declareAssign
| identifyer '=' value #eqAssign
| identifyer '^=' expression #powAssign
| identifyer '*=' expression #multAssign
| identifyer '/=' expression #divAssign
| identifyer '%=' expression #modAssign
| identifyer '+=' expression #addAssign
| identifyer '-=' expression #minAssign
| identifyer '++' #increm
| identifyer '--' #decrem
;

identifyer
: identifyer '.' Id #dotAccess
| identifyer '[' expression ']' #arrAccesss
| identifyer '(' args ')' #fnAccess
| Id #idAccess
| '_' #defaultAccess
;

looseFnCall
: identifyer argument (',' argument)*
;

/* ================================================================================ */
// OPERATORS

prefix
: '!' #negatePrefix
| '\\' #refPrefix
| '-' #negativePrefix
| '~' #reversePrefix
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
