// Q. Write a program to count the frequency of an element of an array ?

#include<stdio.h>

int main(){
    int arr[5], freq = 0, key;

    for(int i = 0; i<5; i++){
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the key: ");
    scanf("%d", &key);
    
    for(int i = 0; i<5; i++){
        if(arr[i]==key){
            freq++;
        }
    }

    printf("%d has occur in the array %d times.\n", key, freq);
}