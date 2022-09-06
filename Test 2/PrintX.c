#include <stdio.h>

int main()
{
    int i;
    char c;
    scanf("%d %c", &i, &c);

    for (int j = 0; j < i; j++)
    {
        for (int k = 0; k < i; k++)
        {
            if (j == k || j + k == i - 1)
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