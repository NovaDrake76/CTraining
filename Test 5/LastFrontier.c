#include <stdio.h>

int main()
{
    int n, m, total;

    scanf("%d", &n);
    scanf("%d", &m);
    total = n * m;
    char scan[total];
    char list1[5] = {'~', 'X', '^', '*', '.'};
    // agua, especies, deserto, vegetação, sem recursos
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

    if (list2[0] + ((10 * total) / 100) > (85 * total) / 100)
    {
        printf("Planeta Aquático");
    }
    else if (list2[1] > 0)
    {
        printf("Planeta Hostil");
    }
    else if (list2[2] > (60 * total) / 100)
    {
        printf("Planeta Desértico");
    }
    else if (list2[3] > (65 * total) / 100)
    {
        printf("Planeta Selvagem");
    }
    else if ((list2[0] > (50 * total) / 100) && (list2[3] > (20 * total) / 100) && (list2[1] == 0))
    {
        printf("Planeta Classe M");
    }
    else
    {
        printf("Planeta Inóspito");
    }
}
