#include<stdio.h>

// Faça um algoritmo que leia uma quantidade de tempo em minutos e escreva o tempo 
//equivalente em segundos na tela.

int main () 
{
    int minutos, segundos;

    printf("Digite a quantidade de minutos: ");
    
    scanf("%d", &minutos); //Leitura da quantidade de minutos
    
    segundos = minutos * 60; //Transforma a quantidade de minutos para segundos.
    
    printf("%d minutos tem %d segundos", minutos, segundos); //Escreve o resultado na tela.

    return 0;
}