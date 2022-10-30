#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char **PARTICIPANTES = NULL;
    int N = 0;
    int S;
    int indice_participante;
    int i, j, k, l, m, o;
    char nome[100];
    scanf("%s", nome);
    while (strcmp(nome, "acabou") != 0)
    {
        PARTICIPANTES = (char **)realloc(PARTICIPANTES, (N + 1) * sizeof(char *));
        PARTICIPANTES[N] = (char *)malloc(100 * sizeof(char));
        strcpy(PARTICIPANTES[N], nome);
        N++;
        scanf("%s", nome);
    }
    scanf("%d", &S);
    srand(S);
    int sorteado[N];
    for (i = 0; i < N; i++)
    {
        sorteado[i] = 0;
    }
    int count = 0;
    while (count < N)
    {
        indice_participante = rand() % N;
        if (sorteado[indice_participante] == 0)
        {
            printf("%s\n", PARTICIPANTES[indice_participante]);
            sorteado[indice_participante] = 1;
            count++;
        }
    }
    for (j = 0; j < N; j++)
    {
        free(PARTICIPANTES[j]);
    }
    free(PARTICIPANTES);
    return 0;
}
