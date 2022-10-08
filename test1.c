#include <stdio.h>

int main()
{
    char tabuleiro[3][3];
    int jogadas;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%c", &tabuleiro[i][j]);
        }
    }

    scanf("%d", &jogadas);
    for (int i = 0; i < jogadas; i++)
    {
        int a, b;
        char c;
        scanf("%d %d %c", &a, &b, &c);

        if (tabuleiro[a][b] != '.')
        {
            printf("Jogada inválida!\n");
        }
        else if (tabuleiro[a - 1][b - 1] == c || tabuleiro[a - 1][b] == c | tabuleiro[a - 1][b + 1] == c || tabuleiro[a][b - 1] == c || tabuleiro[a][b + 1] == c || tabuleiro[a + 1][b - 1] == c || tabuleiro[a + 1][b] == c || tabuleiro[a + 1][b + 1] == c)
            |
            {
                printf("Boa jogada, vai vencer!\n");
            }
        else
        {
            printf("Continua o jogo.!\n");
        }
    }
}