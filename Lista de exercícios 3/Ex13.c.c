/******************************************************************************

Faça um programa que leia a nota do Grau A e do Grau B do aluno e calcule a média final conforme 
as regras da Unisinos. Imprima a média final na tela e diga se o aluno passou por média ou se ficou 
em recuperação (grau C). Se o aluno ficou em recuperação, pergunte se ele quer substituir o Grau 
A ou o Grau B (ele deve digitar ‘a’ ou ‘b’). Leia a nota do Grau C, recalcule a média de acordo com o 
grau substituído e imprima na tela o resultado, informando se ele foi aprovado ou reprovado. 

*******************************************************************************/
#include <stdio.h>

int main()
{
    float grauA, grauB, grauC, media, mediarec;
    char opcao;
    
    printf("Digite a nota do Grau A: ");
    scanf("%f", &grauA);
    
    printf("Digite a nota do Grau B: ");
    scanf("%f", &grauB);
    
    media = (grauA + (2 * grauB)) / 3;
    
    printf("Sua média é %.2f\n", media);
    
    if (media < 6) {
        printf("Você não atingiu média 6, precisa fazer recuperação.\n");
        printf("Escolha a opção do Grau que deseja substituir:\n");
        printf("A - Grau A\n");
        printf("B - Grau B\n");
        
        scanf(" %c", &opcao);
        
        printf("Digite a nota do Grau C: ");
        scanf("%f", &grauC);
        
        // Substitui baseado na opção escolhida
        if (opcao == 'A') {
            mediarec = (grauC + (2 * grauB)) / 3;// Substitui Grau A
            printf("Sua nova média é %2.f\n",mediarec);
            
            if (mediarec >= 6) {
                printf("Você foi aprovado!\n");
            } else {
                printf("Você foi reprovado!\n");
            }
        } else if (opcao == 'B') {
            mediarec = (grauA + (2 * grauC)) / 3;  // Substitui Grau B
            printf("Sua nova média é %2.f\n", mediarec);
            
            if (mediarec >= 6) {
                printf("Você foi aprovado!\n");
            } else {
                printf("Você foi reprovado!\n");
            }
        } else {
            printf("Opção inválida!\n");
        }
    } else {
        printf("Parabéns, você passou na disciplina!\n");
    }

    return 0;
}