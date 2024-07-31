// Q.  C Program to Implement Queues using Stacks.

#include<stdio.h>
#include<stdlib.h>

#define MAX 100

// Stack structure
struct Stack {
    int top;
    int arr[MAX];
} stack1, stack2;

// Function to push element into stack
void push(struct Stack* stack, int item) {
    if(stack->top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack->arr[++stack->top] = item;
}

// Function to pop element from stack
int pop(struct Stack* stack) {
    if(stack->top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack->arr[stack->top--];
}

// Function to enqueue element into queue
void enqueue(int item) {
    push(&stack1, item);
}

// Function to dequeue element from queue
int dequeue() {
    if(stack2.top == -1) {
        while(stack1.top != -1) {
            push(&stack2, pop(&stack1));
        }
    }
    return pop(&stack2);
}

// Driver program to test above functions
int main() {
    int size;
    stack1.top = -1;
    stack2.top = -1;

    printf("Enter the size you want to insert: ");
    scanf("%d", &size);
    for(int i = 0; i<size; i++){
        int data;
        printf("%d: ", i+1);
        scanf("%d", &data);
        enqueue(data);
    }

    printf("\n");
    for(int i = 0; i<size; i++){
        printf("dequeued - %d\n", dequeue());
    }

    return 0;
}
