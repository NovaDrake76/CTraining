#include <stdio.h>

void compute_votes(int n, int votes[n], int *most_voted, int *second_most_voted)
{
    int i, j, k, l, m, o;
    int count[10] = {0};
    for (i = 0; i < n; i++)
    {
        count[votes[i] - 1]++;
    }
    int max = 0, second_max = 0;
    for (j = 0; j < 10; j++)
    {
        if (count[j] > max)
        {
            max = count[j];
            *most_voted = j + 1;
        }
    }
    for (k = 0; k < 10; k++)
    {
        if (count[k] > second_max && count[k] < max)
        {
            second_max = count[k];
            *second_most_voted = k + 1;
        }
    }
}

int main()
{
    int n, i, most_voted, second_most_voted;
    scanf("%d", &n);
    int votes[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &votes[i]);
    }
    compute_votes(n, votes, &most_voted, &second_most_voted);
    printf("%d %d", most_voted, second_most_voted);

    return 0;
}
