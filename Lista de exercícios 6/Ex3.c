/******************************************************************************

Matriz identidade, na matemática, também conhecida como matriz 𝐼 ou matriz unitária, é uma 
matriz quadrada em que a diagonal principal contém apenas elementos 1 (um) e todos os outros 
elementos são 0 (zero). Crie uma função que gere uma matriz identidade 4x4.

*******************************************************************************/
#include <stdio.h>

void geraMatrizIdentidade(int tamanho) {
    // Declara uma matriz 4x4
    int matriz[tamanho][tamanho];

    // Preenche a matriz identidade
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            if (i == j) {
                matriz[i][j] = 1;  // Coloca 1 na diagonal principal
            } else {
                matriz[i][j] = 0;  // Coloca 0 fora da diagonal
            }
        }
    }

    // Imprime a matriz
    printf("Matriz Identidade %dx%d:\n", tamanho, tamanho);
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tamanho = 6;  // Definindo o tamanho da matriz como 4x4
    geraMatrizIdentidade(tamanho);  // Chama a função para gerar a matriz identidade
    return 0;
}