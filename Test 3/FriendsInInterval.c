
#include <stdio.h>

int isDivisible(int number, int divisor)
{
    if (number % divisor == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int sumOfDivisors(int value)
{
    int sum = 0;
    int i;
    for (i = 1; i < value; i++)
    {
        if (isDivisible(value, i))
        {
            sum += i;
        }
    }
    return sum;
}

int areFriends(int a, int b)
{
    if (sumOfDivisors(a) == b && sumOfDivisors(b) == a)
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
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int i, j;
    int hasFriends = 0;
    for (i = a; i <= b; i++)
    {
        for (j = c; j <= d; j++)
        {
            if (areFriends(i, j))
            {
                printf("O %d possui um amigo!\n", i);
                hasFriends = 1;
            }
        }
    }
    if (!hasFriends)
    {
        printf("Os intervalos nao apresentam amigos!");
    }
}
