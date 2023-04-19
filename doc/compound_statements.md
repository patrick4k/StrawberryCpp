# Compound Statements


## Bad Compound Statements
Compound statements should only be used when it makes your code more readable.
For instance if you had the following code there are multiple ways you can condense it in Strawberry.
```
// 1
let myArr = 0..10;
for myArr {
    let i = _;
    while i < 10 {
        i++;
        print i + '\n';
    }
}
```
By replacing `myArr` with a literal
and using the default variable instead of reassigning it to `i` we can get the following:
```
// 2
for [0..10] {
    while _ < 10 {
        ++;
        print _ + '\n';
    }
}
```
The `++` operation is an assignment thus can be used as an expression.
```
// 3
for [0..10] {
    while _ < 10 {
        print (++) + '\n';
    }
}
```
This is where compound statements come in. Since there is only one statement in the
while loop we can rewrite the code as this:
```
// 4
for [0..10] {
    print (++) + '\n' while _ < 10;
}
```
Now there is only one statement in the for loop so we can finally condense this code into
a single line:
```
// 5
print (++) + '\n' while _ < 10 for [0..10];
```
As a developer, if I was reading someone's code and came across this line it would take a lot 
longer to figure out there intentions than if they used the initial code. Try to avoid 
the pit of shorthand and condense statements unless it makes for your code to be more readable.