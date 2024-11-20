/******************************************************************************

7. Faça um programa que gere uma matriz de inteiros 5x5 e que transforme os números negativos 
em positivos e vice-versa.  

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[5][5];

    srand(time(NULL));

    printf("Matriz original:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matriz[i][j] = (rand() % 21) - 10; // Gera números de -10 a 10
            printf("%3d ", matriz[i][j]); 
        }
        printf("\n");
    }

    // Transformar números negativos em positivos e vice-versa
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matriz[i][j] = -matriz[i][j];
        }
    }

    // Exibir a matriz transformada
    printf("\nMatriz transformada (negativos viraram positivos e vice-versa):\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%3d ", matriz[i][j]); 
        }
        printf("\n");
    }

    return 0;
}
