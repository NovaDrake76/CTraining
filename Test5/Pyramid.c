#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int matrix[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < n / 2)
            {
                if (j < n / 2)
                {
                    if (i < j)
                    {
                        matrix[i][j] = i + 1;
                    }
                    else
                    {
                        matrix[i][j] = j + 1;
                    }
                }
                else
                {
                    if (i < n - j - 1)
                    {
                        matrix[i][j] = i + 1;
                    }
                    else
                    {
                        matrix[i][j] = n - j;
                    }
                }
            }
            else
            {
                if (j < n / 2)
                {
                    if (n - i - 1 < j)
                    {
                        matrix[i][j] = n - i;
                    }
                    else
                    {
                        matrix[i][j] = j + 1;
                    }
                }
                else
                {
                    if (n - i - 1 < n - j - 1)
                    {
                        matrix[i][j] = n - i;
                    }
                    else
                    {
                        matrix[i][j] = n - j;
                    }
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}