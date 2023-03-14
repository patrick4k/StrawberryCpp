parser grammar StrawberryParserWithLexers;

options {
	tokenVocab = StrawberryLexer;
}

/* ================================================================================ */
// STRUCTURE

script
: action+ EOF
;

declaration
: fnDeclaration
;

action
: statement ';'
| scope
| controlFlow
| declaration
;

scope: '{' action* '}' ;

statement
: value
| scope
| keywordStatement
;

keywordStatement
: Return value? #returnStat
| Once statement #onceStat
| Next expression? #nextStat
| Last #lastStat
| Break #breakStat
;

body: (scope | statement ';') ;

/* ================================================================================ */
// CONTROL FLOW

controlFlow
: compoundStatement ';'
| loop
| ifStatement
;

loop
: loopScope
| loopBody
;

loopScope: loopKeywords expression scope ;

loopBody: loopKeywords '(' expression ')' body ;

compoundStatement: compoundAction (loopKeywords (expression | '(' args ')'))* ;

compoundAction
: compoundAction conditionalKeywords expression ('else' compoundAction)? #ifCompound
| compoundAction conditionalKeywords match ('else' compoundAction)? #ifRegexCompound
| ifScope #ifScopeCompound
| loopScope #loopScopeCompound
| statement #statementCompound
;

ifStatement
: ifScope
| ifBody
;

ifScope
: conditionalKeywords expression scope ('else' (body | ifStatement))? #exprIfScope
| conditionalKeywords match scope ('else' (body | ifStatement))? #matchIfScope
;

ifBody
: conditionalKeywords '(' expression ')' body ('else' (body | ifStatement))? #exprIfBody
| conditionalKeywords '(' match ')' body ('else' (body | ifStatement))? #matchIfBody
;

conditionalKeywords
: 'if' #ifKeyword
| 'unless' #unlessKeyword
;

loopKeywords
: 'for' #forLoop
| 'while' #whileLoop
| 'until' #untilLoop
;

/* ================================================================================ */
// FUNCTIONS ARGS PARAMETERS

fnDeclaration: 'fn' Id '(' parameters ')' scope ;

lambda: '(' parameters ')' '=>' statement ;

parameters
: ((Id ',')* Id)? #params
| (Id ',')* Id '...' #paramsExpand
;

args: (argument (',' argument)*)? ;

argument
: value #arg
| '...' value #argExpand
| looseFnCall #looseFnCallArg
;

/* ================================================================================ */
// MATCH

match
: '~' ('{'matchOptions*'}')? '/' matchContent* '/' #defaultmatch
| expression '~>' ('{'matchOptions*'}')? '/' matchContent* '/'  #exprmatch // TODO: remove left recursion
;

matchOptions
: 'return all'
;

matchContent
: matchChars '+' #onOrMore
| matchChars '*' #zeroOrMore
| matchChars '?' #zeroOrOne
;

matchChars
: '\\w' #word
| '\\n' #newline
| '\\\\' #bslash
| '.' #wildCard
| . #other
| '[' matchChars+ ']' #complexmatch
;

/* ================================================================================ */
// VALUE AND EXPRESSIONS

value
: expression
| lambda
;

expression
: '(' expression ')' #parenExpr
| match #matchExpr
| assign #assignExpr
| expression op1 expression #opExpr
| expression op2 expression #opExpr
| expression op3 expression #opExpr
| expression op4 expression #opExpr
| prefix expression #prefixExpr
| expression op5 expression #opExpr
| expression op6 expression #opExpr
| expression suffix #suffixExpr
| identifyer #accessExpr
| literal #litExpr
| looseFnCall #looseFnCallExpr
;

literal
: Dquote stringContent* Dquote #dStringLit
| Squote .*? Squote #sStringLit
| '[' args ']' #arrayLit
| Number #numLit
;

stringContent // TODO: Add escape characters
: '$' identifyer #identityString
| '\\$' #dollarSignString
| ~'"' #otherString
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
: Id argument (',' argument)*
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

suffix
: '\\\\' #orDefault
| '!' #excitedSuff // TODO: Find purpose for !
;
