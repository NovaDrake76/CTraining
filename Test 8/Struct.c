#include <stdio.h>

typedef struct conjunto
{
    int numeros[100];
    int tamanho;
} conjunto;

int main()
{
    int i, j, k, l, m, o;
    conjunto A, B;
    scanf("%d", &A.tamanho);
    for (i = 0; i < A.tamanho; i++)
    {
        scanf("%d", &A.numeros[i]);
    }
    scanf("%d", &B.tamanho);
    for (j = 0; j < B.tamanho; j++)
    {
        scanf("%d", &B.numeros[j]);
    }
    conjunto uniao, intersecao;
    uniao.tamanho = 0;
    intersecao.tamanho = 0;
    for (k = 0; k < A.tamanho; k++)
    {
        uniao.numeros[uniao.tamanho] = A.numeros[k];
        uniao.tamanho++;
    }
    for (l = 0; l < B.tamanho; l++)
    {
        int flag = 0;
        for (m = 0; m < A.tamanho; m++)
        {
            if (B.numeros[l] == A.numeros[m])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            uniao.numeros[uniao.tamanho] = B.numeros[l];
            uniao.tamanho++;
        }
    }
    for (o = 0; o < A.tamanho; o++)
    {
        for (m = 0; m < B.tamanho; m++)
        {
            if (A.numeros[o] == B.numeros[m])
            {
                intersecao.numeros[intersecao.tamanho] = A.numeros[o];
                intersecao.tamanho++;
            }
        }
    }
    printf("A união B == {");
    for (i = 0; i < uniao.tamanho; i++)
    {
        if (i == uniao.tamanho - 1)
        {
            printf("%d", uniao.numeros[i]);
        }
        else
        {
            printf("%d ", uniao.numeros[i]);
        }
    }
    printf("}\n");
    printf("A interseção B == {");
    for (i = 0; i < intersecao.tamanho; i++)
    {
        if (i == intersecao.tamanho - 1)
        {
            printf("%d", intersecao.numeros[i]);
        }
        else
        {
            printf("%d ", intersecao.numeros[i]);
        }
    }
    printf("}\n");
    return 0;
}
