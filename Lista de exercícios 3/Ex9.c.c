/******************************************************************************

Faça um conversor de câmbio de reais/dólar/euro. O usuário deve informar inicialmente a cotação 
de cada moeda em relação ao real. Depois apresente o seguinte menu: 
1) Converter de Real para Euro 
2) Converter de Real para Dólar 
3) Converter de Euro para Dólar 
4) Converter de Euro para Real 
5) Converter de Dólar para Euro 
6) Converter de Dólar para Real 
Leia o valor a ser convertido na moeda de origem e imprima na tela a quantidade na moeda 
destino.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float cdolar, ceuro, vlrorigem, vlrconvertido;
    int opcao;
    
    printf("Digite a cotação do dólar em relação ao real: ");
    scanf("%f", &cdolar);

    printf("Digite a cotação do euro em relação ao real: ");
    scanf("%f", &ceuro);
    
    printf("\nEscolha uma opção de conversão:\n");
    printf("1- Converter de Real para Euro\n");
    printf("2- Converter de Real para Dólar\n");
    printf("3- Converter de Euro para Dólar\n");
    printf("4- Converter de Euro para Real\n ");
    printf("5- Converter de Dólar para Euro\n");
    printf("6- Converter de Dólar para Real\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);
    
    switch(opcao){
        case 1:
        printf("Digite o valor em Reais: ");
        scanf("%f", &vlrorigem);
        vlrconvertido = vlrorigem/ceuro;
        printf("Valor em euros: %.2f\n", vlrconvertido);
        break; 
        
        case 2:
            printf("Digite o valor em Reais: ");
            scanf("%f", &vlrorigem);
            vlrconvertido = vlrorigem / cdolar;
            printf("Valor em Dólares: %.2f\n", vlrconvertido);
            break;
            
        case 3:
            printf("Digite o valor em Euros: ");
            scanf("%f", &vlrorigem);
            vlrconvertido = (vlrorigem * ceuro) / cdolar;
            printf("Valor em Dólares: %.2f\n", vlrconvertido);
            break;
            
        case 4:
            printf("Digite o valor em Euros: ");
            scanf("%f", &vlrorigem);
            vlrconvertido = vlrorigem * ceuro;
            printf("Valor em Reais: %.2f\n", vlrconvertido);
            break;
            
        case 5:
            printf("Digite o valor em Dólares: ");
            scanf("%f", &vlrorigem);
            vlrconvertido = (vlrorigem * cdolar) / ceuro;
            printf("Valor em Euros: %.2f\n", vlrconvertido);
            break;
            
        case 6:
            printf("Digite o valor em Dólares: ");
            scanf("%f", &vlrorigem);
            vlrconvertido = vlrorigem * cdolar;
            printf("Valor em Reais: %.2f\n", vlrconvertido);
            break;
            
        default:
            printf("Opção inválida!\n");
            break;
    }
    
    
    
    return 0;
}
