#include <stdio.h>
#include <limits.h>

int main()
{
    int n, graph[10][10];
    int visited[10] = {0};
    int i, j, count;
    int minimum, u, v, total = 0;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter the graph:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &graph[i][j]);
        }
    }

    visited[0] = 1;

    for (count = 0; count < n - 1; count++)
    {
        minimum = INT_MAX;
        u = -1;
        v = -1;

        for (i = 0; i < n; i++)
        {
            if (visited[i] == 1)
            {
                for (j = 0; j < n; j++)
                {
                    if (graph[i][j] != 0 && visited[j] == 0)
                    {
                        if (graph[i][j] < minimum)
                        {
                            minimum = graph[i][j];
                            u = i;
                            v = j;
                        }
                    }
                }
            }
        }

        printf("%d - %d = %d\n", u, v, minimum);

        total = total + minimum;
        visited[v] = 1;
    }

    printf("Minimum cost = %d\n", total);

    return 0;
}