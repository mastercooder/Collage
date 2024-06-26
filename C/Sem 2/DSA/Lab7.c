//  Inseration in Circular Linked List
//--------------------------------------

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

// Linked List Traversal
void linkedListTraversal(struct Node* head){
    struct Node* ptr = head;
    do
    {
        printf("Element %d\n", ptr->data);
        ptr = ptr->next;
    }while (ptr!=head);
}

// Case 1: Insertion At First
struct Node* insertionAtFirst(struct Node* head, int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head->next;
    ptr->data = data;
    while (p->next!=head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
};

// Case 2: Insertion At Index
struct Node* insertionAtIndex(struct Node* head, int data, int index){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head;
    ptr->data = data;
    int i = 0;
    while (i!=index-1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    return head;
};

// Insertion At End
struct Node* insertionAtEnd(struct Node* head, int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head;
    ptr->data = data;

    while (p->next!=head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    return head;
};

void Operations(){
    printf("\n");
    printf("1: Insertion At first\n");
    printf("2: Insertion At Index\n");
    printf("3: Insertion At End\n");
    printf("\n");
}

int main()
{
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));
    struct Node* forth = (struct Node*)malloc(sizeof(struct Node));
    struct Node* fifth = (struct Node*)malloc(sizeof(struct Node));
    struct Node* sixth = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = forth;

    forth->data = 4;
    forth->next = fifth;

    fifth->data = 5;
    fifth->next = sixth;

    sixth->data = 6;
    sixth->next = head;

    printf("\n");
    printf(" Linked List Traversal\n");
    printf("-----------------------\n");
    linkedListTraversal(head);
    Operations();

    int query;
    while (1)
    {
        printf("\n");
        printf("Enter What function you want execute || 0 to exit: \n");
        scanf("%d", &query);

        if (query==0)
        {
            printf("\n");
            printf("Exiting The Loop!\n");
            printf("\n");
            return -1;
        }

        switch (query)
            {
            case 1:
            {
                printf("\n");
                printf(" Insertion At First\n");
                printf("----------------------\n");
                int data;
                printf("Enter the data: \n");
                scanf("%d", &data);
                head = insertionAtFirst(head, data);
                printf("-----------------------");
                printf("\n");
                linkedListTraversal(head);
                printf("\n");
                printf("-----------------------");
                printf("\n");
                break;
            }

            case 2:
            {
                printf("\n");
                printf(" Insertion At Index\n");
                printf("----------------------\n");
                int data, index;
                printf("Enter At which Index you want to do insertion: \n");
                scanf("%d", &index);
                printf("Enter the data: \n");
                scanf("%d", &data);
                head = insertionAtIndex(head, data, index);
                printf("-----------------------");
                printf("\n");
                linkedListTraversal(head);
                printf("\n");
                printf("-----------------------");
                printf("\n");
                break;
            }

            case 3:
            {
                printf("\n");
                printf(" Insertion At End\n");
                printf("--------------------\n");
                int data;
                printf("Enter the data: \n");
                scanf("%d", &data);
                head = insertionAtEnd(head, data);
                printf("-----------------------");
                printf("\n");
                linkedListTraversal(head);
                printf("\n");
                printf("-----------------------");
                printf("\n");
                break;
            }

            default:
                printf("Something Went Wrong\n");
                break;
            }
    }
}