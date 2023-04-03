parser grammar StrawberryParserWithLexers;

options {
	tokenVocab = StrawberryLexer;
}

/* ================================================================================ */
// STRUCTURE

script_
: action_+ EOF
;

declaration_
: fnDeclaration
;

action_
: statement_ ';'
| scope_
| controlFlow_
| declaration_
;

scope_: '{' action_* '}' ;

statement_
: keywordStatement_
| assign_
| expression_
| scope_
;

keywordStatement_
: Return value_? #returnStat
| Once statement_ #onceStat
| Next expression_? #nextStat
| Last #lastStat
| Break #breakStat
;

body_: (scope_ | statement_ ';') ;

/* ================================================================================ */
// CONTROL FLOW

controlFlow_
: compoundStatement ';'
| loop_
| ifStatement_
;

loop_
: loopScope
| loopBody
| doWhileLoop
;

loopScope
: loopKeywords_ expression_ scope_
;

loopBody: loopKeywords_ '(' expression_ ')' body_ ;

doWhileLoop: 'do' scope_ conditionalLoopKeywords_ expression_ ';' ;

compoundStatement: compoundAction_ (loopKeywords_ (expression_ | '(' args ')'))* ;

compoundAction_
: compoundAction_ conditionalKeywords_ expression_ ('else' compoundAction_)? #ifCompound
| ifScope #ifScopeCompound
| loopScope #loopScopeCompound
| statement_ #statementCompound
;

ifStatement_
: ifScope
| ifBody
;

ifScope
: conditionalKeywords_ expression_ scope_ ('else' (body_ | ifStatement_))?
;

ifBody
: conditionalKeywords_ '(' expression_ ')' body_ ('else' (body_ | ifStatement_))?
;

conditionalKeywords_
: 'if' #ifKeyword
| 'unless' #unlessKeyword
;

loopKeywords_
: 'for' #forLoop
| 'loop' #loopLoop
| conditionalLoopKeywords_ #conditionalLoop
;

conditionalLoopKeywords_
: 'while' #whileLoop
| 'until' #untilLoop
;

/* ================================================================================ */
// FUNCTIONS ARGS PARAMETERS

fnDeclaration: 'fn' Id '(' parameters_ ')' scope_ ;

lambda: '(' parameters_ ')' '->' statement_ ;

parameters_
: ((Id ',')* Id)? #params
| (Id ',')* Id '...' #paramsExpand
;

args: (argument_ (',' argument_)*)? ;

argument_
: value_ #arg
| '...' value_ #argExpand
;

/* ================================================================================ */
// MATCH

// TODO: Rework REGEX

matchRegex
: '~' ('{' matchOptions_* '}')? '/' matchContent_+ '/'
;

matchOptions_
: 'return all' #returnAllMatchOption
;

matchContent_
: matchContent_ '+' #onOrMore
| matchContent_ '*' #zeroOrMore
| matchContent_ '?' #zeroOrOne
| '[' matchContent_ ('|' matchContent_)*']' #orMatch
| '(' matchContent_ ')' #collectMatch
| matchChars_+ #chars
;

matchChars_
: '\\w' #word
| '\\n' #newline
| '\\\\' #bslash
| '.' #wildCard
| ~('('|')'|'['|']'|'|') #other
;

/* ================================================================================ */
// VALUE AND EXPRESSIONS

value_
: expression_
| lambda
| idReference
| pair
;

expression_
: literal_ #litExpr
| '(' expression_ ')' #parenExpr
| '(' assign_ ')' #assignExpr
| prefix_ expression_ #prefixExpr
| highPrioritySuffix_ #defaultSuffixExpr
| expression_ highPrioritySuffix_ #suffixExpr
| expression_ op1_ expression_ #opExpr1
| expression_ op2_ expression_ #opExpr2
| expression_ op3_ expression_ #opExpr3
| expression_ op4_ expression_ #opExpr4
| expression_ op5_ expression_ #opExpr5
| expression_ op6_ expression_ #opExpr6
| lowPrioritySuffix_ #defaultSuffixExpr
| expression_ lowPrioritySuffix_ #suffixExpr
| identifyer_ #accessExpr
| identifyer_ '(' args ')' #fnAccess
| looseFnCall #looseFnCallExpr
;

literal_
: keywordLiteral_ #keywordLit // TODO: figure out why keywords arent matching
| String #dStringLit // TODO: add escape characters
| StringLit #sStringLit
| '[' args ']' #arrayLit
| '{' (pair (',' pair)* ','?)? '}' #hashLit
| Number #numLit
;

pair: (Id|Key=(String|StringLit)) ':' value_ ;

keywordLiteral_
: 'true' #trueLit
| 'false' #falseLit
| 'null' #nullLit
;

assign_
: 'let' varDeclare_ (',' varDeclare_)* #declareAssign
| (identifyer_ '=')+ value_ #eqAssign
| '=' value_ #defaultEqAssign
| identifyer_? '^=' expression_ #powAssign
| identifyer_? '*=' expression_ #multAssign
| identifyer_? '/=' expression_ #divAssign
| identifyer_? '%=' expression_ #modAssign
| identifyer_? '+=' expression_ #addAssign
| identifyer_? '-=' expression_ #minAssign
| identifyer_? '++' #increm
| identifyer_? '--' #decrem
;

varDeclare_
: Id #noInitVarDeclar
| Id '=' value_ #initVarDeclar
;

identifyer_
: identifyer_ '.' Id #dotAccess
| identifyer_ '[' expression_ ']' #arrAccesss
| Id #idAccess
| DefId #defaultAccess
;

idReference: Fslash identifyer_ ;

looseFnCall
: identifyer_ argument_ (',' argument_)*
;

/* ================================================================================ */
// OPERATORS

prefix_
: '!' #negatePrefix
| '-' #negativePrefix
;

highPrioritySuffix_
: '!' #excitedSuff // TODO: Find purpose for !
;

op1_
: '^' #powOp
;

op2_
: '*' #multOp
| '/' #divOp
| '%' #modOp
;

op3_
: '+' #plusOp
| '-' #minOp
;

op4_
: '\\\\' #definedOrOp
| '..' #rangeOp
;

op5_
: '==' #boolEqOp
| '!=' #boolNeqOp
| Gt #boolGtOp
| GtEq #boolGtEqOp
| Lt #boolLtOp
| LtEq #boolLtEqOp
;

op6_
: '||' #orOp
| '|' #bitOrOp
| '&&' #andOp
| '&' #bitAndOp
;

lowPrioritySuffix_
: matchRegex #matchSuff
;
