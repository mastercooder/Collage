//  All Operation of Linked List Deletion
//-----------------------------------------

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void Operation(){
    printf("\n");
    printf("1: Linked List Traversal\n");
    printf("2: Linked List Opeartion\n");
    printf("3: Delete From First\n");
    printf("4: Delete From Index\n");
    printf("5: Delete From End\n");
    printf("\n");
}

void linkelistTraversal(struct Node *ptr){
    while (ptr != NULL)
    {
        printf("Element %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Deleting Operations
struct Node *deletefromFirst(struct Node *head){
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
};

struct Node *deletefromIndex(struct Node *head, int index){
    if (index == 0)
    {
        struct Node *ptr = head;
        head = head->next;
        free(ptr);
        return head;
    }

    struct Node *ptr = head;
    struct Node *p = NULL;
    int i = 0;
    while (i != index - 1)
    {
        p = ptr;
        ptr = ptr->next;
        i++;
    }
    p->next = ptr->next;
    free(ptr);
    return head;
};

struct Node *deletefromEnd(struct Node *head){
    struct Node *ptr = head;
    struct Node *p = NULL;
    while (ptr->next != NULL)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = ptr->next;
    free(ptr);
    return head;
};


int main(){
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *forth = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fifth = (struct Node *)malloc(sizeof(struct Node));
    struct Node *sixth = (struct Node *)malloc(sizeof(struct Node));

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
    sixth->next = NULL;

    printf("\n");
    linkelistTraversal(head);
    printf("\n");
    Operation();
    printf("\n");

    while (1)
    {
        int query;
        printf("Enter the number of Opeations || 0 to Exit: ");
        scanf("%d", &query);

        if (query == 0)
        {
            printf("Exiting The loop\n");
            return -1;
        }

        switch (query)
        {
        case 1:
        {
            printf("\n");
            printf(" Linked List Traveral\n");
            printf("-----------------------\n");
            printf("\n");
            linkelistTraversal(head);
            printf("\n");
            break;
        }

        case 2:
        {
            printf("\n");
            printf(" Linked List Opearations\n");
            printf("--------------------------\n");
            printf("\n");
            Operation();
            printf("\n");
            break;
        }

        case 3:
        {
            printf("\n");
            printf(" Delete From First\n");
            printf("---------------------\n");
            head = deletefromFirst(head);
            printf("\n");
            linkelistTraversal(head);
            printf("\n");
            break;
        }

        case 4:
        {
            printf("\n");
            printf(" Delete From Index\n");
            printf("----------------------\n");
            int index;
            printf("Enter the Index: ");
            scanf("%d", &index);
            head = deletefromIndex(head, index);
            printf("\n");
            linkelistTraversal(head);
            printf("\n");
            break;
        }

        case 5:
        {
            printf("\n");
            printf(" Delete From End\n");
            printf("------------------\n");
            head = deletefromEnd(head);
            printf("\n");
            linkelistTraversal(head);
            printf("\n");
            break;
        }

        default:
            printf("Something went wrong\n");
            break;
        }
    }

    return 0;
}