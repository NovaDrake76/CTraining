// Sistema de despacho de heróis

#include <stdio.h>

int main()
{
    int quantity, heroes, monster, heroesPower, monsterPower;
    scanf("%d", &quantity);
    scanf("%d", &heroes);
    scanf("%d", &monster);

    if (heroes > monster && quantity > 0 || heroes == 5 && quantity > 0)
    {
        printf("Heróis vencerão!");
    }
    else
    {
        if (monster == 5)
        {
            printf("Melhor chamar Saitama!");
        }
        else
        {
            heroesPower = heroes * quantity;
            monsterPower = monster * 3;

            if (heroesPower >= monsterPower)
            {
                printf("Heróis vencerão!");
            }
            else
            {
                printf("Melhor chamar Saitama!");
            }
        }
    }
}