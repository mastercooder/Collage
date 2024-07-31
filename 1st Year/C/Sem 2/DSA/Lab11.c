// Q. Write an algorithm and find the efficiency of the same for following problems:
//      a. Finding Factorial – Iterative Approach and Recursive Approach
//      b. Printing Fibonacci Series – Iterative Approach and recursive approach

#include<stdio.h>

// Factorial functions
int factorial_iterative(int n) {
    int result = 1;
    for(int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int factorial_recursive(int n) {
    if(n == 0) {
        return 1;
    } else {
        return n * factorial_recursive(n - 1);
    }
}

// Fibonacci functions
void fibonacci_iterative(int n) {
    int t1 = 0, t2 = 1, nextTerm;
    for (int i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}

int fibonacci_recursive(int n) {
    if(n == 0) {
        return 0;
    } else if(n == 1) {
        return 1;
    } else {
        return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
    }
}

int main() {
    while(1){
        int query, n;

        printf("\n");
        printf("Enter the Number: ");
        scanf("%d", &n);
        
        printf("\n");
        printf(" Choose an option:\n");
        printf("--------------------\n");
        printf("1. Find factorial (iterative / recursive)\n");
        printf("2. Print Fibonacci series (iterative / recursive)\n");
        printf("\n");

        printf("Enter the Opeartion Number: ");
        scanf("%d", &query);

        switch(query) {
            case 1:{
                printf("\n");
                printf(" factorial (iterative / recursive)\n");
                printf("--------------------------------------\n");
                printf("Factorial Iterative of %d is %d\n", n, factorial_iterative(n));
                printf("\n");
                printf("Factorial Recursive of %d is %d\n", n, factorial_recursive(n));
                printf("\n");
                break;
            }

            case 2:{
                printf("\n");
                printf(" fibonacci (iterative / recursive)\n");
                printf("-------------------------------------\n");
                fibonacci_iterative(n);
                printf("\n");
                for(int i = 0; i < n; i++){
                    printf("%d, ", fibonacci_recursive(i));
                }
                printf("\n");
                break;
            }

            default:
                printf("Invalid option\n");
        }
    }
    return 0;
}
