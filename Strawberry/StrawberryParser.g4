parser grammar StrawberryParser;

options {
	tokenVocab = StrawberryLexer;
}

script:
(numberList Nl?)+ EOF
;

numberList: Number (Sarrow Number)+ ;
