#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int item;
    struct Node*next;
};

int main()
{
    struct Node*head = ( struct Node*)malloc(sizeof(struct Node));
    struct Node*second = ( struct Node*)malloc(sizeof(struct Node));
    struct Node*third = ( struct Node*)malloc(sizeof(struct Node));

    head -> item = 1;
    head -> next = second;

    second -> item =2;
    second -> next = third;

    third -> item =3;
    third -> next = NULL;

    struct Node* ptr = head;
    printf("Singly Linked List Traversal:\n");
    while ( ptr != NULL )
    {
        printf("%d ",ptr -> item);
        ptr = ptr -> next;
    }
    
return 0;
}
