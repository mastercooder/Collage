// BinarySearch
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

int binarySearch(int *arr, int size, int element){
    int low, mid, high;
    low = 0;
    high = size-1;

    while(low<=high){
        mid = (low + high) / 2;
        if(mid==element){
            return mid;
        } else if(arr[mid]<element){
            low = mid+1;
        } else{
            high = mid-1;
        }
    }
    printf("The element %d was occur in %dth search\n", element, mid);
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

    printf("\n");
    printf("Enter the element you want to search: ");
    scanf("%d", &element);
    printf("\n");

    binarySearch(arr, size, element);

    return 0;
}
