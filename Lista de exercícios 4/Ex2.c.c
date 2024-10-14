/******************************************************************************

2. Implemente um programa que sorteia um número de 1 a 10 e dá ao usuário 3 tentativas de acertá-lo. 
A cada tentativa errada, o programa informa se o número a adivinhar está abaixo ou acima. 

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numero, opcao;
    int tentativas = 3;
    
    printf("Sorteando um número de 1 a 10.\n");
    srand(time(0));
    numero = (rand() % 10) + 1;
    
    printf("Adivinhe qual o número que foi sorteado, você tem 3 tentativas.\n");
    
    for(int i = 0; i < tentativas; i++){
    printf("Digite o número: \n");
    scanf("%d", &opcao);
    
    if(opcao == numero){
        printf("Você acertou, o número sorteado foi %d.\n", numero);
        break;
    }
    
    else if(opcao > numero){
        printf("Você errou, o número está abaixo do sorteado.\n");
    }
    else{
        printf("Você errou, o número está acima do sorteado\n");
    }
    
    if (i == tentativas -1){
        printf("Você chegou no limite de tentativas, o número sorteado era %d", numero);
    }
    }

    return 0;
}
