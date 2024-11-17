/******************************************************************************

4. Uma pessoa está monitorando quantos passos ela dá por dia em uma semana. Escreva um 
programa que: 
a. Leia e armazene o número de passos dados em cada um dos 7 dias da semana. 
b. Calcule o total de passos dados na semana. 
c. Calcule a média diária de passos. 
d. Verifique se a pessoa conseguiu atingir a meta de 10.000 passos em algum dos dias. Se sim, 
informe quais dias a meta foi alcançada. 
*******************************************************************************/
#include <stdio.h>

int main()
{   
    int passos[7];
    int totalpassos = 0;
    float mediapassos;
    int meta = 10000;
    
    for(int i =0; i < 7; i++)//<7 pois o Array vai de 0 a 6.
    {
    printf("Digite o número de passos do dia %d:\n", i + 1);//Utiliza-se o +1, pois o array começa em 0, assim garantimos que seja 7.
    scanf("%d", &passos[i]);
    
    totalpassos += passos[i];
    mediapassos = totalpassos/7.0;
    }
    
    printf("Números de passos de cada dia:");
    for(int i =0; i < 7; i++){
        printf("Passos do dia %d: %d\n", i + 1, passos[i]);
    }
    
    printf("O total de passos foi: %d\n", totalpassos);
    printf("A media de passos foi: %.1f\n", mediapassos);
    
    printf("\nDias em que a meta de %d passos foi alcançada:\n", meta);
    int atingiu_meta = 0; // Flag para verificar se algum dia atingiu a meta
    for (int i = 0; i < 7; i++) {
        if (passos[i] >= meta) {
            printf("Dia %d\n", i + 1);
            atingiu_meta = 1; // Marca que pelo menos um dia atingiu a meta
        }
    }

    // Caso nenhum dia tenha atingido a meta
    if (!atingiu_meta) {
        printf("Nenhum dia atingiu a meta de %d passos.\n", meta);
    }
    
    return 0;
}
