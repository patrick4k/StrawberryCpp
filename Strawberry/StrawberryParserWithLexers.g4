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
: keywordStatement
| assign
| expression
| scope
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

lambda: '(' parameters ')' '->' statement ;

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
: literal #litExpr
| '(' expression ')' #parenExpr
| '(' assign ')' #assignExpr
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
| looseFnCall #looseFnCallExpr
;

literal
: keywordLiteral #keywordLit // TODO: figure out why keywords arent matching
| String #dStringLit // TODO: add escape characters
| StringLit #sStringLit
| '[' args ']' #arrayLit
| Number #numLit
;

keywordLiteral
: 'true' #trueLit
| 'false' #falseLit
| 'null' #nullLit
;

assign
: 'let' varDeclare (',' varDeclare)* #declareAssign
| (identifyer '=')+ value #eqAssign
| '=' value #defaultEqAssign
| identifyer? '^=' expression #powAssign
| identifyer? '*=' expression #multAssign
| identifyer? '/=' expression #divAssign
| identifyer? '%=' expression #modAssign
| identifyer? '+=' expression #addAssign
| identifyer? '-=' expression #minAssign
| identifyer? '++' #increm
| identifyer? '--' #decrem
;

varDeclare
: Id
| Id '=' value
;

identifyer
: identifyer '.' Id #dotAccess
| identifyer '[' expression ']' #arrAccesss
| Id #idAccess
| DefId #defaultAccess
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
| '|' #bitOrOp
| '&&' #andOp
| '&' #bitAndOp
;

lowPrioritySuffix
: matchRegex #matchSuff
;
