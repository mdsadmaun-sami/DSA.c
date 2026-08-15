#include <stdio.h>

int student_id = 681;
int pq[100];
int size = 0;
void insert(int val) 
{
    pq[size] = val;
    size++;
}
void deleteHighestPriority() 
{
    if (size == 0) return;
    int maxIdx = 0;
    for (int i = 1; i < size; i++) 
    {
        if (pq[i] > pq[maxIdx]) 
        {
            maxIdx = i;
        }
    }

    printf("Deleted Element (Highest Priority): %d\n", pq[maxIdx]);
    for (int i = maxIdx; i < size - 1; i++) 
    {
        pq[i] = pq[i + 1];
    }
    size--;
}
void display() 
{
    printf("Priority Queue: ");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", pq[i]);
    }
    printf("\n");
}

int main() 
{
    insert(10);
    insert(50);
    insert(30);
    insert(40);
    display();
    deleteHighestPriority();
    display();
    printf("Student ID: %d\n", student_id);
    return 0;
}
