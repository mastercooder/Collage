// Write a program in C to insert New value in the array (sorted list).

#include<stdio.h>

void makeArray(int *arr, int size){
    printf(" Enter elements in array: \n");
    printf("---------------------------\n");
    for(int i = 0; i<size; i++){
        printf("%d: ", i+1);
        scanf("%d", &arr[i]);
    }
}

void displayArray(int *arr, int size){
    printf(" Displaying Array: \n");
    printf("-------------------\n");
    for(int i = 0; i<size; i++){
        printf("%d\t", arr[i]);
    }
}

int main() {
    int i, size, val, pos;

    printf("Enter the size of the Array : ");
    scanf("%d", &size);

    int arr[size];
    makeArray(arr, size);

    printf("Enter the value to insert : ");
    scanf("%d", &val);

    // Initialize pos to size
    pos = size;

    // Find position to insert
    for(i=0; i<size; i++) {
        if(arr[i] > val) {
            pos = i;
            break;
        }
    }

    // Shift elements to the right
    for(i=size; i>pos; i--) {
        arr[i] = arr[i-1];
    }

    // Insert the value
    arr[pos] = val;
    size++;

    printf("\n");
    displayArray(arr, size);
    return 0;
}