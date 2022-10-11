#include <stdio.h>
#include <string.h>

int main()
{
    const char S[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '.', ',', '?', ' '};

    char key[50];
    scanf("%s", key);

    char text[50];
    scanf("%s", text);

    for (int i = 0; i < strlen(text); i++)
    {
        int j;
        for (j = 0; j < strlen(S); j++)
        {
            if (text[i] == S[j])
            {
                break;
            }
        }
        if (j == strlen(S))
        {
            printf("Caractere invalido na entrada!\n");
            return 0;
        }
    }

    if (strlen(key) > 4)
    {
        printf("Chave invalida!\n");
        return 0;
    }

    for (int i = 0; i < strlen(text); i++)
    {
        int j;
        for (j = 0; j < strlen(S); j++)
        {
            if (text[i] == S[j])
            {
                break;
            }
        }
        int k;
        for (k = 0; k < strlen(S); k++)
        {
            if (key[i % strlen(key)] == S[k])
            {
                break;
            }
        }
        printf("%c", S[(j + k) % strlen(S)]);
    }
    printf("\n");

    return 0;
}
