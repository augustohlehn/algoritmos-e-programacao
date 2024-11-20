/******************************************************************************

3. Implemente um programa que, dado um array de 20 inteiros preenchidos com valores entre 0 e 4, faça a 
contagem de quantos valores de cada um dos números possíveis este vetor contem. 
Exemplo, array: 
0 3 2 2 4 4 1 0 0 0 4 4 2 3 1 2 0 2 1 3 
Retornaria a seguinte contagem: 
Quantidade de valores 0: 5 
Quantidade de valores 1: 3 
Quantidade de valores 2: 5 
Quantidade de valores 3: 3 
Quantidade de valores 4: 4

*******************************************************************************/
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
 
#define TAMANHO 20 
#define VALORES 5 
 
int main() { 
    srand(time(0)); 
 
    int array[TAMANHO]; 
    int contagem[VALORES] = {0, 0, 0, 0, 0};  // Inicializa um array de contagem com zeros 
 
    // Inicializa o array com valores de 0 a 4 
    for (int i=0; i < TAMANHO; i++) { 
        array[i] = rand() % 5; 
    } 
 
    // Conta a quantidade de cada valor no array 
    for (int i = 0; i < TAMANHO; i++) { 
        contagem[array[i]]++; 
    } 
 
    // Exibe o array gerado 
    for (int i = 0; i < TAMANHO; i++) { 
        printf("%d ",array[i]); 
    }
      printf("\n"); 
    // Exibe o resultado da contagem 
    for (int i = 0; i < VALORES; i++) { 
        printf("Quantidade de valores %d: %d\n", i, contagem[i]); 
    } 
 
    return 0; 
} 
