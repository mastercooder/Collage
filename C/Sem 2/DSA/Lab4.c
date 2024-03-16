//  All Operation of Linked List Insertion
//------------------------------------------

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void Operation()
{
    printf("\n");
    printf("1: Linked List Traversal\n");
    printf("2: Linked List Opeartion\n");
    printf("3: Insert At First\n");
    printf("4: Insert At Index\n");
    printf("5: Insert At End\n");
    printf("\n");
}

void linkelistTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// All Insertion Operation
struct Node *insertinFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
};

struct Node *insertinIndex(struct Node *head, int index, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
};

struct Node *insertinEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    ptr->data = data;
    p->next = ptr;
    ptr->next = NULL;
    return head;
};

int main()
{
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
            printf(" Insert At First\n");
            printf("-------------------\n");
            int data;
            printf("Enter thed data: ");
            scanf("%d", &data);
            head = insertinFirst(head, data);
            printf("\n");
            linkelistTraversal(head);
            printf("\n");
            break;
        }

        case 4:
        {
            printf("\n");
            printf(" Insert At Index\n");
            printf("-------------------\n");
            int index, data;
            printf("Enter the index: ");
            scanf("%d", &index);
            printf("Enter the data: ");
            scanf("%d", &data);
            head = insertinIndex(head, index, data);
            printf("\n");
            linkelistTraversal(head);
            printf("\n");
            break;
        }

        case 5:
        {
            printf("\n");
            printf(" Insert At End\n");
            printf("-----------------\n");
            int data;
            printf("Enter the data: ");
            scanf("%d", &data);
            head = insertinEnd(head, data);
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