/******************************************************************************

5. Uma empresa está monitorando o consumo de água em uma residência ao longo de um mês (30 
dias). Para agilizar o preenchimento dos dados, faça o sorteio de valores entre 100 e 500 litros por 
dia. Escreva um programa que: 
a. Sorteie e armazene o consumo diário de água (em litros) em um vetor. 
b. Calcule o consumo total do mês. 
c. Calcule a média de consumo diário.
d. Imprima o dia em que houve o maior consumo e o menor consumo de água. 

*******************************************************************************/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{   
    int dias[30];
    int consumos[30];
    int consumo, total = 0;
    float media;
    int maiorcons, menorcons;
    int diamaior, diamenor;
    
    srand(time(NULL));
    
    // Inicializa os dias
    for(int i = 0; i < 30; i++){
        dias[i] = i + 1; // Armazena os dias no array
    }
    
    // Gera os consumos diários e calcula o total
    for (int i = 0; i < 30; i++){
        consumo = rand() % 500 + 100; // Consumo entre 100 e 599 litros
        consumos[i] = consumo;       // Armazena o consumo no array
        printf("Consumo do dia %d: %d litros.\n", dias[i], consumo);
        total += consumo;
    }
    
    // Inicializa os valores de maior e menor consumo com o primeiro dia
    maiorcons = consumos[0];
    menorcons = consumos[0];
    diamaior = dias[0];
    diamenor = dias[0];
    
    // Encontra o maior e o menor consumo
    for (int i = 1; i < 30; i++) {
        if (consumos[i] > maiorcons) {
            maiorcons = consumos[i];
            diamaior = dias[i];
        }
        if (consumos[i] < menorcons) {
            menorcons = consumos[i];
            diamenor = dias[i];
        }
    }
    
    // Calcula a média
    media = total / 30.0;
    
    // Exibe os resultados
    printf("\nO total de consumo do mês foi %d litros.\n", total);
    printf("A média de consumo diário foi %.2f litros.\n", media);
    printf("O maior consumo foi no dia %d: %d litros.\n", diamaior, maiorcons);
    printf("O menor consumo foi no dia %d: %d litros.\n", diamenor, menorcons);

    return 0;
}
