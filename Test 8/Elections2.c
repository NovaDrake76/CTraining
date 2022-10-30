#include <stdio.h>
#include <string.h>

typedef struct
{
    int id;
    char name[100];
    int votes;
} Party;

int compute_votes(int num_votes, int votes[num_votes], int num_parties, Party parties[num_parties], Party *most_voted, Party *second_most_voted)
{
    int i, j, k, l, m, o;
    int count[10] = {0};
    for (i = 0; i < num_votes; i++)
    {
        count[votes[i] - 1]++;
    }
    int max = 0, second_max = 0;
    for (j = 0; j < num_parties; j++)
    {
        if (count[j] > max)
        {
            max = count[j];
            *most_voted = parties[j];
        }
    }
    for (k = 0; k < num_parties; k++)
    {
        if (count[k] > second_max && count[k] < max)
        {
            second_max = count[k];
            *second_most_voted = parties[k];
        }
    }
    return max + second_max;
}

int main()
{
    int num_parties, num_votes, i, j, k, l, m, o;
    scanf("%d", &num_parties);
    Party parties[num_parties];
    for (i = 0; i < num_parties; i++)
    {
        scanf("%d", &parties[i].id);
        scanf("%s", parties[i].name);
        parties[i].votes = 0;
    }
    scanf("%d", &num_votes);
    int votes[num_votes];
    for (j = 0; j < num_votes; j++)
    {
        scanf("%d", &votes[j]);
    }
    Party most_voted, second_most_voted;
    int valid_votes = compute_votes(num_votes, votes, num_parties, parties, &most_voted, &second_most_voted);

    printf("VENCEDOR: %s (%d votos = %.2f%%)\n", most_voted.name, most_voted.votes, (float)most_voted.votes / valid_votes * 100);
    printf("VICE: %s (%d votos = %.2f%%)\n", second_most_voted.name, second_most_voted.votes, (float)second_most_voted.votes / valid_votes * 100);
}
