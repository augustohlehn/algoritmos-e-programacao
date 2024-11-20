/******************************************************************************

5. Encontre o maior e o menor valor da matriz gerada no exercício anterior.

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
    int maiorValor, menorValor;

  srand(time(NULL));

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            matriz[i][j] = (rand() % 21) - 10; 
            printf("%3d ", matriz[i][j]); 

            // Encontrar o maior e o menor valor na matriz
            if (i == 0 && j == 0) {
                // Inicializar o maior e menor valor com o primeiro elemento
                maiorValor = menorValor = matriz[i][j];
            } else {
                if (matriz[i][j] > maiorValor) maiorValor = matriz[i][j];
                if (matriz[i][j] < menorValor) menorValor = matriz[i][j];
            }
        }
        printf("\n");
    }

    for (int j = 0; j < 6; j++) {
        somaSegundaLinha += matriz[1][j];
    }

    for (int i = 0; i < 4; i++) {
        somaQuintaColuna += matriz[i][4];
    }

    for (int j = 0; j < 6; j++) {
        somaMultiplicacaoPrimeiraQuartaLinha += matriz[0][j] * matriz[3][j];
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j += 2) { 
            somaColunasPares += matriz[i][j];
        }
    }

    for (int i = 1; i < 4; i += 2) { 
        for (int j = 0; j < 6; j++) {
            somaLinhasImpares += matriz[i][j];
        }
    }

    
    printf("\nSoma dos elementos da segunda linha: %d\n", somaSegundaLinha);
    printf("Soma dos elementos da quinta coluna: %d\n", somaQuintaColuna);
    printf("Soma da multiplicação dos elementos da primeira linha pelos da quarta linha: %d\n", somaMultiplicacaoPrimeiraQuartaLinha);
    printf("Soma dos elementos das colunas com índices pares: %d\n", somaColunasPares);
    printf("Soma dos elementos das linhas com índices ímpares: %d\n", somaLinhasImpares);
    printf("Maior valor da matriz: %d\n", maiorValor);
    printf("Menor valor da matriz: %d\n", menorValor);

    return 0;
}