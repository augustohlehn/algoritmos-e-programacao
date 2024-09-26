/******************************************************************************

 Um usuário deseja converter a temperatura de Celsius para Fahrenheit. Escreva um programa 
que leia a temperatura em Celsius e exiba a temperatura equivalente em Fahrenheit.

*******************************************************************************/
#include <stdio.h>

int main()
{
   float graus;
   float fahrenheit;
   
   printf("Digite a quantidade em graus que você deseja converter para fahrenheit:");
   scanf("%f", &graus);
   
   fahrenheit = (graus * 1.8)+32;//Converte graus para fahrenheit.
   
   printf("Você tem %.1f em fahrenheit!", fahrenheit);//O %1.f, diz que somente vai exibir uma casa depois da vírgula.
    return 0;
}
