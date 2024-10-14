/******************************************************************************

Escrever um programa que produza a saída abaixo na tela, para n linhas e usando um caractere lido do 
teclado. 
Exemplo de tela de saída, para n = 5 e caracter = `*`: 

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero, linha, qtdcaracter;
    char caracter;
    
    printf("Entre com um número: ");
    scanf("%d", &numero);
    
    printf("Entre com um caracter: ");
    scanf(" %c", &caracter);
    
    for(linha = 1; linha <= numero; linha++ ){
        for(qtdcaracter = 1; qtdcaracter <= linha; qtdcaracter++){
            printf(" %c", caracter);
        }
        printf("\n");
    }

    return 0;
}