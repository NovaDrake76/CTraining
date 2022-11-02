#include <stdio.h>

int main(void)
{
    int n, m, i, j, k, l, bolinhas = 0;
    char mapa[100][100];
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf(" %c", &mapa[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (mapa[i][j] == 'C')
            {
                k = i;
                l = j;
            }
        }
    }
    for (i = k; i < n; i++)
    {
        for (j = l; j < m; j++)
        {
            if (mapa[i][j] == '.')
            {
                bolinhas++;
                mapa[i][j] = ' ';
            }
            if (mapa[i][j] == '*')
            {
                break;
            }
            if (mapa[i][j] == 'M')
            {
                break;
            }
        }
    }
    for (i = k; i >= 0; i--)
    {
        for (j = l; j >= 0; j--)
        {
            if (mapa[i][j] == '.')
            {
                bolinhas++;
                mapa[i][j] = ' ';
            }
            if (mapa[i][j] == '*')
            {
                break;
            }
            if (mapa[i][j] == 'M')
            {
                break;
            }
        }
    }
    for (i = k; i < n; i++)
    {
        for (j = l; j >= 0; j--)
        {
            if (mapa[i][j] == '.')
            {
                bolinhas++;
                mapa[i][j] = ' ';
            }
            if (mapa[i][j] == '*')
            {
                break;
            }
            if (mapa[i][j] == 'M')
            {
                break;
            }
        }
    }
    for (i = k; i >= 0; i--)
    {
        for (j = l; j < m; j++)
        {
            if (mapa[i][j] == '.')
            {
                bolinhas++;
                mapa[i][j] = ' ';
            }
            if (mapa[i][j] == '*')
            {
                break;
            }
            if (mapa[i][j] == 'M')
            {
                break;
            }
        }
    }
    printf("Total de bolinhas devoradas: %d\n", bolinhas);
    printf("Mapa final:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%c", mapa[i][j]);
        }
        printf("\n");
    }
    return 0;
}
