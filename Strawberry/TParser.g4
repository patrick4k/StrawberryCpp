parser grammar TParser;

options {
	tokenVocab = TLexer;
}

script:
(numberList Nl?)+ EOF
;

numberList: Number (Sarrow Number)+ ;
