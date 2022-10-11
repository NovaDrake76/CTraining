#include <stdio.h>
#include <string.h>

int main()
{
    char text[50], pattern[50];
    scanf("%s", text);
    scanf("%s", pattern);
    for (int i = 0; i < strlen(text); i++)
    {
        int j;
        for (j = 0; j < strlen(pattern); j++)
        {
            if (text[(i + j) % strlen(text)] != pattern[j])
            {
                printf("%c não\n", text[(i + j) % strlen(text)]);
                break;
            }
        }
        if (j == strlen(pattern))
        {
            printf(" sim\n");

            printf("Achei o padrão no índice %d", i);
            break;
        }
    }
}
