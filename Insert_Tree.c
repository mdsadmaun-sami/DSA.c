#include <stdio.h>
#include <stdlib.h>
struct Node 
{
    int data;
    struct Node *left, *right;
};
struct Node* insert(struct Node* root, int val) 
{
    if (root == NULL) 
    {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = val;
        newNode->left = newNode->right = NULL;
        return newNode;
    }
    if (val < root->data) root->left = insert(root->left, val);
    else root->right = insert(root->right, val);
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
    printf("Tree Before New Insert: ");
    printTree(root);
    printf("\n");
    int new_number = 25;
    printf("\nInserting new number: %d\n\n", new_number);
    insert(root, new_number);
    printf("Tree After New Insert : ");
    printTree(root);
    printf("\n");
    printf("\nStudent ID: %d\n", student_id);
    return 0;
}
