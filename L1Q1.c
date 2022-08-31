#include <stdio.h>

int main(void)
{
    int A, B;
    scanf("%d", &A);
    scanf("%d", &B);
    if (A % 2 == 0 && B % 2 == 0)
    {
        printf("%d", A + B);
    }
    if (A % 2 != 0)
    {
        printf("Não posso somar, pois %d não é par \n", A);
    }
    if (B % 2 != 0)
    {
        printf("Não posso somar, pois %d não é par", B);
    }
    return 0;
}
