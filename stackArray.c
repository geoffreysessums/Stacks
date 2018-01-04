/******************************************************************************
stackArray.c by Geoffrey Sessums
Purpose:
    Demonstrates a simple stack implementation using array of fixed size.
Command Parameters:
    None
Input:
    None
Results:
    Prints an error message when an element is popped from an empty stack.
    Prints the top of the stack using the peek() function.
    Prints an error message when an element is pushed to a full stack.
    Pops every element off of stack and prints the results.
Returns:
    nothing special
Notes:
    None 
 *****************************************************************************/
// Include standard I/O library
#include <stdio.h>

// Max size of the array
#define MAX_SIZE 10

// initialize top of stack to -1 (empty)
int top = -1;

// declare stack of max size 10
int stack[MAX_SIZE];

/* Function: isFull()
 * Returns:
 *     1 (true) if stack is full
 *     0 (false) if stack is not full
 */
int isFull()
{
    if (top == MAX_SIZE - 1)
        return 1;
    else
        return 0;
}

/* Function: isEmpty()
 * Returns:
 *     1 (true) if stack is empty
 *     0 (false) if stack is not empty
 */
int isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

/* Function: peek()
 *     Returns:
 *         stack[top] the top elements of the stack
 */
int peek()
{
    return stack[top];
}

/* Function: push()
 * Purpose:
 *     Adds an element to the top of stack.
 * Parameters:
 *     I int element The element to add to the stack.
 */
void push(int element)
{
   if (isFull()) {
        printf("Error: Could not insert element, Stack is full.\n\n");
   } else {
       top = top + 1;
       stack[top] = element;
   }
}

/* Function: Pop()
 * Purpose:
 *     Removes an element from the stack.
 * Returns:
 *     data top element from the stack.
 */
int pop()
{
    int data;

    if (isEmpty())
    {
        printf("Error: Could not remove element, Stack is empty.\n\n");
        return 0;
    } else {
        data = stack[top];
        top = top -1;
        return data;
    }
}

/* Function: main()
 * Purpose:
 *     Tests the implementation of the stack.
 */
int main()
{
	// Brief program description
	printf("\n%s\n\n%s\n%s\n\n"
			, "Program: stack_array.c by Geoffrey Sessums"
			, "This program demonstrates a simple stack implementation using an "
			, "array of fixed size (10).");

    // Check if stack is empty
    printf("Attempt to pop from empty stack.\n");
	pop();

    // push 5 elements
	printf("Push 1, 2, 3, 4, and 5 to stack.\n");
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);

    // peek at top of stack
    printf("Element on top of the stack: %d\n\n", peek());

    // push 5 elements
	printf("Push 6, 7, 8, 9, and 10 to stack.\n\n");
    push(6);
    push(7);
    push(8);
    push(9);
    push(10);

    // Check if stack is full
    printf("Attempt to push 11 to a full stack.\n");
    push(11);

    // pop every element from stack and print the results
    printf("List Stack elements: ");
    while (!isEmpty()) 
    {
        printf("%d ", pop());
    }
    printf("\n");

    return 0;
} // end of stack_array.c
