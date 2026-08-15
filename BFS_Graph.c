#include <stdio.h>

int student_id = 681;
void BFS(int adj[10][10], int n, int start)
{
    int visited[10] = {0};
    int queue[10];
    int front = 0, rear = 0;
    visited[start] = 1;
    queue[rear++] = start;
    printf("BFS Traversal starting from node %d: ", start);

    while (front < rear) 
    {
        int current = queue[front++];
        printf("%d ", current);
        for (int i = 0; i < n; i++) 
        {
            if (adj[current][i] == 1 && !visited[i])
            {
                queue[rear++] = i;
                visited[i] = 1;
            }
        }
    }
    printf("\n");
}

int main() 
{
    int n = 5;
    int adj[10][10] = 
    {
        {0, 1, 1, 0, 0},
        {1, 0, 0, 1, 0},
        {1, 0, 0, 1, 1},
        {0, 1, 1, 0, 1},
        {0, 0, 1, 1, 0} 
    };

    BFS(adj, n, 0);
    printf("Student ID: %d\n", student_id);
    return 0;
}
