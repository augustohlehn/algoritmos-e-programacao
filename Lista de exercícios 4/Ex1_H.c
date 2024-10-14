/******************************************************************************

Sortear 20 números inteiros entre -10 e 10 e imprimi-los acompanhados da mensagem 
“POSITIVO”, “NEGATIVO”, ou “NULO”, conforme o caso. No final, imprimir a quantidade de 
números positivos e negativos lidos. 

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numero,negativo,positivo;
    
    printf("Sorteando 20 números aleatórios entre -10 e 10.\n");
    
    for(int i = 0; i <20; i++){
        
        numero = (rand() % 21) -10;
        
        printf("Número: %d ", numero);
        
        if(numero > 0){
           printf("POSITIVO\n");
           positivo++; 
        }
        
        else if(numero < 0){
            printf("NEGATIVO\n");
            negativo++;
        }
        
        else{
            printf("NULO\n");
        }
    }
    
    printf("Quantidade de números negativos: %d\n", negativo);
    printf("Quantidade de números positivos: %d\n", positivo);

    return 0;
}
