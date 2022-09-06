#include <stdio.h>

int main()
{
    int i, j, k = 1;
    scanf("%d", &i);
    if (i < 1)
    {
        printf("Você entrou com %d, tente de novo na próxima", i);
    }
    else
    {
        for (j = 1; j <= i; j++)
        {
            for (int l = 1; l <= j; l++)
            {
                if (k < 10)
                {
                    printf(" %d ", k);
                }
                else
                {
                    printf("%d ", k);
                }
                k++;
            }
            printf("\n");
        }
    }
}