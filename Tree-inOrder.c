#include <stdio.h>
#include <stdlib.h>

typedef struct Node 
{
    int data;
    struct Node *left, *right;
} Node;

// Helper to create a node
Node* newnode(int x) 
{
    Node* n = (Node*)malloc(sizeof(Node));
    n->data = x;
    n->left = n->right = NULL;
    return n;
}

// In-order traversal
void inOrder(Node* root) 
{
    if (root == NULL)
    return;
    inOrder(root->left);
    printf("%d ", root->data);
    inOrder(root->right);
}

int main() 
{
    // Tree construction
    Node* root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);
    root->left->left = newnode(4);
    root->left->right = newnode(5);
    root->right->right = newnode(6);

    inOrder(root);
    printf("\n");

    return 0;
}
