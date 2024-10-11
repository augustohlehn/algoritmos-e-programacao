//A loja de eletrônicos TechMundo vende uma certa quantidade de smartphones e uma 
//quantidade de tablets a cada dia. Cada smartphone custa R$ 1000,00 e cada tablet custa R$ 
//1500,00. Ao final do dia, o dono quer saber quanto arrecadou com a venda dos smartphones 
//e dos tablets. Escreva um programa que leia o número de smartphones e tablets vendidos em 
//um dia e calcule o total arrecadado.

#include <stdio.h>

int main (){

    int smart,tablet,custo,vlr_tablet,vlr_smart;

    printf("Quantos smartphones? ");
    scanf("%d", &smart);
    vlr_smart = smart * 1000;

    printf("Quantos tablets? ");
    scanf("%d", &tablet);
    vlr_tablet = tablet * 1500;

    custo = vlr_tablet + vlr_smart;
    printf("Sua compra deu %d.", custo);


    return 0;
}