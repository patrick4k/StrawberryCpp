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
| scope_
| controlFlow_
| declaration_
;

scope_:  Lbrace  action_*  Rbrace  ;

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

body_: (scope_ | statement_  Semi ) ;

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
: loopKeywords_ expression_ scope_
;

loopBody: loopKeywords_  Lpar  expression_  Rpar  body_ ;

doWhileLoop:  Do  scope_ conditionalLoopKeywords_ expression_  Semi  ;

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
: conditionalKeywords_ expression_ scope_ ( Else  (body_ | ifStatement_))?
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

fnDeclaration:  Fn  Id  Lpar  parameters_  Rpar  scope_ ;

lambda:  Lpar  parameters_  Rpar   Sarrow  statement_ ;

parameters_
: ((Id  Com )* Id)? #params
| (Id  Com )* Id  Dot3  #paramsExpand
;

args: (argument_ ( Com  argument_)*)? ;

argument_
: value_ #arg
|  Dot3  value_ #argExpand
;

/* ================================================================================ */
// MATCH

// TODO: Rework REGEX

matchRegex
:  Squig  ( Lbrace  matchOptions_*  Rbrace )?  Bslash  matchContent_+  Bslash 
;

matchOptions_
:  RegReturnAll  #returnAllMatchOption
;

matchContent_
: matchContent_  Plus  #onOrMore
| matchContent_  Star  #zeroOrMore
| matchContent_  Qmark  #zeroOrOne
|  Lbrack  matchContent_ ( Bar  matchContent_)* Rbrack  #orMatch
|  Lpar  matchContent_  Rpar  #collectMatch
| matchChars_+ #chars
;

matchChars_
:  RegWord  #word
|  RegNewline  #newline
|  DefOr  #bslash
|  Dot  #wildCard
| ~( Lpar | Rpar | Lbrack | Rbrack | Bar ) #other
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
| lowPrioritySuffix_ #defaultSuffixExpr
| expression_ lowPrioritySuffix_ #suffixExpr
| identifyer_ #accessExpr
| identifyer_  Lpar  args  Rpar  #fnAccess
| looseFnCall #looseFnCallExpr
;

literal_
: keywordLiteral_ #keywordLit // TODO: figure out why keywords arent matching
| String #dStringLit // TODO: add escape characters
| StringLit #sStringLit
|  Lbrack  args  Rbrack  #arrayLit
|  Lbrace  (pair ( Com  pair)*  Com ?)?  Rbrace  #hashLit
| Number #numLit
;

pair: (Id|Key=(String|StringLit))  Colon  value_ ;

keywordLiteral_
:  True  #trueLit
|  False  #falseLit
|  Null  #nullLit
;

assign_
:  Decl  varDeclare_ ( Com  varDeclare_)* #declareAssign
| (identifyer_  Eq )+ value_ #eqAssign
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
;

identifyer_
: identifyer_  Dot  Id #dotAccess
| identifyer_  Lbrack  expression_  Rbrack  #arrAccesss
| Id #idAccess
| DefId #defaultAccess
;

idReference: Fslash identifyer_ ;

looseFnCall
: identifyer_ argument_ ( Com  argument_)*
;

/* ================================================================================ */
// OPERATORS

prefix_
:  ExPoint  #negatePrefix
|  Min  #negativePrefix
;

highPrioritySuffix_
:  ExPoint  #excitedSuff // TODO: Find purpose for !
;

op1_
:  Pow  #powOp
;

op2_
:  Star  #multOp
|  Bslash  #divOp
|  Mod  #modOp
;

op3_
:  Plus  #plusOp
|  Min  #minOp
;

op4_
:  DefOr  #definedOrOp
|  Dot2  #rangeOp
;

op5_
:  BoolEq  #boolEqOp
|  BoolNeq  #boolNeqOp
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
