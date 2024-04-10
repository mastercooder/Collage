// Q. Write a program to reverse the linked list & sort element in linked list.

#include<stdio.h>
#include<stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a node at the beginning of the linked list
void push(struct Node** head, int data) {
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr->data  = data;
    ptr->next = (*head);
    (*head) = ptr;
}

// Function to reverse the linked list
void reverse(struct Node** head) {
    struct Node* prev = NULL;
    struct Node* current = *head;
    struct Node* next;

    while(current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    *head = prev;
}

// Function to print the linked list
void linkedListTraveral(struct Node* head) {
    struct Node* temp = head;
    while(temp != NULL) {
        printf("  %d\t", temp->data);
        temp = temp->next;
    }
}

void bubbleSort(struct Node* head){
    struct Node* ptr;
    
    if(ptr == NULL){
        return;
    }

    ptr = head;
    while(ptr->next != NULL){
        if(ptr->data > ptr->next->data){
            int temp = ptr->data;
            ptr->data = ptr->next->data;
            ptr->next->data = temp;
        }
        ptr = ptr->next;
    }
}

void Opearation(){
    printf("\n");
    printf(" Selection the function you want to run\n");
    printf("------------------------------------------\n");
    printf("1: Reverse LinkedList\n");
    printf("2: Sort LinkedList\n");
    printf("\n");
}

// Driver program to test above functions
int main() {
    int size, query;

    struct Node* head = NULL;

    printf("Enter the number of element you want to enter: ");
    scanf("%d", &size);
    
    for(int i = 0; i<size; i++){
        int data;
        printf("%d : ", i+1);
        scanf("%d", &data);
        push(&head, data);
    }
    Opearation();

    while(1){
        printf("Enter the Operation Number || 0 to exit: ");
        scanf("%d", &query);

        if(query==0){
            printf("\n");
            printf("Exiting the loop\n");
            return -1;
            printf("\n");
        }

        switch(query){
            case 1:{
                printf(" Reverse LinkedList\n");
                printf("----------------------\n");
                printf("\n");
                printf(" Original Linked List: \n");
                printf("-----------------------\n");
                linkedListTraveral(head);

                printf("\n");
                reverse(&head);

                printf(" Reversed Linked List: \n");
                printf("-----------------------\n");
                linkedListTraveral(head);
                printf("\n");
                break;
            }

            case 2:{
                printf("\n");
                printf(" Sort LinkeList\n");
                printf("------------------\n");
                bubbleSort(head);
                linkedListTraveral(head);
                printf("\n");
                break;
            }

        default:
            printf("Invalid Input\n");
            break;
        }
    }

    return 0;
}
