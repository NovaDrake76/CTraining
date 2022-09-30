#include <stdio.h>

int main()
{
    int n, m, total;

    scanf("%d", &n);
    scanf("%d", &m);
    total = n * m;
    char scan[total];
    char list1[5] = {'~', 'X', '^', '*', '.'};
    int list2[5] = {0, 0, 0, 0, 0};

    for (int i = 0; i < total; i++)
    {
        scanf("%c", &scan[i]);
    }

    for (int j = 0; j < total; j++)
    {
        for (int k = 0; k < 5; k++)
        {

            if (scan[j] == list1[k])
            {
                list2[k] += 1;
            }
        }
    }

    if (list2[1] > 0)
    {
        printf("Planeta Hostil");
    }
    else if ((list2[0] >= total * 0.50) && (list2[3] >= total * 0.20))
    {
        printf("Planeta Classe M");
    }
    else if (list2[0] > total * 0.85)
    {
        printf("Planeta Aquático");
    }
    else if (list2[2] > total * 0.60)
    {
        printf("Planeta Desértico");
    }
    else if (list2[3] > total * 0.65)
    {
        printf("Planeta Selvagem");
    }
    else
    {
        printf("Planeta Inóspito");
    }
}
