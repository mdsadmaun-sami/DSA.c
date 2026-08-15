#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data;
    struct Node *left, *right;
};
struct Node* createNode(int val) 
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->left = newNode->right = NULL;
    return newNode;
}
struct Node* insert(struct Node* root, int val) 
{
    if (root == NULL) return createNode(val);
    if (val < root->data) root->left = insert(root->left, val);
    else root->right = insert(root->right, val);
    return root;
}

struct Node* findMin(struct Node* root) 
{
    while (root->left != NULL) root = root->left;
    return root;
}
struct Node* deleteNode(struct Node* root, int val) 
{
    if (root == NULL) return root;
    if (val < root->data)
        root->left = deleteNode(root->left, val);
    else if (val > root->data)
        root->right = deleteNode(root->right, val);
    else 
    {
        if (root->left == NULL) 
        {
            struct Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) 
        {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }
        struct Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

void printTree(struct Node* root) 
{
    if (root != NULL) 
    {
        printTree(root->left);
        printf("%d ", root->data);
        printTree(root->right);
    }
}

int main() 
{
    int student_id = 681;
    struct Node* root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    printf("Tree Before Delete: ");
    printTree(root);
    printf("\n");
    int del_number = 30;
    printf("\nDeleting number: %d\n", del_number);
    root = deleteNode(root, del_number);
    printf("Tree After Delete : ");
    printTree(root);
    printf("\n");
    printf("\nStudent ID: %d\n", student_id);
    return 0;
}
