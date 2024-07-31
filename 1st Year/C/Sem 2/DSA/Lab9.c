// Q. Write a program in C to count a total number of duplicate elements in an array.

#include<stdio.h>

void makeArray(int *arr, int size){
    printf(" Enter elements in array\n");
    printf("---------------------------\n");
    for(int i = 0; i<size; i++){
        printf("%d: ", i+1);
        scanf("%d", &arr[i]);
    }
}

int main() {
    int size, count = 0;

    printf("Enter the size of Array : ");
    scanf("%d", &size);

    int arr[size];
    makeArray(arr, size);

    for(int i=0; i<size; i++) {
        for(int j=i+1; j<size; j++) {
            if(arr[i] == arr[j]) {
                count++;
                break;
            }
        }
    }

    printf("\n");
    printf("Total number of duplicate elements found in array = %d", count);
    return 0;
}
