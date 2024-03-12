#include<stdio.h>

int main(){
    int number;
    int fact = 1;

    printf("Enter the number: \n");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++) {
        fact *= i;
    }

    printf("The factorial is %d = %d", number, fact);

    return 0;
}
