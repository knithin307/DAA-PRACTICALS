#include <stdio.h>
#include <limits.h>

int main(){
    int n, i, j, k, l;
    
    printf("Enter number of matrices: ");
    scanf("%d", &n);

    int p[n + 1];
    int m[n + 1][n + 1];

    printf("Enter the dimensions:\n");

    for (i = 0; i <= n; i++)
    {
        scanf("%d", &p[i]);
    }

    for (i = 1; i <= n; i++)
    {
        m[i][i] = 0;
    }

    for (l = 2; l <= n; l++)
    {
        for (i = 1; i <= n - l + 1; i++)
        {
            j = i + l - 1;
            m[i][j] = INT_MAX;

            for (k = i; k < j; k++)
            {
                int cost = m[i][k]
                         + m[k + 1][j]
                         + p[i - 1] * p[k] * p[j];

                if (cost < m[i][j])
                {
                    m[i][j] = cost;
                }
            }
        }
    }

    printf("Minimum number of multiplications = %d\n", m[1][n]);

    return 0;
}