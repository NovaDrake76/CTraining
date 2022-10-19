#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, m, i, j, k, l, t, p, s;
    char prefixos[100][11], sufixos[100][11], palavra[101], aux[101];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", prefixos[i]);
    }
    scanf("%d", &m);
    for (i = 0; i < m; i++)
    {
        scanf("%s", sufixos[i]);
    }
    while (1)
    {
        scanf("%s", palavra);
        if (strcmp(palavra, "-1") == 0)
        {
            break;
        }
        p = 0;
        s = 0;
        for (i = 0; i < n; i++)
        {
            t = strlen(prefixos[i]);
            if (strncmp(palavra, prefixos[i], t) == 0)
            {
                p = 1;
                for (j = t, k = 0; j < strlen(palavra); j++, k++)
                {
                    aux[k] = palavra[j];
                }
                aux[k] = '\0';
                strcpy(palavra, aux);
                break;
            }
        }
        for (i = 0; i < m; i++)
        {
            t = strlen(sufixos[i]);
            if (strncmp(palavra + strlen(palavra) - t, sufixos[i], t) == 0)
            {
                s = 1;
                palavra[strlen(palavra) - t] = '\0';
                break;
            }
        }
        if (p == 1 || s == 1)
        {
            printf("%s\n", palavra);
        }
    }
    return 0;
}