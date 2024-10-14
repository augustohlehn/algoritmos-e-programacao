/******************************************************************************

Para x alunos da Unisinos, ler as notas do grau A e grau B e calcular a média considerando o sistema 
de notas da Unisinos. Se o aluno estiver aprovado escrever “APROVADO”. Caso contrário, ler o grau C 
e pedir qual o grau que deve ser substituído (A ou B, maiúsculo ou minúsculo), recalcular a média. Se 
estiver aprovado, escrever “APROVADO”, caso contrário escrever “REPROVADO”. No final escrever a 
média geral dos alunos. 

*******************************************************************************/
#include <stdio.h>

int main() {
    int numAlunos;
    float grauA, grauB, grauC, media, somaMedias = 0;

    printf("Digite o número de alunos: ");
    scanf("%d", &numAlunos);

    for (int i = 0; i < numAlunos; i++) {
        char substituir;

        printf("\n---- Aluno %d ----\n", i + 1); // Indica qual aluno está sendo processado

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

        somaMedias += media; // Adiciona a média do aluno à soma total
    }

    // Calcula a média geral dos alunos
    float mediaGeral = somaMedias / numAlunos;
    printf("\nA média geral dos alunos é: %.2f\n", mediaGeral);

    return 0;
}