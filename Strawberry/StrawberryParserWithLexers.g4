parser grammar StrawberryParserWithLexers;

options {
	tokenVocab = StrawberryLexer;
}

script:
(numberList Nl?)+ EOF
;

numberList: Number ('->' Number)+ ;
