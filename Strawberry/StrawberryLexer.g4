lexer grammar StrawberryLexer;

/* Util */
Id: Word (Word | Digit | Uscore)*;
Number: Digit+ ('.' Digit+)?;
String: Dquote .*? Dquote;
LitString: Squote .*? Squote;

Digit: [0-9];
Word: (UcLetter | LcLetter)+;
UcLetter: [A-Z];
LcLetter: [a-z];

/* Special */
Sarrow: '->' ;
Darrpw: '=>' ;
LRarrow: '>>' ;
RLarrow: '<<' ;
Dot2: '..' ;
Dot3: '...' ;
As: 'as' ;
Nl: ('\n' | '\r')+ ;

/* Symbols */
Uscore: '_' ;
AndSign: '&' ;
Doll: '$' ;
Hash: '#' ;
At: '@' ;
ExPoint: '!' ;
Qmark: '?' ;
Colon: ':' ;
Semi: ';' ;
Fslash: '\\' ;
Bar: '|' ;
Dquote: '"' ;
Squote: '\'' ;
Com: ',' ;
Dot: '.' ;
Squig: '~' ;
Btick: '`' ;

/* Math */
Pow: '^' ;
Star: '*' ;
Bslash: '/' ;
Mod: '%' ;
Plus: '+' ;
Min: '-';
Eq: '=' ;

/* Bool Compare */
BoolEq: '==' ;
Gt: '>' ;
GtEq: '>=' ;
Lt: '<' ;
LtEq: '<=' ;
And: 'and' ;
Or: 'or' ;

/* Assignments */
PlusEq: '+=' ;
MinEq: '-=' ;
MultEq: '*=' ;
DivEq: '/=' ;
ModEq: '%=' ;
PowEq: '^=' ;

/* Containers */
Lbrack: '[' ;
Rbrack: ']' ;
Lbrace: '{' ;
Rbrace: '}' ;
Lpar: '(' ;
Rpar: ')' ;

/* Ignore */
Ignore: (Comment | WS) -> skip ;
fragment WS: [ \t]+ ;
fragment Comment
:'//' ~('\r' | '\n')*
|'/*' .*? '*/'
;
