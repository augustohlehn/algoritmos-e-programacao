/******************************************************************************

1. Faça um programa que leia números inteiros até que o usuário digite 0. No final, imprima a 
porcentagem de números positivos, negativos, divisíveis por 2, e divisíveis por 5. 

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero, positivo,negativo,total, divi2, divi5;
    int termino;
    
    do{
        printf("Digite um número inteiro (0 para terminar): ");
        scanf("%d", &numero);
        
        if (numero != 0){
            total++;
        }
        
        if(numero >0){
            positivo++;
        }
        
        else if (numero <0){
            negativo++;
        }
        
        if (numero % 2 == 0){
            divi2++;
        }
        
        if(numero % 5 == 0){
            divi5++;
        }

    }
    
    while(numero != 0);
    
    if (total > 0){
        printf("Porcentagem de números positivos: %.2f%%\n", positivo / (float)total *100);
        printf("Porcentagem de números negativos: %.2f%%\n", negativo / (float)total *100);
        printf("Porcentagem de números divisíveis por 2: %.2f%%\n", divi2 /(float)total *100);
        printf("Porcentagem de números divisíveis por 5: %.2f%%\n", divi5 /(float)total *100);
        
    } 
    
    return 0;
}

