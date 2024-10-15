/******************************************************************************

8. Você está desenvolvendo um programa para monitoramento de uma área de floresta. A cada 
dia, são feitos registros da quantidade de chuva (em mm). Escreva um programa que leia os 
registros diários de chuva para uma semana e informe: 
a. O total de chuva acumulada. 
b. O dia com maior quantidade de chuva. 
c. Se em algum dia a chuva foi menor que 5 mm, exiba uma mensagem de alerta sobre 
possível seca.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float chuva, total, maiorqtd;
    int diamaiorqtd;
    
    for(int i =1; i <= 7; i++){
        printf("Digite a quantidade de chuva em mm do dia %d: ", i);
        scanf("%f", &chuva);
        
        total += chuva;
        
        if (chuva > maiorqtd){
            diamaiorqtd = i;
            maiorqtd = chuva;
        }
        if(chuva < 5){
            printf("ALERTA SOBRE POSSÍVEL SECA!!\n");
        }
    }
    printf("\n");
    printf("O total de chuva foi %.2f mm.\n", total);
    printf("O dia com maior quantidade de chuva foi o %d com %.2f.\n", diamaiorqtd, maiorqtd);
    
    return 0;
}
