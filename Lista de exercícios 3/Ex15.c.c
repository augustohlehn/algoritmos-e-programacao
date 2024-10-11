/******************************************************************************

Elabore um algoritmo que calcule o que deve ser pago por um produto, considerando o preço 
normal de etiqueta e a escolha da condição de pagamento. Utilize os códigos da tabela a seguir 
para ler qual a condição de pagamento escolhida e efetuar o cálculo adequado. 

*******************************************************************************/
#include <stdio.h>

int main()
{
    float etiqueta, valor;
    int opcao;
    
    printf("Digite o valor da etiqueta: ");
    scanf("%f", &etiqueta);
    
    printf("Escolha a opção de pagamento:\n ");
    printf("1- À vista em dinheiro, recebe 15%% de desconto.\n ");
    printf("2- À vista no cartão de crédito, recebe 10%% de desconto.\n ");
    printf("3- Em duas vezes, preço normal de etiqueta sem juros.\n ");
    printf("4- Em três vezes, preço normal de etiqueta mais juros de 10%%.\n ");
    scanf("%d", &opcao);
    
    switch(opcao){
        
        case 1:
        valor = etiqueta * 0.85;
        printf("O valor a ser pago é %.2f.\n", valor);
        break;
        
        case 2:
        valor = etiqueta * 0.90;
        printf("O valor a ser pago é %.2f.\n", valor);
        break;
        
        case 3:
        valor = etiqueta/2;
        printf("O valor fica 2x de %.2f, sem juros.\n", valor);
        break;
        
        case 4:
        valor = (etiqueta/3) * 1.10;
        printf("O valor fica 3x de %.2f, com juros.\n", valor);
        break;
        
        default:
        printf("Opção inválida");
        break;
    }

    return 0;
}