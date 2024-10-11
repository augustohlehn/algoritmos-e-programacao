/******************************************************************************
 Escreva um programa que leia dois números e efetue uma divisão, mas somente se o divisor for 
diferente de zero; quando isto ocorrer, é mostrada uma mensagem de erro apropriada.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float numero1,numero2, divisao;
    
    printf("Digite um número: ");
    scanf("%f", &numero1);
    
    printf("Digite um número para dividir com o primeiro: ");
    scanf("%f", &numero2);
    
    divisao = numero1/numero2;
    
    if (numero2 != 0){
        printf("O resultado da divisão é %1.f", divisao);
    }
    
    else{
        printf("ERRO, número 0 não permitido como divisor.");
    }

    return 0;
}