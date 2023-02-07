## Description

In this program you will convert a positive integer into a binary value by using a stack implemented with a singly linked list.

- [ ] 1. Ask the user to enter in the integer to be converted to binary.
    - **Assume all entered values are positive (greater than 0)**
- [ ] 2. Convert decimal to binary using a stack with a singly linked list.

### Example Math

Example showing how to find the binary values and reducing. The result of this conversion is shown in the example output section.

```
93 % 2 = 1
93 / 2 = 46

46 % 2 = 0
46 / 2 = 23

23 % 2 = 1
23 / 2 = 11

11 % 2 = 1
11 / 2 = 5

5 % 2 = 1
5 / 2 = 2

2 % 2 = 0
2 / 1 = 1

1 % 2 = 1
1 / 2 = 0
```

## Requirements

* You must use a linked list stack
* Do not use recursion
* Formatting should match **exactly** as the example below (note the spacing)

Required Functions (You must fill in the parameters):
```c
// puts a number on the stack
void push(...)

// takes a number off the stack
void pop(...)

// returns the value of the number on the top of the stack
int top(...)

// prints the contents of the stack (top to bottom)
void printStack(...)

// prints off the binary version of a decimal number
void toBin(...)
```


## Example Output

```
$ ./a.out
Enter an integer: 93
 1  0  1  1  1  0  1 
```
