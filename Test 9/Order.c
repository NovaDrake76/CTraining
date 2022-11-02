#include <stdio.h>

int main(void)
{
    // read multiple numbers and order them
    int n, i, j, temp;
    int a[100];
    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf("Enter the numbers \n");
    for (i = 0; i < n; ++i)
        scanf("%d", &a[i]);
}