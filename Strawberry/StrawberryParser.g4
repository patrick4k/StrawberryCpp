parser grammar StrawberryParser;

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
: statement  Semi 
| scope
| controlFlow
| declaration
;

scope:  Lbrace  action*  Rbrace  ;

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

body: (scope | statement  Semi ) ;

/* ================================================================================ */
// CONTROL FLOW

controlFlow
: compoundStatement  Semi 
| loop
| ifStatement
;

loop
: loopScope
| loopBody
;

loopScope: loopKeywords expression scope ;

loopBody: loopKeywords  Lpar  expression  Rpar  body ;

compoundStatement: compoundAction (loopKeywords (expression |  Lpar  args  Rpar ))* ;

compoundAction
: compoundAction conditionalKeywords expression ( Else  compoundAction)? #ifCompound
| ifScope #ifScopeCompound
| loopScope #loopScopeCompound
| statement #statementCompound
;

ifStatement
: ifScope
| ifBody
;

ifScope
: conditionalKeywords expression scope ( Else  (body | ifStatement))? #exprIfScope
;

ifBody
: conditionalKeywords  Lpar  expression  Rpar  body ( Else  (body | ifStatement))? #exprIfBody
;

conditionalKeywords
:  If  #ifKeyword
|  Unless  #unlessKeyword
;

loopKeywords
:  For  #forLoop
|  While  #whileLoop
|  Until  #untilLoop
;

/* ================================================================================ */
// FUNCTIONS ARGS PARAMETERS

fnDeclaration:  Fn  Id  Lpar  parameters  Rpar  scope ;

lambda:  Lpar  parameters  Rpar   Darrow  statement ;

parameters
: ((Id  Com )* Id)? #params
| (Id  Com )* Id  Dot3  #paramsExpand
;

args: (argument ( Com  argument)*)? ;

argument
: value #arg
|  Dot3  value #argExpand
| looseFnCall #looseFnCallArg
;

/* ================================================================================ */
// MATCH

matchRegex
:  Squig  ( Lbrace  matchOptions*  Rbrace )?  Bslash  matchContent+  Bslash 
;

matchOptions
:  RegReturnAll 
;

matchContent
: matchContent  Plus  #onOrMore
| matchContent  Star  #zeroOrMore
| matchContent  Qmark  #zeroOrOne
|  Lbrack  matchContent ( Bar  matchContent)* Rbrack  #orMatch
|  Lpar  matchContent  Rpar  #collectMatch
| matchChars+ #chars
;

matchChars
:  RegWord  #word
|  RegNewline  #newline
|  DefOr  #bslash
|  Dot  #wildCard
| ~( Lpar | Rpar | Lbrack | Rbrack | Bar ) #other
;

/* ================================================================================ */
// VALUE AND EXPRESSIONS

value
: expression
| lambda
;

expression
:  Lpar  expression  Rpar  #parenExpr
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
| identifyer  Lpar  args  Rpar  #fnAccess
| literal #litExpr
| looseFnCall #looseFnCallExpr
;

literal
: Dquote stringContent* Dquote #dStringLit
| Squote .*? Squote #sStringLit
|  Lbrack  args  Rbrack  #arrayLit
| Number #numLit
;

stringContent // TODO: Add escape characters
:  Doll  identifyer #identityString
|  DollLit  #dollarSignString
| WS #whitespace // TODO: whitespace not working
| ~ Dquote  #otherString
;

assign
:  Decl  Id  Eq  value #declareAssign
| identifyer?  Eq  value #eqAssign
| identifyer?  PowEq  expression #powAssign
| identifyer?  MultEq  expression #multAssign
| identifyer?  DivEq  expression #divAssign
| identifyer?  ModEq  expression #modAssign
| identifyer?  PlusEq  expression #addAssign
| identifyer?  MinEq  expression #minAssign
| identifyer?  Increm  #increm
| identifyer?  Decrem  #decrem
;

identifyer
: identifyer  Dot  Id #dotAccess
| identifyer  Lbrack  expression  Rbrack  #arrAccesss
| Id #idAccess
| DefId #defaultAccess
;

looseFnCall // TODO: revise 'foo() bar a'
: Id argument ( Com  argument)*
;

/* ================================================================================ */
// OPERATORS

prefix
:  ExPoint  #negatePrefix
|  Fslash  #refPrefix
|  Min  #negativePrefix
;

highPrioritySuffix
:  ExPoint  #excitedSuff // TODO: Find purpose for !
;

op1
:  Pow  #powOp
;

op2
:  Star  #multOp
|  Bslash  #divOp
|  Mod  #modOp
;

op3
:  Plus  #plusOp
|  Min  #minOp
;

op4
:  DefOr  #definedOrOp
|  Dot2  #rangeOp
;

op5
:  BoolEq  #boolEqOp
|  BoolNeq  #boolNeqOp
| Gt #boolGtOp
| GtEq #boolGtEqOp
| Lt #boolLtOp
| LtEq #boolLtEqOp
;

op6
:  Or  #orOp
|  And  #andOp
;

lowPrioritySuffix
: matchRegex #matchSuff
;
