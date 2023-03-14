parser grammar StrawberryParser;

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
: statement Semi
| scope
;

scope: Lbrace action* Rbrace ;

statement
: value
| scope
| keywordStatement
;

keywordStatement
: Return value #returnStat
| Once statement #onceStat
| Next expression #nextStat
| Last #lastStat
| Break #breakStat
;

body: (scope | statement Semi) ;

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
// CONTROL FLOW

controlFlow
: compoundStatement Semi
| loop
| ifStatement
;

loop
: loopKeywords expression scope
| loopKeywords Lpar expression Rpar body
;

compoundStatement: compoundAction (loopKeywords (expression | Lpar args Rpar))* ;

compoundAction
: compoundAction If expression (Else compoundAction)?
| compoundAction Unless expression (Else compoundAction)?
| statement
;

ifStatement
: conditionalKeywords expression scope (Else (body | ifStatement))? #ifScope
| conditionalKeywords Lpar expression Rpar body (Else (body | ifStatement))? #ifBody
;

conditionalKeywords
: If #ifKeyword
| Unless #unlessKeyword
;

loopKeywords
: For #forCompound
| While #whileCompound
| Until #untilCompound
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
| identifyer #accessExpr
| literal #litExpr
| looseFnCall #looseFnCallExpr
;

literal
: Dquote .*? Dquote #dStringLit // TODO: revise double quotes
| Squote .*? Squote #sStringLit
| Lbrack args Rbrack #arrayLit
| Number #numLit
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
: identifyer argument (Com argument)*
;

/* ================================================================================ */
// OPERATORS

prefix
: ExPoint #negatePrefix
| Fslash #refPrefix
| Min #negativePrefix
| Squig #reversePrefix
;

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
