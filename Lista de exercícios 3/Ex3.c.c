/******************************************************************************

 Encontrar o dobro de um número caso ele seja positivo e o seu triplo caso seja negativo, imprimindo 
o resultado

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    if (numero > 0){
        int positivo = 2 * numero;
        printf("O dobro do número é %d", positivo);
    }

    else{
        int negativo = 3 * numero;
        printf("O triplo do número é %d", negativo);
    }
    
    return 0;
}
