#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    printBinary(n);
    printf("\n");
}

void printBinary(int n)
{
    if (n < 2)
        printf("%d", n);
    else
    {
        printBinary(n / 2);
        printf("%d", n % 2);
    }
}