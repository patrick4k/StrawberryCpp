parser grammar StrawberryParser;

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
: statement_  Semi 
| scope
| controlFlow_
| declaration_
;

scope:  Lbrace  action_*  Rbrace  ;

statement_
: keywordStatement_
| assign_
| expression_
| scope
;

keywordStatement_
: Return value_? #returnStat
| Once statement_ #onceStat
| Next expression_? #nextStat
| Last #lastStat
| Break #breakStat
;

body_: (scope | statement_  Semi ) ;

/* ================================================================================ */
// CONTROL FLOW

controlFlow_
: compoundStatement  Semi 
| loop_
| ifStatement_
;

loop_
: loopScope
| loopBody
| doWhileLoop
;

loopScope
: loopKeywords_ expression_ scope
;

loopBody: loopKeywords_  Lpar  expression_  Rpar  body_ ;

doWhileLoop:  Do  scope conditionalLoopKeywords_ expression_  Semi  ;

compoundStatement: compoundAction_ (loopKeywords_ (expression_ |  Lpar  args  Rpar ))* ;

compoundAction_
: compoundAction_ conditionalKeywords_ expression_ ( Else  compoundAction_)? #ifCompound
| ifScope #ifScopeCompound
| loopScope #loopScopeCompound
| statement_ #statementCompound
;

ifStatement_
: ifScope
| ifBody
;

ifScope
: conditionalKeywords_ expression_ scope ( Else  (body_ | ifStatement_))?
;

ifBody
: conditionalKeywords_  Lpar  expression_  Rpar  body_ ( Else  (body_ | ifStatement_))?
;

conditionalKeywords_
:  If  #ifKeyword
|  Unless  #unlessKeyword
;

loopKeywords_
:  For  #forLoop
|  Loop  #loopLoop
| conditionalLoopKeywords_ #conditionalLoop
;

conditionalLoopKeywords_
:  While  #whileLoop
|  Until  #untilLoop
;

/* ================================================================================ */
// FUNCTIONS ARGS PARAMETERS

fnDeclaration:  Fn  Id  Lpar  parameters_  Rpar  scope ;

lambda:  Lpar  parameters_  Rpar   Sarrow  statement_ ;

parameters_
: ((Id  Com )* Id)? #params
| (Id  Com )* Id  Dot3  #paramsExpand
;

args: (argument_ ( Com  argument_)*)? ;

argument_
: value_ #arg
|  Dot3  value_ #argExpand
| expression_  Dot2  expression_ #rangeArg
;

/* ================================================================================ */
// MATCH

// TODO: Rework REGEX

matchRegex
:  Squig  ( Lbrace  matchOptions_*  Rbrace )?  Bslash  Bslash 
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
|  Lpar  expression_  Rpar  #parenExpr
|  Lpar  assign_  Rpar  #assignExpr
| prefix_ expression_ #prefixExpr
| highPrioritySuffix_ #defaultSuffixExpr
| expression_ highPrioritySuffix_ #suffixExpr
| expression_ op1_ expression_ #opExpr1
| expression_ op2_ expression_ #opExpr2
| expression_ op3_ expression_ #opExpr3
| expression_ op4_ expression_ #opExpr4
| expression_ op5_ expression_ #opExpr5
| expression_ op6_ expression_ #opExpr6
| expression_  Dot  op1_ expression_ #dotOpExpr1 // TODO: Implment matrix dot operations
| expression_  Dot  op2_ expression_ #dotOpExpr2
| lowPrioritySuffix_ #defaultSuffixExpr
| expression_ lowPrioritySuffix_ #suffixExpr
|  Fslash  identifyer_ #derefExpr
| identifyer_ #accessExpr_
| identifyer_  Lpar  args  Rpar  #fnAccess
| Id  ColonColon  identifyer_  Lpar  args  Rpar  #fnWithTagAccess
| looseFnCall_ #looseFnCallExpr
;

literal_
: keywordLiteral_ #keywordLit_
| String #dStringLit // TODO: add escape characters
| StringLit #sStringLit
|  Lbrack  args ( Semi  args)*  Semi ?  Rbrack  #arrayLit
|  Lbrace  (pair_ ( Com  pair_)*  Com ?)?  Rbrace  #hashLit
|  Lbrace  args ( Semi  args)*  Semi ?  Rbrace  #matrixLit // TODO: implement matrix type
| Number #numLit
;

pair_
: (Id|Key=(String|StringLit))  Colon  value_ #pairValue
| (Id|Key=(String|StringLit))  Colon  args #pairArgs
;

keywordLiteral_
:  True  #trueLit
|  False  #falseLit
|  Null  #nullLit
;

assign_
:  Decl  varDeclare_ ( Com  varDeclare_)* #declareAssign
| (identifyer_  Eq )+ value_ #eqAssign
| (identifyer_  Eq )+ args #eqAssignArgs
| identifyer_  RLarrow  value_ #setRefAssign
| identifyer_  RLarrow  args #setRefAssignArgs
|  Eq  value_ #defaultEqAssign
| identifyer_?  PowEq  expression_ #powAssign
| identifyer_?  MultEq  expression_ #multAssign
| identifyer_?  DivEq  expression_ #divAssign
| identifyer_?  ModEq  expression_ #modAssign
| identifyer_?  PlusEq  expression_ #addAssign
| identifyer_?  MinEq  expression_ #minAssign
| identifyer_?  Increm  #increm
| identifyer_?  Decrem  #decrem
;

varDeclare_
: Id #noInitVarDeclar
| Id  Eq  value_ #initVarDeclar
| Id  Eq  args #initVarDeclarArgs
;

identifyer_
: identifyer_  Dot  Id #dotAccess
| identifyer_  Lbrack  expression_  Rbrack  #arrAccess
| identifyer_  Lbrack  args  Rbrack  #arrAccessArgs
| Id #idAccess
| DefId #defaultAccess
;

idReference:  AndSign  identifyer_ ;

looseFnCall_
: identifyer_ args #looseFnCall
| Id  ColonColon  identifyer_ args #looseFnWithTagCall
;

/* ================================================================================ */
// OPERATORS

prefix_
:  ExPoint  #negatePrefix
|  Min  #negativePrefix
|  Doll  #sizePrefix
;

highPrioritySuffix_
:  ExPoint  #excitedSuff // TODO: Find purpose for !
;

op1_
:  Pow  #powOp
;

op2_
:  Star  #multOp
|  StarStar  #crossMultOp
|  Bslash  #divOp
|  Mod  #modOp
;

op3_
:  Plus  #plusOp
|  Min  #minOp
;

op4_
:  DefOr  #definedOrOp
;

op5_
:  BoolEq  #boolEqOp
|  BoolDeepEq  #boolDeepEqOp
|  BoolNeq  #boolNeqOp
|  BoolDeepNeq  #boolDeepNeqOp
| Gt #boolGtOp
| GtEq #boolGtEqOp
| Lt #boolLtOp
| LtEq #boolLtEqOp
;

op6_
:  Or  #orOp
|  Bar  #bitOrOp
|  And  #andOp
|  AndSign  #bitAndOp
;

lowPrioritySuffix_
: matchRegex #matchSuff
;
