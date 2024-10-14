/******************************************************************************

Crie um algoritmo que sorteie 5 valores entre 0 e 100 e depois imprima o menor, o maior e a média 
dos valores sorteados. 

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>  // Para a função time()

int main()
{
    int valor, maior, menor, soma = 0;  // Inicializa soma com 0
    float media;
     
    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Sorteia o primeiro número
    valor = rand() % 100;
    printf("Número 1 sorteado: %d\n", valor);
    
    // Inicializa maior e menor com o primeiro valor sorteado
    maior = menor = valor;
    soma += valor;  // Adiciona o primeiro valor à soma

    // Sorteia os outros 4 números
    for (int i = 2; i <= 5; i++) {
        valor = rand() % 100;
        printf("Número %d sorteado: %d\n", i, valor);
        
        soma += valor;  // Acumula a soma dos valores

        // Verifica se o valor atual é o maior ou menor
        if (valor > maior) {
            maior = valor;
        }
        if (valor < menor) {
            menor = valor;
        }
    }

    // Calcula a média
    media = soma / 5.0;

    // Imprime os resultados
    printf("\nMaior valor sorteado: %d\n", maior);
    printf("Menor valor sorteado: %d\n", menor);
    printf("Média dos valores: %.2f\n", media);

    return 0;
}