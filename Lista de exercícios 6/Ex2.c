/******************************************************************************

2. Faça a multiplicação de todos os elementos da matriz acima por 7.

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
        M[0][j] = v1[j] * 3;//Adicionado o * 3, para multiplicar o resultado por 3.
        M[1][j] = v2[j] * 3;
        M[2][j] = v3[j] * 3;
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
