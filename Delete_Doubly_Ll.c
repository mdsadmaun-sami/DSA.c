#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev, *next;
};

int main() 
{
    int student_id = 681;
    struct Node *head = NULL, *temp = NULL, *newNode;
    for (int i = 1; i <= 3; i++)
    {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = i * 10;
        newNode->next = NULL;
        newNode->prev = temp;
        if (head == NULL) head = newNode;
        else temp->next = newNode;
        temp = newNode;
    }
    printf("Original List: ");
    temp = head;
    while (temp != NULL) 
    {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
    if (head != NULL) {
        struct Node *del = head;
        head = head->next;
        if (head != NULL) head->prev = NULL;
        free(del);
    }
    printf("After Deletion: ");
    temp = head;
    while (temp != NULL) 
    {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\nStudent ID: %d\n", student_id);
    return 0;
}
