#include <stdio.h>
#include <stdlib.h>

typedef struct node_def node;

struct node_def
{
	int val;
	node *next;
};

// global variables
/**
 * Use this global variable for the top of your stack.
 * 
 * In this case we are using a global variable purely
 * for ease of use in the assignment.
 */
node *stack = NULL;

void push(int x);
void pop(node *stack, int next);
int top(struct node_def *stack);
void printStack(node *stack);
void toBinary(int x);

int main()
{
printf("Enter an integer: ");
int t;
scanf("%d", &t);
toBinary(t);
return 0;
}

// puts a number on the stack
void push(int x)
{
node *tmp = (node *)
malloc(sizeof(node));
tmp->val = x;
tmp->next = stack;
stack = tmp;
}

// takes a number off the stack
void pop(node *stack, int next)
{
if(stack != NULL) {
	printf("Value popped: %d\n", stack->val);
	node *tmp = stack;
	stack = stack->next;
	free(tmp);
} else {
	printf("The stack is empty!\n");
}
}

// returns the value of the number on the top of the stack
int top(struct node_def *stack)
{
if(stack != NULL) {
	printf("Value of top: %d\n", stack->val);
} else {
	printf("The stack is empty!\n");
}
}

// prints the contents of the stack (top to bottom)
void printStack(node *stack)
{
node *tmp = stack;
while (tmp != NULL) {
	printf("%d ", tmp->val);
	tmp = tmp->next;
}
printf("\n");
}

// prints off the binary version of a decimal number
void toBinary(int x)
{
stack = NULL;
int y;
while(x > 0) {
	y = x % 2;
	x = x / 2;
	push(y);
}
printStack(stack);
}



