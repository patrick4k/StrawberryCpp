# Strawberry Interpreter
**Author**: _Patrick Kennedy_

## NOTE: DOCUMENTATION IS WORK IN PROGRESS. LIMITED FUNCTIONALITY IS EXPLAINED AS OF NOW.

Strawberry is a general purpose scripting language with Perl like inspirations.
Strawberry is written in C++ using ANTLR4 parsing. Grammar definitions are in 
Strawberry/StrawberryLexer.g4 and Strawberry/StrawberryParser.g4.

## Roadmap

### Initial Setup
- [x] Initial Grammar Structure


- [x] Windows Support

### Memory Management

- [x] Memory Allocation 0.1
    - [x] Program Scope and Memory
        - declare() / assign() / get_from_memory()
    - [x] Value type / primitive children of Value type
    - [x] References


- [x] Memory Allocation 0.2
    - [x] Reference casting
    - [x] Containers
        - List
        - Pairs
        - Hash / Objects

### Visitor Implementation

- [x] Visitor Overrides 0.1
    - [x] Refactor Grammar Definition
    - [x] Implement Override methods
    - [x] Number and String literals


- [ ] Visitor Overrides 0.2
    - [x] Visitors for declare() and assign()
    - [x] Basic Operator Functionality
    - [x] Advance Operator Functionality
    - [x] Idenitfyer access
        - Id
        - Dot access
        - Array Access
    - [x] Reference setting
    - [x] Fix keyword as id bug
    - [x] Optional Warnings


- [ ] Visitor Overrides 0.3
    - [ ] Store function declarations
    - [ ] Add lambda type definition
    - [ ] Bitwise operations
    - [ ] Operator rework
      - Extract repeated code for binary math operations
      - Better ==, !=, ===, !== operations
    - [ ] Default Variable Memory Management
    - [ ] Control Flow
        - for / loop / while / until loops
        - if / unless
    - [ ] Compound Statements

### Features
- [ ] Linspace operator / join list operator
  - [ ] Modify rangeOp
  - [ ] Allow for matrix creation
- [ ] Matrix operations
  - Pull inspiration from matlab

### OOP
- [ ] Add Class definition to grammar
- [ ] Construct object type to handle methods


### Other
- [ ] Documentation
    - [ ] Create Documentation Directory
    - [ ] How to Build
    - [ ] Methodology
    - [ ] Syntax