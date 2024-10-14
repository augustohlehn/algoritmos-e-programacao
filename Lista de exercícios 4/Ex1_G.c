/******************************************************************************

Ler n números e imprimir no final a soma dos números lidos (obs.: n é a quantidade de números 
que deverão ser lidos e também deve ser lido do teclado) 

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int n, numero, soma;
    
    printf("Digite a quantidade de números que você deseja somar: ");
    scanf("%d", &n);
    
    if(n < 0){
        printf("Quantidade inválida!");
        return 1;//encerra o programa com um erro.
    }
    
    
    for(int i = 1; i <= n; i++){
        printf("Digite o número %d.\n",i);
        scanf("%d", &numero);
        
        soma = soma + numero;
    }
    
    printf("A soma dos números lidos é %d.", soma);

    return 0;
}
