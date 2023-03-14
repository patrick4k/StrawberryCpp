lexer grammar StrawberryLexer;

/* Program Specific */
Fn: 'fn' ;
Decl: 'let' ;
If: 'if' ;
Unless: 'unless' ;
Else: 'else' ;
While: 'while' ;
Until: 'until' ;
For: 'for' ;

/* Keywords */
Return: 'return' ;
Break: 'break' ;
Next: 'next' ;
Last: 'last' ;
Once: 'once' ;

/* Regex */
MatchArrow: '~>' ;
RegWord: '\\w' ;
RegDigit: '\\d' ;
RegSpace: '\\s' ;
RegNewline: '\\n' ;
RegReturnAll: 'return all' ;

/* Util */
Id: Word (Word | Digit | Uscore)*;
Number: Digit+ ('.' Digit+)?;

Digit: [0-9];
Word: (Letter)+;
Letter: UcLetter | LcLetter ;
UcLetter: [A-Z];
LcLetter: [a-z];

/* Literals */
True: 'true' ;
False: 'false' ;
Null: 'null' ;

/* Special */
DefOr: '\\\\' ;
Sarrow: '->' ;
Darrpw: '=>' ;
LRarrow: '>>' ;
RLarrow: '<<' ;
Dot2: '..' ;
Dot3: '...' ;
As: 'as' ;

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
BoolNeq: '!=' ;
Gt: '>' ;
GtEq: '>=' ;
Lt: '<' ;
LtEq: '<=' ;
And: '&&' ;
Or: '||' ;

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

/* Letters */
WL: 'w' ;
WU: 'W' ;

/* Ignore */
Ignore: (Comment | WS) -> skip ;
fragment WS: [ \r\n\t]+ ;
fragment Comment
:'//' ~('\r' | '\n')*
|'/*' .*? '*/'
;
