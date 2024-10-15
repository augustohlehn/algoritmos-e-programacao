/******************************************************************************

4. Em um sistema de controle para uma casa inteligente, você deseja automatizar a irrigação de 
um jardim. O programa deve ler a umidade do solo (em porcentagem) medida por 5 sensores. 
Se a umidade estiver abaixo de 30% em algum sensor, o programa deve ativar a irrigação e 
exibir uma mensagem indicando o sensor que disparou a ação.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int sensores;
    float umidade;
    
    for(int i = 1; i <= 5; i++){
        printf("Digite a umidade do solo no sensor %d. ", i);
        scanf("%f", &umidade);
        
        if(umidade < 30){
            printf("Umidade abaixo de 30%%, irrigaçao ativada no sensor %d.\n",i);
        }
        
    }

    return 0;
}
