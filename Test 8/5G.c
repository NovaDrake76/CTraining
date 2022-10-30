#include <stdio.h>

int flag = 0;

int get_range(int n, int cells[n], int distance, int user, int *left_index, int *right_index)
{
    int i, j, k, l, m, o;
    int left = 0, right = 0;
    for (i = 0; i < n; i++)
    {
        if (user - distance <= cells[i])
        {
            left = i;
            break;
        }
    }
    for (j = n - 1; j >= 0; j--)
    {
        if (user + distance >= cells[j])
        {
            right = j;
            break;
        }
    }

    for (k = left; k <= right; k++)
    {
        if (cells[k] >= user - distance && cells[k] <= user + distance)
        {
            printf("%d ", cells[k]);
            flag = 1;
        }
    }
    *left_index = left;
    *right_index = right;
    return right - left + 1;
}

int main()
{
    int n, d, u, i, left, right;
    scanf("%d %d %d", &n, &d, &u);
    int cells[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &cells[i]);
    }
    get_range(n, cells, d, u, &left, &right);
    if (flag == 0)
    {
        printf("USUARIO DESCONECTADO");
    }

    return 0;
}
