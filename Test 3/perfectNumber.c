#include <stdio.h>

int isPerfect(int number)
{
    int sum = 0;
    int i;
    for (i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            sum += i;
        }
    }
    if (sum == number)
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
    int n;
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++)
    {
        int number;
        scanf("%d", &number);
        if (isPerfect(number))
        {
            printf("%d eh perfeito\n", number);
        }
        else
        {
            printf("%d nao eh perfeito\n", number);
        }
    }
}