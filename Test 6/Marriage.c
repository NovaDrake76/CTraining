#include <stdio.h>
#include <string.h>

int main()
{
    char text[50], pattern[50];
    scanf("%s", text);
    scanf("%s", pattern);

    int i;
    for (i = 0; i < strlen(text); i++)
    {
        int j;
        for (j = 0; j < strlen(pattern); j++)
        {
            printf("%c ", text[(i + j)]);

            if (text[(i + j)] != pattern[j])
            {
                printf("não\n", text[(i + j)]);

                if (strchr(pattern, text[i + j]) == NULL)
                {
                    i = i + j;
                }

                break;
            }
        }

        if (j == strlen(pattern))
        {
            printf("sim\n");

            printf("Achei o padrão no índice %d", i);
            break;
        }
        if (i + strlen(pattern) > strlen(text) - 1)
        {
            printf("Não achei o padrão");
            break;
        }
    }
}
