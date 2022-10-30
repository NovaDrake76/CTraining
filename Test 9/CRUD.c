#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[100];
    int idade;
    char sexo;
} Pessoa;

Pessoa criar(char nome[100], int idade, char sexo)
{
    Pessoa p;
    strcpy(p.nome, nome);
    p.idade = idade;
    p.sexo = sexo;
    return p;
}

void inserir(Pessoa *pessoas, Pessoa p, int *n)
{
    pessoas[*n] = p;
    *n = *n + 1;
}

void deletar(Pessoa *pessoas, Pessoa p, int *n)
{
    int i, j;
    for (i = 0; i < *n; i++)
    {
        if (strcmp(pessoas[i].nome, p.nome) == 0 && pessoas[i].idade == p.idade && pessoas[i].sexo == p.sexo)
        {
            for (j = i; j < *n - 1; j++)
            {
                pessoas[j] = pessoas[j + 1];
            }
            *n = *n - 1;
            break;
        }
    }
}

void imprimir(Pessoa *pessoas, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%s,%d,%c\n", pessoas[i].nome, pessoas[i].idade, pessoas[i].sexo);
    }
}

int main()
{
    int n = 0;
    Pessoa *pessoas = (Pessoa *)malloc(sizeof(Pessoa));
    char opcao;
    char nome[100];
    int idade;
    char sexo;
    while (scanf(" %c", &opcao) != EOF)
    {
        if (opcao == 'i')
        {
            scanf(" %[^\n] %d %c", nome, &idade, &sexo);
            Pessoa p = criar(nome, idade, sexo);
            inserir(pessoas, p, &n);
            pessoas = (Pessoa *)realloc(pessoas, sizeof(Pessoa) * (n + 1));
        }
        else if (opcao == 'd')
        {
            scanf(" %[^\n] %d %c", nome, &idade, &sexo);
            Pessoa p = criar(nome, idade, sexo);
            deletar(pessoas, p, &n);
        }
        else if (opcao == 'p')
        {
            imprimir(pessoas, n);
            break;
        }
    }
    return 0;
}