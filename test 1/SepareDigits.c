// Separação numérica

// user inputs a number, then the program prints each digit of the number in a new line

#include <stdio.h>

int array[10];

int main()
{
    int n;
    int j = 0;
    scanf("%d", &n);
    while (n > 0)
    {
        int digit = n % 10;
        array[j] = digit;
        n /= 10;
        j++;
    }

    for (int i = j - 1; i >= 0; i--)
    {
        printf("%d\n", array[i]);
    }
    return 0;
}