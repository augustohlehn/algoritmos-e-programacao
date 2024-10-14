/******************************************************************************

e. Ler 15 números e escrever a soma e a média dos números lidos. 

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero, i, soma;
    float media;
    
    for(i = 1; i <= 15; i++){
        printf("Digite o número %d\n", i);
        scanf("%d", &numero);
        
        soma += numero;
    }
    
    media = soma/15.0;
    
    printf("A soma dos números é %d\n", soma);
    printf("A média dos números é %.2f", media);

    return 0;
}
