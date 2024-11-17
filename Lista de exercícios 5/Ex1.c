/******************************************************************************
1. Criar um vetor de 10 números v e inicialize-o sorteando valores de 10 a 90 para cada elemento. 
Depois disso, implemente algoritmos para: 
a. Imprimir o vetor 
b. Verificar se existe o valor 50 neste vetor (apenas dizer se encontrou ou não) 
c. Verificar o número de ocorrências do valor 50 neste vetor. 
d. Calcular a média dos valores do vetor 
e. Encontrar o maior e o menor valor dos elementos do vetor. 
f. 
Imprimir a soma e o produto acumulado dos valores dos elementos do vetor 
g. Imprimir o vetor em ordem inversa 
h. Copiar os elementos em ordem inversa para outro vetor. 
i. 
Crie outros dois vetores com 10 elementos, vPares e vImpares. Copie para vPares todos os 
elementos pares e para vImpares todos os elementos ímpares. Depois disso, imprima o 
conteúdo de vPares e vImpares (OBS.: guarde o número de pares e ímpares para poder 
acessar os vetores depois). 
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    
    int vetor[10];
    int vetor_inverso[10]; // Vetor para armazenar os elementos em ordem inversa
    int vPares[10];        // Vetor para armazenar os elementos pares
    int vImpares[10];      // Vetor para armazenar os elementos ímpares
    int numPares = 0;      // Contador para elementos pares
    int numImpares = 0;    // Contador para elementos ímpares
    int vlr50 = 0;
    float media;
    int maiorvlr, menorvlr, soma = 0, produto = 1;  // Inicializando produto como 1

    // Inicializa `maiorvlr` e `menorvlr` com o primeiro valor a ser sorteado no vetor
    vetor[0] = (rand() % 81) + 10;
    maiorvlr = vetor[0];
    menorvlr = vetor[0];
    soma += vetor[0];
    produto *= vetor[0];
    printf("Vetor [0] = %d\n", vetor[0]);
    if (vetor[0] == 50) {
        vlr50++;
    }

    // Classificação do primeiro elemento como par ou ímpar
    if (vetor[0] % 2 == 0) {
        vPares[numPares++] = vetor[0];
    } else {
        vImpares[numImpares++] = vetor[0];
    }

    for (int i = 1; i < 10; i++) {
        
        vetor[i] = (rand() % 81) + 10;
        printf("Vetor [%d] = %d\n", i, vetor[i]);
        
        if (vetor[i] == 50) {
            vlr50++;
        }

        soma += vetor[i];
        produto *= vetor[i];
        
        // Atualiza `maiorvlr` se o valor atual for maior
        if (vetor[i] > maiorvlr) {
            maiorvlr = vetor[i];
        }
        
        // Atualiza `menorvlr` se o valor atual for menor
        if (vetor[i] < menorvlr) {
            menorvlr = vetor[i];
        }

        // Classifica como par ou ímpar
        if (vetor[i] % 2 == 0) {
            vPares[numPares++] = vetor[i];
        } else {
            vImpares[numImpares++] = vetor[i];
        }
    }
        
    // Calcula a média fora do loop
    media = (float)soma / 10;
        
    if (vlr50 > 0) {
        printf("Valor 50 encontrado no vetor!\n");
        printf("O valor 50 foi sorteado %d vezes!\n", vlr50);
    } else {
        printf("Não existe valor 50 no vetor!\n");
    }

    printf("O maior valor sorteado foi %d\n", maiorvlr);
    printf("O menor valor sorteado foi %d\n", menorvlr);
    printf("A soma dos valores é %d\n", soma);
    printf("O produto acumulado dos valores é %d\n", produto);
    printf("A média dos valores é %.2f\n", media);

    // Copia os elementos em ordem inversa para outro vetor
    for (int i = 0; i < 10; i++) {
        vetor_inverso[i] = vetor[9 - i];
    }

    // Imprime o vetor em ordem inversa
    printf("Vetor em ordem inversa:\n");
    for (int i = 9; i >= 0; i--) {
        printf("Vetor [%d] = %d\n", i, vetor[i]);
    }

    // Imprime o vetor copiado em ordem inversa
    printf("Vetor copiado (em ordem inversa):\n");
    for (int i = 0; i < 10; i++) {
        printf("Vetor_Inverso [%d] = %d\n", i, vetor_inverso[i]);
    }

    // Imprime os elementos pares
    printf("Elementos pares:\n");
    for (int i = 0; i < numPares; i++) {
        printf("vPares [%d] = %d\n", i, vPares[i]);
    }

    // Imprime os elementos ímpares
    printf("Elementos ímpares:\n");
    for (int i = 0; i < numImpares; i++) {
        printf("vImpares [%d] = %d\n", i, vImpares[i]);
    }

    return 0;
}