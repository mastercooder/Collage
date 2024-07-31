#include<stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int num1, num2;
    printf("Enter two integer: ");
    scanf("%d %d", &num1, &num2);
    printf("Before swapping: \n num1 = %d, num 2 = %d", num1, num2);
    swap(&num1, &num2);
    printf("\n After swapping: \n num1 = %d, num2 = %d", num1, num2);
    
    return 0;
}