/**Um criador de pássaros deseja saber a quantidade de ração diária necessária para alimentar 
seus pássaros. Cada pássaro consome 30 gramas de ração por dia. Escreva um programa que 
leia o número de pássaros que o criador possui e calcule a quantidade total de ração 
necessária por dia.**/
#include <stdio.h>

int main()
{
    int consumo;
    int passaro;
    
    printf("Digite quantos pássaros você tem: ");
    scanf("%d", &passaro);
   
   consumo = 30 * passaro;
   
   printf("Você terá um consumo de %d gramas por dia.",consumo);

    return 0;
}