// Q. C Program to Check String is Palindrome using Stack.

#include<stdio.h>
#include<string.h>

#define MAX 100

// Stack structure
struct Stack {
    int top;
    char arr[MAX];
} stack;

// Function to push character into stack
void push(char c) {
    if(stack.top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack.arr[++stack.top] = c;
}

// Function to pop character from stack
char pop() {
    if(stack.top == -1) {
        printf("Stack Underflow\n");
        return ' ';
    }
    return stack.arr[stack.top--];
}

// Function to check if string is palindrome
void checkPalindrome(char str[]) {
    int length = strlen(str);

    // Push all characters of string to stack
    for(int i = 0; i < length; i++) {
        push(str[i]);
    }

    // Pop all characters from stack and compare with string characters
    for(int i = 0; i < length; i++) {
        if(pop() != str[i]) {
            printf("No, the string is not a palindrome.\n");
            return;
        }
    }

    printf("Yes, the string is a palindrome.\n");
}

int main() {
    stack.top = -1;
    char str[MAX];

    printf("Enter a string: ");
    gets(str);

    checkPalindrome(str);

    return 0;
}
