/******************************************************************************

Durante uma liquidação uma loja resolveu dar quinze por cento de desconto nas compras 
feitas pelos clientes. Faça um programa que leia o valor da compra e escreva o valor da 
compra com o desconto.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float compra;
    float desconto;
    
    printf("Digite o valor da compra: ");
    scanf("%f", &compra);
    
    desconto = compra * 0.85;//Aqui foi preciso converter 15% para multiplicar por 0.85, já que % não existe para isso.
    
    printf("Sua compra com 15 porcento de desconto deu: %2.f", desconto);
    

    return 0;
}
