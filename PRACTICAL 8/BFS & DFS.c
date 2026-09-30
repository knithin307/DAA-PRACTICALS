#include <stdio.h>

int graph[20][20];
int visited[20];
int n;

/* DFS function */
void DFS(int vertex)
{
    int i;

    visited[vertex] = 1;
    printf("%d ", vertex);

    for(i = 0; i < n; i++)
    {
        if(graph[vertex][i] == 1 && visited[i] == 0)
        {
            DFS(i);
        }
    }
}

/* BFS function */
void BFS(int start)
{
    int queue[20];
    int visitedBFS[20] = {0};
    int front = 0, rear = 0;
    int current, i;

    queue[rear++] = start;
    visitedBFS[start] = 1;

    while(front < rear)
    {
        current = queue[front++];

        printf("%d ", current);

        for(i = 0; i < n; i++)
        {
            if(graph[current][i] == 1 && visitedBFS[i] == 0)
            {
                queue[rear++] = i;
                visitedBFS[i] = 1;
            }
        }
    }
}

int main()
{
    int i, j, start;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &graph[i][j]);
        }
    }

    printf("Enter starting vertex (0 to %d): ", n - 1);
    scanf("%d", &start);

/* BFS */
    printf("\nBFS Traversal: ");
    BFS(start);

/* Reset visited array for DFS */
    for(i = 0; i < n; i++)
    {
        visited[i] = 0;
    }

/* DFS */
    printf("\nDFS Traversal: ");
    DFS(start);

    return 0;
}