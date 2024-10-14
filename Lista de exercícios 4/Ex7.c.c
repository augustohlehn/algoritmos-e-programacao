/******************************************************************************

Descubra, dentre cinco nomes informados pelo usuário, qual o primeiro em ordem alfabética. 

*******************************************************************************/
#include <stdio.h>
#include <string.h>  // Para usar strcmp()

int main()
{
    char nome[5][15];  // 5 nomes, cada um com até 14 caracteres
    char primeiro[15];  // Variável para armazenar o primeiro nome em ordem alfabética

    printf("Digite 5 nomes:\n");

    // Lendo os 5 nomes
    for (int i = 0; i < 5; i++) {  // Loop de 0 a 4 (5 iterações)
        printf("Nome %d: ", i + 1);
        scanf("%14s", nome[i]);  // Armazenando o nome na posição i
    }

    // Inicializando o primeiro nome com o primeiro da lista
    strcpy(primeiro, nome[0]);

    // Comparando os nomes para encontrar o primeiro em ordem alfabética
    for (int i = 1; i < 5; i++) {
        if (strcmp(nome[i], primeiro) < 0) {
            strcpy(primeiro, nome[i]);  // Se o nome atual vier antes, ele passa a ser o "primeiro"
        }
    }

    printf("\nO primeiro nome em ordem alfabética é: %s\n", primeiro);

    return 0;
}