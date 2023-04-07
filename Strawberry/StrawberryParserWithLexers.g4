parser grammar StrawberryParserWithLexers;

@parser::members {
virtual bool isWithinFnDeclare() const = 0;
virtual bool isWithinLoop() const = 0;
}

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
| scope
| controlFlow_
| declaration_
;

scope: '{' action_* '}' ;

statement_
: keywordStatement_
| assign_
| expression_
| scope
;

keywordStatement_
: Return value_? {isWithinFnDeclare()}? #returnStat
| Once statement_ {isWithinLoop()}? #onceStat
| Next expression_? {isWithinLoop()}? #nextStat
| Last {isWithinLoop()}? #lastStat
| Break {isWithinLoop()}? #breakStat
;

body_: (scope | statement_ ';') ;

/* ================================================================================ */
// CONTROL FLOW

controlFlow_
: compoundStatement ';'
| loop_
| ifStatement_
;

loop_
: loopOnScope_
| loopOnBody_
| doWhileLoop
;

loopOnScope_
: loopKeywords_ expression_ scope #loopOnScopeOnExpr
| loopKeywords_ args scope #loopOnScopeOnArgs
;

loopOnBody_
: loopKeywords_ '(' expression_ ')' body_ #loopOnBodyOnExpr
| loopKeywords_ '(' args ')' body_ #loopOnBodyOnArgs
;

doWhileLoop: 'do' scope conditionalLoopKeywords_ expression_ ';' ;

compoundStatement: compoundAction_ (loopKeywords_ (expression_ | '(' args ')'))* ;

compoundAction_
: compoundAction_ conditionalKeywords_ expression_ ('else' compoundAction_)? #ifCompound
| ifScope #ifScopeCompound
| loopOnScope_ #loopScopeCompound
| statement_ #statementCompound
;

ifStatement_
: ifScope
| ifBody
;

ifScope
: conditionalKeywords_ expression_ scope ('else' (body_ | ifStatement_))?
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

fnDeclaration: 'fn' Id '(' parameters_ ')' scope ;

lambda: '(' parameters_ ')' '->' statement_ ;

parameters_
: ((Id ',')* Id)? #params
| (Id ',')* Id '...' #paramsExpand
;

args: (argument_ (',' argument_)*)? ;

argument_
: value_ #arg
| '...' value_ #argExpand
| expression_ '..' expression_ #rangeArg
;

/* ================================================================================ */
// MATCH

// TODO: Rework REGEX

matchRegex
: '~' ('{' matchOptions_* '}')? '/''/'
;

matchOptions_
: Word #returnAllMatchOption
;

/* ================================================================================ */
// VALUE AND EXPRESSIONS

value_
: expression_
| lambda
| idReference
;

expression_
: literal_ #litExpr_
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
| expression_ '.' op1_ expression_ #dotOpExpr1 // TODO: Implment matrix dot operations
| expression_ '.' op2_ expression_ #dotOpExpr2
| lowPrioritySuffix_ #defaultSuffixExpr
| expression_ lowPrioritySuffix_ #suffixExpr
| '\\' identifyer_ #derefExpr // TODO: Revisit deref operation
| identifyer_ #accessExpr_
| identifyer_ '(' args ')' #fnAccess
| Id '::' identifyer_ '(' args ')' #fnWithTagAccess
| looseFnCall_ #looseFnCallExpr
;

literal_
: keywordLiteral_ #keywordLit_
| String #dStringLit // TODO: add escape characters
| StringLit #sStringLit
| '[' args (';' args)* ';'? ']' #arrayLit
| '{' (pair_ (',' pair_)* ','?)? '}' #hashLit
| '{' args (';' args)* ';'? '}' #matrixLit // TODO: implement matrix type
| Number #numLit
;

pair_
: (Id|Key=(String|StringLit)) ':' value_ #pairValue
| (Id|Key=(String|StringLit)) ':' args #pairArgs
;

keywordLiteral_
: 'true' #trueLit
| 'false' #falseLit
| 'null' #nullLit
;

assign_
: 'let' varDeclare_ (',' varDeclare_)* #declareAssign
| (identifyer_ '=')+ value_ #eqAssign
| (identifyer_ '=')+ args #eqAssignArgs
| identifyer_ '<<' value_ #setRefAssign
| identifyer_ '<<' args #setRefAssignArgs
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
| Id '=' args #initVarDeclarArgs
;

identifyer_
: identifyer_ '.' Id #dotAccess
| identifyer_ '[' expression_ ']' #arrAccess
| identifyer_ '[' args ']' #arrAccessArgs
| Id #idAccess
| DefId #defaultAccess
;

idReference: '&' identifyer_ ;

looseFnCall_
: identifyer_ args #looseFnCall
| Id '::' identifyer_ args #looseFnWithTagCall
;

/* ================================================================================ */
// OPERATORS

prefix_
: '!' #negatePrefix
| '-' #negativePrefix
| '$' #sizePrefix
;

highPrioritySuffix_
: '!' #excitedSuff // TODO: Find purpose for !
;

op1_
: '^' #powOp
;

op2_
: '*' #multOp
| '**' #crossMultOp
| '/' #divOp
| '%' #modOp
;

op3_
: '+' #plusOp
| '-' #minOp
;

op4_
: '\\\\' #definedOrOp
;

op5_
: '==' #boolEqOp
| '===' #boolDeepEqOp
| '!=' #boolNeqOp
| '!==' #boolDeepNeqOp
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
