/*Implementar um programa que calcula o desconto previdenciário de um funcionário. O programa 
deve, dado um salário retornar o valor do desconto proporcional ao mesmo. O cálculo de desconto 
segue a regra: o desconto deve 11% do valor do salário. Entretanto, o valor máximo de desconto é 
318,20. Sendo assim, ou o método retorna 11% sobre o salário ou 318,20.**/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main (){

float salario,desconto;

printf("Digite seu salário: ");
scanf("%f", &salario);

desconto = salario * 0.11;

if(desconto >= 318.20){
    printf("Você chegou no desconto máximo de 318,20 reais.\n");
}

else{
    printf("O desconto da previdência é 11%%, sobre o seu salário o desconto fica %2.f", desconto);
}
return 0;
}
