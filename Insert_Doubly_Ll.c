#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data;
    struct Node *prev, *next;
};

int main() 
{
    int student_id = 681;
    struct Node *head = NULL, *temp = NULL, *newNode;
    int n, val;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        scanf("%d", &val);
        newNode->data = val;
        newNode->next = NULL;
        newNode->prev = NULL;
        if (head == NULL) {
            head = temp = newNode;
        } else {
            temp->next = newNode;
            newNode->prev = temp;
            temp = newNode;
        }
    }
    printf("List: ");
    temp = head;
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\nStudent ID: %d\n", student_id);
    return 0;
}
