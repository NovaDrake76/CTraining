#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct time
{
    char nome[22];
    int pontos;
    int vitorias;
    int empates;
    int derrotas;
    int gols_pro;
    int gols_contra;
    int saldo_gols;
};

int main()
{
    int numTeams;
    scanf("%d", &numTeams);

    struct time *teams = malloc(numTeams * sizeof(struct time));

    for (int i = 0; i < numTeams; i++)
    {
        scanf("%[^1-9]", teams[i].nome);
        teams[i].nome[strlen(teams[i].nome) - 2] = '\0';

        scanf("%d %d %d %d %d", &teams[i].vitorias, &teams[i].empates, &teams[i].derrotas, &teams[i].gols_pro, &teams[i].gols_contra);
        teams[i].pontos = teams[i].vitorias * 3 + teams[i].empates;
        teams[i].saldo_gols = teams[i].gols_pro - teams[i].gols_contra;
    }

    for (int i = 0; i < numTeams; i++)
    {
        for (int j = i + 1; j < numTeams; j++)
        {
            if (teams[i].pontos < teams[j].pontos)
            {
                struct time aux = teams[i];
                teams[i] = teams[j];
                teams[j] = aux;
            }
            else if (teams[i].pontos == teams[j].pontos)
            {
                if (teams[i].vitorias < teams[j].vitorias)
                {
                    struct time aux = teams[i];
                    teams[i] = teams[j];
                    teams[j] = aux;
                }
                else if (teams[i].vitorias == teams[j].vitorias)
                {
                    if (teams[i].saldo_gols < teams[j].saldo_gols)
                    {
                        struct time aux = teams[i];
                        teams[i] = teams[j];
                        teams[j] = aux;
                    }
                    else if (teams[i].saldo_gols == teams[j].saldo_gols)
                    {
                        if (teams[i].gols_pro < teams[j].gols_pro)
                        {
                            struct time aux = teams[i];
                            teams[i] = teams[j];
                            teams[j] = aux;
                        }
                    }
                }
            }
        }
    }
    printf("Tabela do campeonato:\n");
    printf("Nome| Pontos| Jogos| Vitorias| Empates| Derrotas| Gols Pro| Gols Contra| Saldo de Gols");
    for (int i = 0; i < numTeams; i++)
    {
        printf("%s| %d| %d| %d| %d| %d| %d| %d| %d", teams[i].nome, teams[i].pontos, teams[i].vitorias + teams[i].empates + teams[i].derrotas, teams[i].vitorias, teams[i].empates, teams[i].derrotas, teams[i].gols_pro, teams[i].gols_contra, teams[i].saldo_gols);
    }
    printf("\n \n");

    printf("Times na zona da libertadores:");
    for (int i = 0; i < 6; i++)
    {
        printf("%s", teams[i].nome);
    }

    printf("\n \n");

    printf("Times rebaixados:");
    for (int i = numTeams - 1; i > numTeams - 5; i--)
    {
        printf("%s", teams[i].nome);
    }

    free(teams);
}
