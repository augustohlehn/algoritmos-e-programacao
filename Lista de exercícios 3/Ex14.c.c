/******************************************************************************

Criar um programa para identificar o valor a ser pago por um plano de saúde dada a idade do 
conveniado considerando que todos pagam R$ 300 e mais um adicional (se tiver dependentes) 
conforme a seguinte tabela: 

*******************************************************************************/
#include <stdio.h>

int main() {
    int idade, dependentes, i = 1;
    float plano = 300, valorTotal = 300, valorAdicional;

    printf("Digite o número de dependentes: ");
    scanf("%d", &dependentes);

    // Vai processar os dependentes e pedir o valor da qtd de dependentes informados
    while (i <= dependentes) {
        printf("Digite a idade do dependente %d: ", i);
        scanf("%d", &idade);

        if (idade < 10) {
            valorAdicional = 100;  
        } else if (idade >= 10 && idade <= 30) {
            valorAdicional = 220;  
        } else if (idade >= 31 && idade <= 60) {
            valorAdicional = 395;  
        } else {
            valorAdicional = 480;  
        }

        valorTotal += valorAdicional;  
        i++;  
    }

    printf("O valor total a ser pago é R$ %.2f\n", valorTotal);

    return 0;
}