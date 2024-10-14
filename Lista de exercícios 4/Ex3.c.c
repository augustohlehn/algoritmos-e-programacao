/******************************************************************************

Elabore um programa que lê um número de 1 a 9 e mostra a tabuada de multiplicação do número.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero;
    char continuar;//Variavel para resposta final do usuário.
    
    do{
    printf("Digite um número de 1 a 9 que você deseja ver a tabuada: ");
    scanf("%d", &numero);
    
    if(numero < 1 || numero > 9){
        printf("Número inválido.");
        continue;
        }
        
    for(int i = 1; i <=10; i++){
    printf("%d X %d = %d\n", numero, i, numero * i);
    }
    
    printf("Calcular outro número S/N?");
    scanf(" %c", &continuar);
    }
    while (continuar == 's' || continuar == 'S');
    
    return 0;

}
