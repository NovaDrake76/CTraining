#include <stdio.h>

int detectGrade(float score, int limit1, int limit2, int id, int i, int primeiro)
{

    if (score >= limit1 && score < limit2)
    {
        if (primeiro == 0)
        {
            printf("%d (%.1f)", id, score);
            primeiro++;
        }
        else
        {
            printf(", %d (%.1f)", id, score);
        }
    }
    return primeiro;
}

int main()
{
    int n, primeiro = 0;
    scanf("%d", &n);
    int id[n];
    float score[n];

    char c;

    for (int i = 0; i < n; i++)
    {
        scanf("%d %c %f", &id[i], &c, &score[i]);
    }

    printf("Aprovados: ");
    for (int i = 0; i < n; i++)
    {

        primeiro = detectGrade(score[i], 7.0, 10.0, id[i], i, primeiro);
    }
    primeiro = 0;
    printf("\nRecuperação: ");
    for (int i = 0; i < n; i++)
    {

        primeiro = detectGrade(score[i], 5.0, 7.0, id[i], i, primeiro);
    }
    primeiro = 0;
    printf("\nReprovados: ");
    for (int i = 0; i < n; i++)
    {

        primeiro = detectGrade(score[i], 0.0, 5.0, id[i], i, primeiro);
    }
}