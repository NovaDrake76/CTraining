#include <stdio.h>

int ehPar(int number)
{
    if (number % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(void)
{
    int number;
    scanf("%d", &number);
    if (ehPar(number))
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
}