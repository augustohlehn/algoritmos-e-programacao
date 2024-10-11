/******************************************************************************

 O lojista gostou tanto do seu programa anterior que encomendou outro. Dessa vez ele quer 
que você calcule quanto cada cliente gastou na loja apenas informando o número de 
camisetas, calças e cintos comprados. As camisetas custam R$ 25,00, as calças cem reais e os 
cintos 40 reais. Some o valor da compra e ao final dê um desconto de 10 por cento sobre o 
total. Exiba na tela o valor do desconto e o valor da compra.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int camiseta,calca,cinto;
    int vlr_camiseta = 25;
    int vlr_calca = 100;
    int vlr_cinto = 40;
    int total;
    
    printf("Quantas camisetas: ");
    scanf("%d", &camiseta);
    vlr_camiseta * camiseta;
    
    printf("Quantas calças: ");
    scanf("%d", &calca);
    vlr_calca * calca;
    
    printf("Quantos cintos: ");
    scanf("%d", &cinto);
    vlr_cinto * cinto;
    
    printf("O valor total das camisetas é %d, das calças %d e dos cintos %d.\n ", vlr_camiseta,vlr_calca,vlr_cinto);
    total = (vlr_cinto + vlr_calca + vlr_camiseta)*0.90;//Multiplicar por 0.90 equivale a descontar 10%.
    
    printf("O valor total da sua compra com desconto de dez porcento é %d.", total);
    
    
    return 0;
}
