/******************************************************************************

3. Faça um programa para testar se um dado é viciado. Faça o lançamento N vezes (N é um número 
lido pelo usuário, pode ser um  número bem grande), armazene cada valor que for sorteado em um 
array com 6 posições e ao final imprima o percentual do resultado de cada face. 

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int lancamento, i, face;
    int resultados[6] = {0}; // Array para contar cada face do dado (1 a 6)

    printf("Digite o número de vezes que o dado será lançado: ");
    scanf("%d", &lancamento);

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Realiza os lançamentos do dado
    for (i = 0; i < lancamento; i++) {
        face = rand() % 6; // Gera um número entre 0 e 5
        resultados[face]++; // Incrementa o contador correspondente
    }

    // Exibe os resultados
    printf("\nResultados dos lançamentos:\n");
    for (i = 0; i < 6; i++) {
        double percentual = (double)resultados[i] / lancamento * 100;
        printf("Face %d: %.2f%%\n", i + 1, percentual);
    }

    return 0;
}
