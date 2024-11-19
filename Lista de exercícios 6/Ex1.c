/******************************************************************************

1. Dados os vetores 𝑣1 = [1,5,9,2,5], 𝑣2 = [7,4,13,21,6] e 𝑣3 = [8, −3,5,7,12], faça um programa 
que copie o conteúdo dos vetores dados para uma matriz de tamanho 3x5 de forma a obter o 
seguinte resultado:

*******************************************************************************/
#include <stdio.h>

int main() {
    // Definição dos vetores
    int v1[5] = {1, 5, 9, 2, 5};
    int v2[5] = {7, 4, 13, 21, 6};
    int v3[5] = {8, -3, 5, 7, 12};

    // Definição da matriz 3x5
    int M[3][5];

    // Copiando os vetores para a matriz
    for (int j = 0; j < 5; j++) {
        M[0][j] = v1[j];
        M[1][j] = v2[j];
        M[2][j] = v3[j];
    }

    // Exibindo a matriz
    printf("Matriz M:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%3d ", M[i][j]);//Usado o %3d, pois ajuda a deixar a matriz alinhada na exibição.
        }
        printf("\n");
    }

    return 0;
}
