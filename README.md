# Strawberry Interpreter
**Author**: _Patrick Kennedy_

# NOTE: DOCUMENTATION IS WORK IN PROGRESS
# LIMITED FUNCTIONALITY IS EXPLAINED AS OF NOW

Strawberry is a general purpose scripting language with Perl like inspirations.
Strawberry is written in C++ using ANTLR4 parsing. Grammar definitions are in 
Strawberry/StrawberryLexer.g4 and Strawberry/StrawberryParser.g4.

Here is some common syntax for the Strawberry Language.

```
// =====================================================
// Declarations
let x = 0; // use 'let' to declare variable
y = 0; // ERROR cannot find identifyer 'y'
x = 1; // Valid since previously declared

// =====================================================
// Functions

// Declare function with 'fn' keyword
fn sum(a, b, c) {
    return a + b + c;
}

// Strict function call
x = sum(1, 2, 3);

// OR

// Loose function call
x = sum 1, 2, 3;

/* Loose function calls can add abiguity so only use them in simple context 
otherwise you may pass in unwanted arguments */

// =====================================================
// Operators
/*      Strawberry supports all major operators (even '^' for pow) 
        and order of operations for each */
        
let y = -1 + x^2 * 3 / 2;

// TODO: Add table of operators

// =====================================================
// Control Flow
/*      Strawberry supports all major loops and conditionals, 
        with additional Perl flavors */

// if
if (x > 0) {
    print x;
} else if (x == 0) {
    print 0;
} else 
    print 'nothin!';

// unless
//      unless operates like if, but negates the condition
x = 7;
unless x == 7 {
    // This will not run
} else { /* this will run */ }

// TODO: Add for while and until loops

// =====================================================
// Compound Statements
/*      Compound statements execute from right to left and are designed for
        complecated but readable oneliners */
        
print myArr[_] if _ > len(myArr) for 0..10;

// TODO: Explain default '_' prior to use

```
