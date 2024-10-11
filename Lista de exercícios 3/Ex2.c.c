/******************************************************************************

 Faça um algoritmo que leia os valores A, B, C e imprima na tela se a soma de A + B é menor que A 
+ C.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int A,B,C;
    
    printf("Digite um valor para A: ");
    scanf("%d", &A);
    
    printf("Digite um valor para B: ");
    scanf("%d", &B);
    
    printf("Digite um valor para C: ");
    scanf("%d", &C);

if (A+B<A+C){
    printf("A soma entre %d + %d é menor do que entre %d + %d", A,B,A,C);
}
    return 0;
}