/******************************************************************************
Um fisioterapeuta está monitorando o progresso de um paciente que realiza exercícios 
diariamente. A cada dia, o paciente registra a quantidade de tempo que conseguiu realizar o 
exercício (em minutos). Escreva um programa que leia o tempo de exercício realizado por 7 
dias consecutivos e calcule:
a. O total de tempo exercitado na semana.
b. A média de tempo diário.
c. O dia em que o paciente realizou o maior tempo de exercício.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int minutos, total = 0, maiortempo = 0, diamaiortempo = 0;
    float media;
    
    for(int i = 1; i <= 7; i++){
        printf("Digite o tempo de exercício do dia %d: ",i);
        scanf("%d", &minutos);
        
        total += minutos;
        
        media = total/7.0;//Usado 7.0 para garantir o float.
        
        // Verifica se o minutos do dia atual é maior que maiortempo
        if (minutos > maiortempo) {
            maiortempo = minutos;           // Atualiza o maior tempo
            diamaiortempo = i;              // Armazena o dia correspondente
        }
    }
    
    printf("O total de minutos exercitado na semana foi: %d\n", total);
    printf("A média de exercício diário foi: %.1f minutos.\n", media);
    printf("O dia de maior exercíco foi o %d, com %d minutos.", diamaiortempo,maiortempo);

    return 0;
}
