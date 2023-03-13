parser grammar StrawberryParser;

options {
	tokenVocab = StrawberryLexer;
}

script
: (statement Nl?)+ EOF
;

statement
: expression
;

expression
: Number
;

fnDecl
: Fn Id
;
