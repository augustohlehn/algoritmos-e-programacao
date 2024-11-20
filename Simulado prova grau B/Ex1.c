/******************************************************************************

1. Implementando o próprio “shuffle” em arrays: faça um algoritmo que receba um array e embaralhe os seus 
elementos da seguinte maneira: por n vezes (n é o tamanho do array) ele deve sortear dois índices, i e j, e trocá-los 
de lugar.  
Exemplo: 
Array inicial, de tamanho 5:  
a b c d e 
Suponha que, em uma das 5 vezes, sejam sorteados os índices i = 0 e j = 3. Então, deverão ser trocados de lugar 
os valores da primeira e quarta posição do array. O resultado após esta troca, será: 
d b c a e

*******************************************************************************/
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
 
void shuffle(char array[], int n) { 
    for (int k = 0; k < n; k++) { 
        int i = rand() % n;  // Sorteia um índice i 
        int j = rand() % n;  // Sorteia um índice j 
 
        // Troca os elementos nas posições i e j 
        char temp = array[i]; 
        array[i] = array[j]; 
        array[j] = temp; 
    } 
} 
 
int main() { 
    srand(time(NULL)); // Inicializa o gerador de números aleatórios 
 
    char array[] = {'a', 'b', 'c', 'd', 'e'}; 
    int n = sizeof(array) / sizeof(array[0]); 
 
    printf("Array inicial: "); 
    for (int i = 0; i < n; i++) { 
 printf("%c ", array[i]); 
    } 
    printf("\n"); 
 
    // Chama a função para embaralhar o array 
    shuffle(array, n); 
 
    printf("Array embaralhado: "); 
    for (int i = 0; i < n; i++) { 
        printf("%c ", array[i]); 
    } 
    printf("\n"); 
 
    return 0; 
} 
