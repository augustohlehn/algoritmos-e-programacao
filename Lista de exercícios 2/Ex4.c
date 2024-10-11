// Faça um algoritmo que permita ao aluno calcular a sua média final na Unisinos. Leia a nota do 
//grau A e do grau B e escreva o resultado na tela. Lembrando que o Grau A vale 1/3 e o Grau 
//B 2/3.
#include <stdio.h>

int main (){

float GrauA;
float GrauB;

printf("Digite sua nota do Grau A: ");
scanf("%f", &GrauA);

printf("Digite sua nota do Grau B: ");
scanf("%f", &GrauB);

float resultado = (GrauA + (2*GrauB))/3;

printf("Seu resultado é %f", resultado);

return 0;
}