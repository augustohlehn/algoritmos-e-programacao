/******************************************************************************

O jogo "Whack-a-Mole" é um jogo divertido onde toupeiras aparecem aleatoriamente em diferentes buracos, e 
o objetivo do jogador é acertar as toupeiras que surgem. Neste exercício, vamos simular uma versão simplificada do 
surgimento das toupeiras do jogo utilizando uma matriz 4x4. A cada ciclo, quatro toupeiras aparecerão em posições 
aleatórias dentro da matriz, representadas pelo símbolo 'T', enquanto os buracos restantes estarão vazios, 
representados pelo símbolo '-'. Sua tarefa é gerar e exibir três gerações diferentes dessas matrizes.  
 Algumas instruções, para cada geração: 
a) Crie uma função gerarToupeiras(), que retorne a matriz 4x4 preenchida 
b) Dentro da função, inicializar uma matriz 4x4 preenchida com o símbolo '-' para representar buracos vazios. 
c) Sorteie os dois índices, i e j, um para a linha e outro para a coluna da matriz. Esta será a posição para uma 
nova toupeira ('T'), caso já não esteja ocupada. Isso quer dizer, que para cada uma das 4 toupeiras, é 
necessário sortear estes dois índices enquanto não encontrar na matriz um buraco vazio ('-') no local 
sorteado. 
d) Para cada chamada de gerarToupeira(), imprima a matriz que retornou 
  Exemplo de saída: 
Geração 1: -  T  -  - 
T  -  -  - -  -  T  - -  T  -  - 
Geração 2: -  -  T  - -  -  -  T 
T  -  T  - -  -  -  - 
Geração 3: 
T  -  -  - -  T  -  - -  T  -  - -  -  T  -

*******************************************************************************/
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
 
#define TAMANHO 4 
#define TOUPEIRAS 4 
// Função que gera uma matriz 4x4 com toupeiras em posições aleatórias 
void gerarToupeiras(char matriz[TAMANHO][TAMANHO]) { 
    // Inicializa a matriz com '-' 
    for (int i = 0; i < TAMANHO; i++) { 
        for (int j = 0; j < TAMANHO; j++) { 
            matriz[i][j] = '-'; 
        } 
    } 
 
    int toupeirasColocadas = 0; 
    while (toupeirasColocadas < TOUPEIRAS) { 
        int i = rand() % TAMANHO; // Sorteia uma linha 
        int j = rand() % TAMANHO; // Sorteia uma coluna 
 
        // Verifica se a posição está vazia 
        if (matriz[i][j] == '-') { 
            matriz[i][j] = 'T';  // Coloca uma toupeira 
            toupeirasColocadas++; // Incrementa o contador 
        } 
    } 
} 
 
// Função que imprime a matriz 4x4 
void imprimirMatriz(char matriz[TAMANHO][TAMANHO]) { 
    for (int i = 0; i < TAMANHO; i++) { 
        for (int j = 0; j < TAMANHO; j++) { 
            printf("%c ", matriz[i][j]); 
        } 
        printf("\n"); 
    } 
} 
 
int main() { 
    srand(time(NULL)); // Inicializa o gerador de números aleatórios 
 
    char matriz[TAMANHO][TAMANHO]; 
 
    // Gera e exibe três gerações de matrizes 
    for (int gen = 1; gen <= 3; gen++) { 
        printf("Geração %d:\n", gen); 
        gerarToupeiras(matriz); 
        imprimirMatriz(matriz); 
        printf("\n"); 
    } 
        return 0; 
} 
