/******************************************************************************
Um comerciante comprou um produto e quer vendê-lo com lucros diferentes dependendo do valor 
da compra. Ele quer um lucro de 45% se o valor da compra for menor que R$ 20,00, 35% se o preço 
for de até 50 reais e lucro de 25% se valor for maior. Entrar com o valor do produto e imprimir na 
tela o valor de venda. 
*******************************************************************************/
#include <stdio.h>

int main()
{
    float compra, venda;
    printf("Digite o valor da compra: ");
    scanf("%f", &compra);
    
    if (compra < 20 ){
        venda = compra * 1.45;
    }
    
    else if (compra <= 50){
        venda = compra * 1.35;
    }
    else {
        venda = compra * 1.25;
    }

    printf("O valor da venda é de %2.f.", venda);
    
    return 0;
}