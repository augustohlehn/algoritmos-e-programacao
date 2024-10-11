#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h> // para usar o tipo booleano (bool)

void exibirTabuleiro(int posHamster1, int posHamster2) {
    printf("H1: ");
    for (int i = 0; i < posHamster1; i++) {
        printf("* ");
    }
    printf("\n");

    printf("H2: ");
    for (int i = 0; i < posHamster2; i++) {
        printf("* ");
    }
    printf("\n");
}

int main() {
    srand(time(0));  // Inicia o gerador de números aleatórios
    int posHamster1 = 0, posHamster2 = 0;
    bool acabou = false;  // No início, a corrida ainda não terminou

    while (!acabou) {  // Enquanto a corrida não acabar
        // Limpa a tela para dar a impressão de atualização do tabuleiro
        system("clear");
        
        // Movimentação do Hamster 1
        int n1 = rand() % 5 + 1;  // Sorteia um valor entre 1 e 5 para o hamster 1
        if (n1 == 1) {
            posHamster1++;  // Avança 1 posição
        } else if (n1 == 2) {
            posHamster1 += 2;  // Avança 2 posições
        } else if (n1 == 3) {
            // Não se move
        } else if (n1 == 4) {
            posHamster1--;  // Retrocede 1 posição
        } else if (n1 == 5) {
            posHamster1 -= 2;  // Retrocede 2 posições
        }

        // Movimentação do Hamster 2
        int n2 = rand() % 5 + 1;  // Sorteia um valor entre 1 e 5 para o hamster 2
        if (n2 == 1) {
            posHamster2++;  // Avança 1 posição
        } else if (n2 == 2) {
            posHamster2 += 2;  // Avança 2 posições
        } else if (n2 == 3) {
            // Não se move
        } else if (n2 == 4) {
            posHamster2--;  // Retrocede 1 posição
        } else if (n2 == 5) {
            posHamster2 -= 2;  // Retrocede 2 posições
        }

        // Teste para evitar posições negativas
        if (posHamster1 < 0) {
            posHamster1 = 0;
        }
        if (posHamster2 < 0) {
            posHamster2 = 0;
        }

        // Exibe as posições dos hamsters
        exibirTabuleiro(posHamster1, posHamster2);

        // Testa se algum hamster chegou ou ultrapassou a posição 12
        if (posHamster1 >= 12 && posHamster2 >= 12) {
            printf("Empate! Ambos os hamsters chegaram ao fim ao mesmo tempo!\n");
            acabou = true;
        } else if (posHamster1 >= 12) {
            printf("Hamster 1 venceu a corrida!\n");
            acabou = true;
        } else if (posHamster2 >= 12) {
            printf("Hamster 2 venceu a corrida!\n");
            acabou = true;
        }

        // Pausa entre os turnos para dar a sensação de tempo real
        printf("Pressione Enter para o próximo turno...\n");
        getchar();
    }

    return 0;
}