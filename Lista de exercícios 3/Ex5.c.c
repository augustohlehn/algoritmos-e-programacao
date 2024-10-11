/******************************************************************************
//Faça um algoritmo para receber um número qualquer do usuário e informar na tela 
se é par ou se é ímpar.

*******************************************************************************/
#include <stdio.h>
int main (){

int n;
printf("Digite um número inteiro: ");
scanf("%d",&n);

int resultado = n % 2;//O % significa resto da divisão, então se eu dividir par com par n sobra resto.
if (resultado == 0){
    printf("%d é par",n);
}
else{
    printf("%d é impar",n);
} 
    return 0;
}
