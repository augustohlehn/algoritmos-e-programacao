/******************************************************************************

6. Gere uma matriz 10x3 que contenha valores de notas de 10 alunos (cada linha contém a 
informação das notas de um aluno). Para isso, sorteie valores entre 0.0 e 10.0 na primeira e 
segunda colunas, e na terceira, cal

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    float matriz[10][3]; 

    srand(time(NULL));

    printf("Aluno   Grau A   Grau B   Grau Parcial\n");
    printf("---------------------------------------\n");
    for (int i = 0; i < 10; i++) {
        // Gerar valores entre 0.0 e 10.0 (Converti para evitar problemas)
        matriz[i][0] = (rand() % 1001) / 100.0; // Grau A (0.0 a 10.0)
        matriz[i][1] = (rand() % 1001) / 100.0; // Grau B (0.0 a 10.0)

        // Cálculo do Grau Parcial: (Grau A + 2 * Grau B) / 3
        matriz[i][2] = (matriz[i][0] + 2 * matriz[i][1]) / 3.0;

        // Exibir os valores sorteados e cálcuos
        printf("%5d   %6.1f   %6.1f   %11.1f\n", i + 1, matriz[i][0], matriz[i][1], matriz[i][2]);
    }

    return 0;
}