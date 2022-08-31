//Adedooooooo...nha!

#include <stdio.h>

int main(void)
{
    char alphabet[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int A, B, C, D, sum;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);
    sum = A + B + C + D;
    if (sum > 26)
    {
        sum = sum - 26;
    }
    if (sum < 1)
    {
        printf("Ei! Ninguém colocou nada!");
    }
    else
    {
        printf("Letra: %c", alphabet[sum - 1]);
    }
}