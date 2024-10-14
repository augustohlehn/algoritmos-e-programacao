/******************************************************************************

Ler 10 números inteiros e escrever a quantidade de números pares e a quantidade de números 
ímpares lidos. 

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero, i, par, impar;
    
    for(int i = 1; i <= 10; i++){
        printf("Digite um número %d:\n",i);
        scanf("%d", &numero);
        
        if(numero % 2 == 0){
            par++;
        }
        
        else{
            impar++;
        }
        
    }

printf("Quantidade de números pares: %d\n", par);
printf("Quantidade de números impares: %d", impar);


    return 0;
}
