/******************************************************************************

4. Escreva um algoritmo que preenche uma matriz 4x6 com valores inteiros aleatórios entre -10 e 
10. Calcule as somas:  
a. dos elementos da segunda linha 
b. dos elementos da quinta coluna 
c. da multiplicação dos elementos da primeira linha pelos elementos da quarta linha  
d. dos elementos só das colunas com índices pares  
e. dos elementos só das linhas com índices ímpares  

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[4][6];
    int somaSegundaLinha = 0;
    int somaQuintaColuna = 0;
    int somaMultiplicacaoPrimeiraQuartaLinha = 0;
    int somaColunasPares = 0;
    int somaLinhasImpares = 0;

    srand(time(NULL));

    // Para gerar a matriz com valores aleatórios entre -10 e 10
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            matriz[i][j] = (rand() % 21) - 10; // Gera números de -10 a 10
            printf("%3d ", matriz[i][j]); // Imprime a matriz formatada por causa do %3d.
        }
        printf("\n");
    }

    // a. Soma dos elementos da segunda linha
    for (int j = 0; j < 6; j++) {
        somaSegundaLinha += matriz[1][j];
    }

    // b. Soma dos elementos da quinta coluna
    for (int i = 0; i < 4; i++) {
        somaQuintaColuna += matriz[i][4];
    }

    // c. Soma da multiplicação dos elementos da primeira linha pelos elementos da quarta linha
    for (int j = 0; j < 6; j++) {
        somaMultiplicacaoPrimeiraQuartaLinha += matriz[0][j] * matriz[3][j];
    }

    // d. Soma dos elementos só das colunas com índices pares
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j += 2) { // Índices pares: 0, 2, 4
            somaColunasPares += matriz[i][j];
        }
    }

    // e. Soma dos elementos só das linhas com índices ímpares
    for (int i = 1; i < 4; i += 2) { // Índices ímpares: 1, 3
        for (int j = 0; j < 6; j++) {
            somaLinhasImpares += matriz[i][j];
        }
    }

    printf("\nSoma dos elementos da segunda linha: %d\n", somaSegundaLinha);
    printf("Soma dos elementos da quinta coluna: %d\n", somaQuintaColuna);
    printf("Soma da multiplicação dos elementos da primeira linha pelos da quarta linha: %d\n", somaMultiplicacaoPrimeiraQuartaLinha);
    printf("Soma dos elementos das colunas com índices pares: %d\n", somaColunasPares);
    printf("Soma dos elementos das linhas com índices ímpares: %d\n", somaLinhasImpares);

    return 0;
}