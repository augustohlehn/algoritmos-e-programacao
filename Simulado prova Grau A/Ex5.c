/******************************************************************************

5. Escreva um programa que sorteie um número entre 1 e 100. O usuário deve tentar adivinhar o 
número sorteado, e o programa deve informar se o palpite está muito alto, muito baixo ou 
correto. O programa termina quando o usuário acerta o número.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>  // Inclui a biblioteca para usar time()

int main()
{
    srand(time(0));//Garante que toda vez que for executado o programa, gere um número diferente
    int numero = rand() %100 +1;
    int alternativa;
    
    printf("Foi soretado um número entre 1 e 100, tente adivinhar qual é o número.\n");
    
    do{
    
    printf("Qual número você chuta: ");
    scanf("%d", &alternativa);
    
    if (alternativa < numero){
        printf("Seu número está abaixo do número sorteado, tente novamente.\n");
    } else if (alternativa > numero){
    printf("Seu número está acima do número sorteado, tente novamente.\n");
    }
}
while(alternativa != numero);

printf("Você acertou! O número sorteado foi %d.", numero);

    return 0;
}