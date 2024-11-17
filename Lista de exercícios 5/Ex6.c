/******************************************************************************

6. Em um jogo com 5 rodadas e 4 jogadores, cada jogador começa com 0 pontos. Escreva um 
programa que: 
a. Crie um vetor de 4 elementos, onde cada posição do vetor representa a pontuação 
acumulada de um jogador. 
b. A cada rodada, sorteie a pontuação para cada jogador (valores entre 0 e 100). 
c. Atualize o vetor de pontuação acumulada com a soma da pontuação de cada rodada. 
d. Ao final de cada rodada, verifique se algum jogador fez mais de 80 pontos e exiba uma 
mensagem de "Rodada de Destaque" para esse jogador. 
e. Ao final das 5 rodadas, exiba a pontuação total de cada jogador. 
f. 
Informe qual jogador venceu, ou se houve empate (o jogador com a maior pontuação). 

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int pontuacoes[4] = {0, 0, 0, 0}; // Pontuação acumulada de cada jogador
    int rodada[4]; // Pontuação da rodada para cada jogador
    int vencedor = 0, empate = 0; // Variáveis para rastrear o vencedor e empate
    int maiorPontuacao = 0; // Maior pontuação no final do jogo

    srand(time(NULL));

    // Loop pelas 5 rodadas
    for (int r = 1; r <= 5; r++) {
        printf("\n--- Rodada %d ---\n", r);

        // Sorteia a pontuação para cada jogador
        for (int i = 0; i < 4; i++) {
            rodada[i] = rand() % 101; // Pontuação aleatória entre 0 e 100
            pontuacoes[i] += rodada[i]; // Atualiza a pontuação acumulada
            printf("Jogador %d marcou %d pontos (Total: %d).\n", i + 1, rodada[i], pontuacoes[i]);

            // Verifica "Rodada de Destaque"
            if (rodada[i] > 80) {
                printf("Jogador %d teve uma Rodada de Destaque!\n", i + 1);
            }
        }
    }

    // Exibe a pontuação final de cada jogador
    printf("\n--- Pontuação Final ---\n");
    for (int i = 0; i < 4; i++) {
        printf("Jogador %d: %d pontos\n", i + 1, pontuacoes[i]);

        // Determina o vencedor
        if (pontuacoes[i] > maiorPontuacao) {
            maiorPontuacao = pontuacoes[i];
            vencedor = i + 1;
            empate = 0; // Reseta o estado de empate
        } else if (pontuacoes[i] == maiorPontuacao) {
            empate = 1; // Marca que houve empate
        }
    }

    // Determina o resultado final
    if (empate) {
        printf("\nHouve um empate entre os jogadores com %d pontos!\n", maiorPontuacao);
    } else {
        printf("\nO vencedor é o Jogador %d com %d pontos!\n", vencedor, maiorPontuacao);
    }

    return 0;
}

