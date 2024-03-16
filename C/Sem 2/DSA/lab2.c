// linearSearch
//--------------

#include<stdio.h>

void makeArray(int *arr, int size){
    printf(" Enter Element: \n");
    printf("----------------\n");
    for(int i = 0; i<size; i++){
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
}

int linearSearch(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element){
            return printf("The element %d has occur in the %d place\n", element, i);;
        }
    }
    return -1;
} 


int main(){
    int size, element;
    printf("Enter the size: ");
    scanf("%d", &size);

    int arr[size];
    
    printf("\n");
    makeArray(arr, size);
    printf("\n");

    printf("Enter the Element you want to search: ");
    scanf("%d", &element);
    printf("\n");

    printf("\n");
    linearSearch(arr, size, element);
    printf("\n");

    return 0;
}