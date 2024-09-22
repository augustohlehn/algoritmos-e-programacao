#include<stdio.h>

// Um restaurante de buffet a quilo cobra R$ 40,00 por quilo. Escreva um programa que leia o 
//peso do prato do cliente e calcule o valor a ser pago.
int main (){

    float quilo, prato;
    float valor = 40;

    printf("Quantos quilos o prato pesa? ");
    scanf("%f",&quilo);

    prato = quilo * valor;

    printf("O preço do buffet é %f por quilo, com isso o valor do seu prato deu %f", valor,prato);

    return 0;
}