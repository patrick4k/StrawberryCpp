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
;

ifBody
: conditionalKeywords '(' expression ')' body ('else' (body | ifStatement))? #exprIfBody
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

matchRegex
: '~' ('{' matchOptions* '}')? '/' matchContent+ '/'
;

matchOptions
: 'return all'
;

matchContent
: matchContent '+' #onOrMore
| matchContent '*' #zeroOrMore
| matchContent '?' #zeroOrOne
| '[' matchContent ('|' matchContent)*']' #orMatch
| '(' matchContent ')' #collectMatch
| matchChars+ #chars
;

matchChars
: '\\w' #word
| '\\n' #newline
| '\\\\' #bslash
| '.' #wildCard
| ~('('|')'|'['|']'|'|') #other
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
| highPrioritySuffix #defaultSuffixExpr
| expression highPrioritySuffix #suffixExpr
| expression op1 expression #opExpr
| expression op2 expression #opExpr
| expression op3 expression #opExpr
| expression op4 expression #opExpr
| expression op5 expression #opExpr
| expression op6 expression #opExpr
| lowPrioritySuffix #defaultSuffixExpr
| expression lowPrioritySuffix #suffixExpr
| identifyer #accessExpr
| identifyer '(' args ')' #fnAccess
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
| WS #whitespace // TODO: whitespace not working
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
| Id #idAccess
| DefId #defaultAccess
;

looseFnCall // TODO: revise 'foo() bar a'
: Id argument (',' argument)*
;

/* ================================================================================ */
// OPERATORS

prefix
: '!' #negatePrefix
| '\\' #refPrefix
| '-' #negativePrefix
;

highPrioritySuffix
: '!' #excitedSuff // TODO: Find purpose for !
;

op1
: '^' #powOp
;

op2
: '*' #multOp
| '/' #divOp
| '%' #modOp
;

op3
: '+' #plusOp
| '-' #minOp
;

op4
: '\\\\' #definedOrOp
| '..' #rangeOp
;

op5
: '==' #boolEqOp
| '!=' #boolNeqOp
| Gt #boolGtOp
| GtEq #boolGtEqOp
| Lt #boolLtOp
| LtEq #boolLtEqOp
;

op6
: '||' #orOp
| '&&' #andOp
;

lowPrioritySuffix
: matchRegex #matchSuff
;
