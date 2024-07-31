// Q. C Program to Reverse a Stack using Recursion.

#include<stdio.h>
#include<stdlib.h>

// Stack structure
struct Stack {
    int top;
    int size;
    int* array;
};

// Function to create a stack of given 
struct Stack* createStack(int size) {
    struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));
    stack->size = size;
    stack->top = -1;
    stack->array = (int*) malloc(stack->size * sizeof(int));
    return stack;
}

// Stack is full when top is equal to the last index
int isFull(struct Stack* stack) {
    return stack->top == stack->size - 1;
}

// Stack is empty when top is equal to -1
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// Function to add an item to stack
void push(struct Stack* stack, int item) {
    if (isFull(stack))
        return;
    stack->array[++stack->top] = item;
}

// Function to remove an item from stack
int pop(struct Stack* stack) {
    if (isEmpty(stack))
        return -1;
    return stack->array[stack->top--];
}

// Function to insert an item to the bottom of a stack
void insertAtBottom(struct Stack* stack, int item) {
    if(isEmpty(stack)) {
        push(stack, item);
    } else {
        // Hold all items in recursion call stack until we reach end
        int temp = pop(stack);
        insertAtBottom(stack, item);

        // Push all the items held in recursion stack once the item is inserted at the bottom
        push(stack, temp);
    }
}

// Function to reverse the stack using recursion
void reverse(struct Stack* stack) {
    if(!isEmpty(stack)) {
        // Hold all items in recursion call stack until we reach end
        int temp = pop(stack);
        reverse(stack);

        // Insert all the items (held in recursion call stack) one by one from the bottom to top
        insertAtBottom(stack, temp);
    }
}

// Driver program to test above functions
int main() {
    int size;
    printf("Enter the size of Stack: ");
    scanf("%d", &size);

    struct Stack* stack = createStack(10);

    for(int i = 0; i<size; i++){
        int data;
        printf("%d: ", i+1);
        scanf("%d", &data);
        push(stack, data);
    }

    printf("\n");
    reverse(stack);

    printf("\nReversed Stack: ");
    while(!isEmpty(stack)) {
        printf("%d ", pop(stack));
    }

    return 0;
}
