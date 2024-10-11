/******************************************************************************

//Crie um programa que verifica se um número inteiro informado pelo usuário é divisível por 3.

*******************************************************************************/
#include <stdio.h>
int main(){

int numero;

printf("Digite um número inteiro: ");
scanf("%d", &numero);

if (numero % 3 == 0){
    printf("O numero %d é divisivel por 3.",numero);
}
else{
    printf("%d não é divisivel por 3.",numero);
}

return 0;
}