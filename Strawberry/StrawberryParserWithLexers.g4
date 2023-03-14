parser grammar StrawberryParserWithLexers;

options {
	tokenVocab = StrawberryLexer;
}

/* ================================================================================ */
// STRUCTURE

script
: (action | controlFlow | declaration)+ EOF
;

declaration
: fnDeclaration
;

action
: statement ';'
| scope
;

scope: '{' action* '}' ;

statement
: value
| scope
| keywordStatement
;

keywordStatement
: Return value #returnStat
| Once statement #onceStat
| Next expression? #nextStat
| Last #lastStat
| Break #breakStat
;

body: (scope | statement ';') ;

/* ================================================================================ */
// FUNCTIONS ARGS PARAMETERS

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

controlFlow
: compoundStatement ';'
| loop
| ifStatement
;

loop
: loopKeywords expression scope
| loopKeywords '(' expression ')' body
;

compoundStatement: compoundAction (loopKeywords (expression | '(' args ')'))* ;

compoundAction
: compoundAction 'if' expression ('else' compoundAction)?
| compoundAction 'unless' expression ('else' compoundAction)?
| statement
;

ifStatement
: conditionalKeywords expression scope ('else' (body | ifStatement))? #ifScope
| conditionalKeywords '(' expression ')' body ('else' (body | ifStatement))? #ifBody
;

conditionalKeywords
: 'if' #ifKeyword
| 'unless' #unlessKeyword
;

loopKeywords
: 'for' #forCompound
| 'while' #whileCompound
| 'until' #untilCompound
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
| identifyer? '=' value #eqAssign
| identifyer? '^=' expression #powAssign
| identifyer? '*=' expression #multAssign
| identifyer? '/=' expression #divAssign
| identifyer? '%=' expression #modAssign
| identifyer? '+=' expression #addAssign
| identifyer? '-=' expression #minAssign
| identifyer? '++' #increm
| identifyer? '--' #decrem
;

identifyer
: identifyer '.' Id #dotAccess
| identifyer '[' expression ']' #arrAccesss
| identifyer '(' args ')' #fnAccess
| Id #idAccess
| '_' #defaultAccess
;

looseFnCall // TODO: revise 'foo() bar a'
: identifyer argument (',' argument)*
;

/* ================================================================================ */
// OPERATORS

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

prefix
: '!' #negatePrefix
| '\\' #refPrefix
| '-' #negativePrefix
| '~' #reversePrefix
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
