grammar Strawberry;

/* =========================================================================== */
/* LEVEL 0 */

script
: statement* EOF
;

statement
: functionDeclar #fnDeclarStat
| blockFuncCall #blockFuncCallStat
| ifStatement #ifElseStat
| block #blockStatement
| declaration ENDL #declarationStat
| assignment ENDL #assignmentStat
| expression ENDL #exprStat
| expression? '!' #returnStat
;

functionDeclar
: 'fn' ID '(' paras=fn_ctx ')' ('{' lambdas=fn_ctx '}')? block
;

fn_ctx
: (ID (',' ID)* (',' dynSize=ID '...')?)?
| dynSize=ID '...'
;

block: '{' statement* '}' ;

ifStatement
: 'if' ('(' expression ')' | expression) true=statement ('else' false=statement)? #ifStat
| expression 'if' ('(' expression ')' | expression) ENDL #compoundIfStat
| 'unless' ('(' expression ')' | expression) false=statement ('else' true=statement)? #unlessStat
| expression 'unless' ('(' expression ')' | expression) ENDL #compoundUnlessStat
;

ifExpression
: 'if' '(' expression ')' true=expression ('else' false=expression)? #ifExpr
| 'unless' '(' expression ')' false=expression ('else' true=expression)? #unlessExpr
;

// TODO maybe add loops?

/* =========================================================================== */
/* LEVEL 1 */
/* declaraion / assingment and arguments */

arg
: declaration #declarArg
| assignment #assignArg
| expression #exprArg
| '...' identifier #expandIdentifier
| expression '..' expression #rangeArray
| expression '..' expression ':' expression #linespaceArray
| expression '..' expression '::' expression #linespaceCountArray
;

args
: (arg (',' arg)*)?
;

declaration
: 'let' declarOptions (',' declarOptions)+
;

declarOptions
: ID #declar
| ID '=' expression #declarEq
| ID '->' identifier #declarPoint
;

/* ASSIGNMENT */
assignment
: ID '=' expression #assign
| ID '=' lambda #assignLamda

// Op assign
| identifier '+=' expression #addAssign
| identifier '-=' expression #subAssign
| identifier '*=' expression #multAssign
| identifier '/=' expression #divAssign
| identifier '^=' expression #powAssign

| identifier '++' #plusPlusAssign
| identifier '--' #subSubAssign

// Point
| identifier '->' identifier #assignPoint
;

/* =========================================================================== */
/* LEVEL 2 */
/* contains arimatic and operations for expressions */

expression
// Tertary operations
: ifExpression #ifInlineExpr

// Set var
| declaration #declarExpr
| assignment #assignExpr

// Prefix expressions
| '-' expression #negExpr
| '\\' identifier #idRefExpr

// Operator expressions
| expression '^' expression #powExpr
| expression op=('*' | '/' | '%') expression #multDivModExpr
| expression op=('+' | '-') expression #addSubExpr

// Comparitive operations
| expression op=('>' | '>=' | '<' | '<=' | '==' | '!=') expression #exprCmpExpr

// Boolean operations
| expression op=('||' | '!|' | '&&' | '!&') expression #boolCmpExpr

// Enclosed expressions
| enclosedExpressions #enclosedExpr
| literal #litExpr
| fnCall #fnExpr
;

/* =========================================================================== */
/* LEVEL 3 */
/* literals, identifiers, the building blocks of the expressions */

enclosedExpressions
: '|' expression '|' #absExpr
| '(' expression ')' #parExpr
| arrayLiteral #arrayExpr
| block #blockExpr
;

literal
: keyword=('true' | 'false' | 'null') #keywordLit
| identifier #identifierExpr
| NUMBER #numberExpr
| STRING #stringExpr
;

lambda
: '(' fn_ctx ')' '->' block
;

arrayLiteral
: '[' args ']' #argsArray // either string or index lookup
;

identifier
: identifier ('.' ID '(' args ')')+ #objFnAccess
| fnCall ('.' ID '(' args ')')+ #fnFnAccess
| identifier ('.' ID)+ #objAttrAccess
| fnCall ('.' ID)+ #objAttrAccess
| identifier arrayLiteral #arrayExprAccess
| ID #idAccess
| '_' #defaultId
;

fnCall
: ID '(' args ')'
;

blockFuncCall
: ID args block #openBlockFuncCall
| ID '(' args ')' statement #closedBlockFuncCall
;

/* =========================================================================== */
/* LEXERS */

ID: WORD (WORD | DIGIT)*;

NUMBER: DIGIT+ ('.' DIGIT+)?;
STRING: '"' .*? '"';

DIGIT: [0-9];
WORD: (UCLETTER | LCLETTER)+;
CHAR: UCLETTER | LCLETTER | DIGIT;
fragment UCLETTER: [A-Z];
fragment LCLETTER: [a-z];

fragment NL: ('\r' | '\n')+;

IGNORE
: COMMENT -> skip
;

fragment COMMENT
:'//' ~('\r' | '\n')*
|'/*' .*? '*/'
;

WS
: [ \t\r\n] + -> skip
;

ENDL
: ';'
;
