lexer grammar StrawberryLexer;

/* Program Specific */
Fn: 'fn' ;
Decl: 'let' ;
If: 'if' ;
Unless: 'unless' ;
Else: 'else' ;
Do: 'do' ;
While: 'while' ;
Until: 'until' ;
For: 'for' ;
Loop: 'loop' ;

/* Keywords */
Return: 'return' ;
Break: 'break' ;
Next: 'next' ;
Last: 'last' ;
Once: 'once' ;

/* Literals */
True: 'true' ;
False: 'false' ;
Null: 'null' ;

/* Util */
DefId: '_' Id?;
Number: 'inf' | (Digit+ ('.' Digit+)? | '.' Digit+ ) ('e' '-'? Digit+)?;
Id: Word (Letter | Digit | Uscore)*;
String: '"' .*? '"' ;
StringLit: '\'' .*? '\'' ;

Digit: [0-9];
Word: (Letter)+;
Letter: UcLetter | LcLetter ;
UcLetter: [A-Z];
LcLetter: [a-z];

/* Special */
DefOr: '\\\\' ;
Sarrow: '->' ;
Darrow: '=>' ;
LRarrow: '>>' ;
RLarrow: '<<' ;
Dot2: '..' ;
Dot3: '...' ;
As: 'as' ;

/* Assignments */
PlusEq: '+=' ;
MinEq: '-=' ;
MultEq: '*=' ;
DivEq: '/=' ;
ModEq: '%=' ;
PowEq: '^=' ;
Increm: '++' ;
Decrem: '--' ;

/* Containers */
Lbrack: '[' ;
Rbrack: ']' ;
Lbrace: '{' ;
Rbrace: '}' ;
Lpar: '(' ;
Rpar: ')' ;

/* Math */
Pow: '^' ;
Star: '*' ;
StarStar: '**' ;
Bslash: '/' ;
Mod: '%' ;
Plus: '+' ;
Min: '-';
Eq: '=' ;

/* Bool Compare */
BoolEq: '==' ;
BoolDeepEq: '===' ;
BoolNeq: '!=' ;
BoolDeepNeq: '!==' ;
Gt: '>' ;
GtEq: '>=' ;
Lt: '<' ;
LtEq: '<=' ;
And: '&&' ;
Or: '||' ;

/* Symbols */
Uscore: '_' ;
AndSign: '&' ;
Doll: '$' ;
DollLit: '\\$' ;
Hash: '#' ;
At: '@' ;
ExPoint: '!' ;
Qmark: '?' ;
Colon: ':' ;
ColonColon: '::' ;
Semi: ';' ;
Fslash: '\\' ;
Bar: '|' ;
Dquote: '"' ;
Squote: '\'' ;
Com: ',' ;
Dot: '.' ;
Squig: '~' ;
Btick: '`' ;

/* Ignore */
Ignore: (Comment | WS | RETURN) -> skip ;
WS: [ \t]+ ;
RETURN: [\r\n]+ ;
fragment Comment
:'//' ~('\r' | '\n')*
|'/*' .*? '*/'
;
