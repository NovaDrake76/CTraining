#include <stdio.h>

int legal(int v[], int n)
{
    int i;
    for (i = 0; i < n - 1; i++)
    {
        if ((v[i] - v[i + 1]) % 2 != 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n, i;
    int v[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
    if (legal(v, n))
        printf("Legal");
    else
        printf("Chato");
    return 0;
}
