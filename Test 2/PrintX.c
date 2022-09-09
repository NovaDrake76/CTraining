#include <stdio.h>

int main(void)
{
    int n;
    char c;
    scanf("%d %c", &n, &c);
    int z = n - 1;
    int i, j;
    for (i = 0; i < z; i++)
    {
        for (j = 0; j < z; j++)
        {
            if (i == j || i + j == z - 1)
            {
                printf("%c", c);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}