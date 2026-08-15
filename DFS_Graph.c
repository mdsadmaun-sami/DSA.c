#include <stdio.h>

int student_id = 681;
int visited[10] = {0};
void DFS(int adj[10][10], int n, int current) 
{
    visited[current] = 1;
    printf("%d ", current);
    for (int i = 0; i < n; i++) 
    {
        if (adj[current][i] == 1 && !visited[i]) 
        {
            DFS(adj, n, i);
        }
    }
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

    printf("DFS Traversal starting from node 0: ");
    DFS(adj, n, 0);
    printf("\n");
    printf("Student ID: %d\n", student_id);
    return 0;
}
