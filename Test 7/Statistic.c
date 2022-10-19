#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[50];
    int golsMarcados;
    int golsSofridos;
} Time;

void ordenaPorGolsMarcados(Time *times, int n)
{
    int i, j;
    Time aux;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (times[i].golsMarcados < times[j].golsMarcados)
            {
                aux = times[i];
                times[i] = times[j];
                times[j] = aux;
            }
        }
    }
}

int main()
{
    int n, i;
    scanf("%d", &n);
    Time *times = (Time *)malloc(n * sizeof(Time));
    for (i = 0; i < n; i++)
    {
        scanf(" %[^\n]", times[i].nome);
        scanf("%d", &times[i].golsMarcados);
        scanf("%d", &times[i].golsSofridos);
    }
    ordenaPorGolsMarcados(times, n);
    for (i = 0; i < n; i++)
    {
        printf("%d - %s\n", i + 1, times[i].nome);
        printf("Gols marcados: %d\nGols sofridos: %d\n", times[i].golsMarcados, times[i].golsSofridos);
    }
    free(times);
    return 0;
}