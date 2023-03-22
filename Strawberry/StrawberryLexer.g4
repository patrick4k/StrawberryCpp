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
RegFSlash: '\\/' ;
RegReturnAll: 'return all' ;

/* Util */
Id: Word (Word | Digit | Uscore)*;
DefId: '_' Id?;
Number: Digit+ ('.' Digit+)? | '.' Digit+ ;
String: '"' .*? '"' ;
StringLit: '\'' .*? '\'' ;

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

/* Ignore */
Ignore: (Comment | WS | RETURN) -> skip ;
WS: [ \t]+ ;
RETURN: [\r\n]+ ;
fragment Comment
:'//' ~('\r' | '\n')*
|'/*' .*? '*/'
;
