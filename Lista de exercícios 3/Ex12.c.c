/******************************************************************************

 A confederação brasileira de natação irá promover eliminatórias para o próximo mundial. Fazer um 
algoritmo que receba a idade de um nadador e imprima a sua categoria segundo a tabela a seguir:  

*******************************************************************************/
#include <stdio.h>

int main()
{
    int idade;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    if (idade < 5){
        printf("Você não tem idade minima para participar da competição, a idade mínima é 5.");
    }
    else if (idade <= 5){
        printf("Você entra na categoria: Infantil A.");
    }
    else if (idade <=10){
    printf("Você entra na categoria: Infantil B.");
    } 
    else if (idade <=13 ){
        printf("Você entra na categoria: Juvenil A.");
    }    
    else if (idade <= 17 ){
        printf("Você entra na categoria: Juvenil B.");
    }
    else{  
        printf("Você entra na categoria: Sênior.");
    }
        
    return 0;
}