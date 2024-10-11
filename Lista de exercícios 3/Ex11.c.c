/*Faça um programa que leia a nota do Grau A e do Grau B do aluno e calcule a média final conforme 
as regras da Unisinos. Imprima a média final na tela e diga se o aluno passou por média ou se ficou 
em recuperação (grau C). Se o aluno ficou em recuperação, pergunte se ele quer substituir o Grau 
A ou o Grau B (ele deve digitar ‘a’ ou ‘b’). Leia a nota do Grau C, recalcule a média de acordo com o 
grau substituído e imprima na tela o resultado, informando se ele foi aprovado ou reprovado.
*/

#include <stdio.h>

int main() {
    
    float grauA, grauB, grauC, media;
    char substituir;

    
    printf("Digite a nota do Grau A: ");
    scanf("%f", &grauA);

    printf("Digite a nota do Grau B: ");
    scanf("%f", &grauB);

    // Cálculo da média
    media = (grauA * 1 + grauB * 2) / 3;
    printf("Sua média final é: %.2f\n", media);

    
    if (media >= 6.0) {
        printf("Parabéns, você foi aprovado!\n");
    } else {
        printf("Você ficou em recuperação (Grau C).\n");

       
        printf("Deseja substituir o Grau A ou o Grau B? (Digite 'a' ou 'b'): ");
        scanf(" %c", &substituir); 

        
        printf("Digite a nota do Grau C: ");
        scanf("%f", &grauC);

        
        if (substituir == 'a' || substituir == 'A') {
            media = (grauC + grauB * 2) / 3;
        } else if (substituir == 'b' || substituir == 'B') {
            media = (grauA + grauC * 2) / 3;
        } else {
            printf("Opção inválida.\n");
            return 1;
        }

        
        printf("Sua nova média é: %.2f\n", media);
        if (media >= 6.0) {
            printf("Parabéns, você foi aprovado após a recuperação!\n");
        } else {
            printf("Infelizmente, você foi reprovado.\n");
        }
    }

    return 0;
}
