/******************************************************************************

Faça um programa que leia 5 valores para dentro de um vetor e imprima o resultado de cada 
valor multiplicado pela sua posição no vetor. Por exemplo: 1, 2, 3, 4 e 5 imprimirá na tela 0, 2, 6, 
12 e 20. 

*******************************************************************************/
#include <stdio.h>

int main() {
    int vetor[5]; // Declara um vetor de 5 posições

    // Solicita ao usuário que insira os valores
    printf("Digite 5 valores para preencher o vetor:\n");
    for (int i = 1; i < 6; i++) {
        printf("Digite o valor para a posição [%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    // Multiplica os valores pela sua posição e exibe os resultados
    printf("\nValores multiplicados pela sua posição:\n");
    for (int i = 1; i < 6; i++) {
        // Multiplicação considerando a posição (i + 1)
        int resultado = vetor[i] * (i + 1);
        printf("Vetor [%d] * %d = %d\n", i, (i + 1), resultado);
    }

    return 0;
}