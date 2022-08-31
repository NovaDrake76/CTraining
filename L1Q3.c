// user input 4 values. Sum these values, and get the letter of the alphabet corresponding to the sum. If the sum is greater than 26, subtract 26 from the sum. If the sum is less than 1, print "Ei! Ninguém colocou nada!". Print the letter.

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