#include <stdio.h>
#include <string.h>

int palindromo(char *entrada);

int main(void)
{
    char entrada[100];
    scanf("%[^\n]", entrada);
    if (palindromo(entrada))
        printf("O texto \"%s\" é palíndromo\n", entrada);
    else
        printf("O texto \"%s\" não é palíndromo\n", entrada);
    return 0;
}

int palindromo(char *entrada)
{
    int i, j, tam;
    tam = strlen(entrada);
    for (i = 0, j = tam - 1; i < tam; i++, j--)
    {
        if (entrada[i] == ' ')
        {
            i++;
        }
        if (entrada[j] == ' ')
        {
            j--;
        }
        if (entrada[i] != entrada[j])
        {
            return 0;
        }
    }
    return 1;
}
