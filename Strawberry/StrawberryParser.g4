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
: statement Semi
| scope
| controlFlow
| declaration
;

scope: Lbrace action* Rbrace ;

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

body: (scope | statement Semi) ;

/* ================================================================================ */
// CONTROL FLOW

controlFlow
: compoundStatement Semi
| loop
| ifStatement
;

loop
: loopScope
| loopBody
;

loopScope: loopKeywords expression scope ;

loopBody: loopKeywords Lpar expression Rpar body ;

compoundStatement: compoundAction (loopKeywords (expression | Lpar args Rpar))* ;

compoundAction
: compoundAction conditionalKeywords expression (Else compoundAction)? #ifCompound
| compoundAction conditionalKeywords pattern (Else compoundAction)? #ifRegexCompound
| ifScope #ifScopeCompound
| loopScope #loopScopeCompound
| statement #statementCompound
;

ifStatement
: ifScope
| ifBody
;

ifScope
: conditionalKeywords expression scope (Else (body | ifStatement))? #exprIfScope
| conditionalKeywords pattern scope (Else (body | ifStatement))? #patternIfScope
;

ifBody
: conditionalKeywords Lpar expression Rpar body (Else (body | ifStatement))? #exprIfBody
| conditionalKeywords Lpar pattern Rpar body (Else (body | ifStatement))? #patternIfBody
;

conditionalKeywords
: If #ifKeyword
| Unless #unlessKeyword
;

loopKeywords
: For #forLoop
| While #whileLoop
| Until #untilLoop
;

/* ================================================================================ */
// FUNCTIONS ARGS PARAMETERS

fnDeclaration: Fn Id Lpar parameters Rpar scope ;

lambda: Lpar parameters Rpar Darrpw statement ;

parameters
: ((Id Com)* Id)? #params
| (Id Com)* Id Dot3 #paramsExpand
;

args
: (argument (Com argument)*)?
;

argument
: value #arg
| Dot3 value #argExpand
| looseFnCall #looseFnCallArg
;

/* ================================================================================ */
// PATTERNS / REGEX

pattern
: Letter* Lbrace patternContent* Rbrace #defaultPattern
| Lbrace patternContent* Rbrace Letter* #defaultPattern
| Letter* Lbrace patternContent* Rbrace Sarrow expression #exprPattern
| expression Sarrow Lbrace patternContent* Rbrace Letter* #exprPattern
;

patternContent
: '\\w' #word
| Dot #wildCard
| . #other
;

/* ================================================================================ */
// VALUE AND EXPRESSIONS

value
: expression
| lambda
;

expression
: Lpar expression Rpar #parenExpr
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
| Lbrack args Rbrack #arrayLit
| Number #numLit
;

stringContent // TODO: Add escape characters
: Doll identifyer #identityString
| DollLit #dollarSignString
| ~Dquote #otherString
;

assign
: Decl Id Eq value #declareAssign
| identifyer? Eq value #eqAssign
| identifyer? PowEq expression #powAssign
| identifyer? MultEq expression #multAssign
| identifyer? DivEq expression #divAssign
| identifyer? ModEq expression #modAssign
| identifyer? PlusEq expression #addAssign
| identifyer? MinEq expression #minAssign
| identifyer? Increm #increm
| identifyer? Decrem #decrem
;

identifyer
: identifyer Dot Id #dotAccess
| identifyer Lbrack expression Rbrack #arrAccesss
| identifyer Lpar args Rpar #fnAccess
| Id #idAccess
| Uscore #defaultAccess
;

looseFnCall // TODO: revise 'foo() bar a'
: Id argument (Com argument)*
;

/* ================================================================================ */
// OPERATORS

op1
: Pow #pow
;

op2
: Star #mult
| Bslash #div
| Mod #mod
;

op3
: Plus #plus
| Min #min
;

op4
: DefOr #definedOr
| Dot2 #rangeOp
;

prefix
: ExPoint #negatePrefix
| Fslash #refPrefix
| Min #negativePrefix
;

op5
: BoolEq #boolEq
| BoolNeq #boolNeq
| Gt #boolGt
| GtEq #boolGtEq
| Lt #boolLt
| LtEq #boolLtEq
;

op6
: Or #or
| And #and
;

suffix
: DefOr #orDefault
| ExPoint #excitedSuff // TODO: Find purpose for !
;
