#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char modelo[40];
    int memoria;
    float processador;
    float camera;
    float bateria;
} Smartphone;

int cadastraSmartphone(int qnt_cadastrada, Smartphone phones[])
{
    Smartphone novo;
    scanf(" %[^\n]s", novo.modelo);
    scanf(" %d %f %f %f", &novo.memoria, &novo.processador, &novo.camera, &novo.bateria);
    phones[qnt_cadastrada] = novo;
    return qnt_cadastrada + 1;
}

int pesquisaSmartphones(int qnt_cadastrada, Smartphone phones[], Smartphone reqMin)
{
    int i, qnt_encontrada = 0;
    for (i = 0; i < qnt_cadastrada; i++)
    {
        if (phones[i].memoria >= reqMin.memoria && phones[i].processador >= reqMin.processador && phones[i].camera >= reqMin.camera && phones[i].bateria >= reqMin.bateria)
        {
            printf("Modelo: %s\n", phones[i].modelo);
            printf("Memoria: %dGB\nProcessador: %.2fGhz\nCamera: %.2fMPixels\nBateria: %.2fmA\n \n", phones[i].memoria, phones[i].processador, phones[i].camera, phones[i].bateria);
            qnt_encontrada++;
        }
    }
    return qnt_encontrada;
}

int main()
{
    Smartphone phones[100];
    Smartphone reqMin;
    int qnt_cadastrada = 0, qnt_encontrada;
    char opcao;
    scanf(" %c", &opcao);
    do
    {
        qnt_cadastrada = cadastraSmartphone(qnt_cadastrada, phones);
        scanf(" %c", &opcao);
    } while (opcao == 's');
    scanf(" %d %f %f %f", &reqMin.memoria, &reqMin.processador, &reqMin.camera, &reqMin.bateria);
    qnt_encontrada = pesquisaSmartphones(qnt_cadastrada, phones, reqMin);
    printf("%d smartphones encontrados. ", qnt_encontrada);
    return 0;
}
