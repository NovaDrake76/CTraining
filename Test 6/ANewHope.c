#include <stdio.h>
#include <string.h>

void read_line(char linha[], int tam, FILE *f)
{
    fgets(linha, tam, f);
    while (linha[0] == '\n')
        fgets(linha, tam, f);
    if (linha[strlen(linha) - 1] == '\n')
        linha[strlen(linha) - 1] = '\0';
}

int main()
{
    const char S[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '.', ',', '?', ' '};

    char key[50];
    scanf("%s", key);

    char text[200] = {0};
    read_line(text, 200, stdin);

    // verifica caractere
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
        text[i] = S[(j + k) % strlen(S)];
    }

    printf("%s", text);

    return 0;
}
