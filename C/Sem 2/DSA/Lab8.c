// Binary Tree Representation 

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data){
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
};

void binaryTreeTraversal(struct Node* root){
    if(root!=NULL){
        printf("%d ", root->data);
        binaryTreeTraversal(root->left);
        binaryTreeTraversal(root->right);
    }
}

int main(){
    // Making Node
    struct Node* p = createNode(4);
    struct Node* p1 = createNode(1);
    struct Node* p2 = createNode(6);
    struct Node* p3 = createNode(5);
    struct Node* p4 = createNode(2);

    // LinkNode
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    printf("\n");
    printf(" Traversal\n");
    printf("------------\n");
    binaryTreeTraversal(p);
    return 0;
}