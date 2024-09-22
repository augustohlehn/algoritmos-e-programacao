#include<stdio.h>

//Um turista deseja comprar dólares em uma casa de câmbio. Escreva um programa que leia a 
//cotação do dólar para real, a quantidade de dólares que o turista deseja comprar, e calcule o 
//valor total em reais que ele precisará pagar.

int main () {

float real, dolar, cotacao;//%f 

printf("Digite a cotação do dolar: ");
scanf ("%f", &cotacao);

printf("Quantos dólares você deseja comprar? ");
scanf("%f",&dolar);

real = dolar * cotacao;
printf("Para comprar %f dólares, vai custar %f reais.",dolar,real);

    return 0;
}