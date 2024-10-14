/******************************************************************************

Escrever um programa que calcule todos os números divisíveis por certo valor indicado pelo usuário (o 
resto da divisão por este número deve ser igual a zero), compreendidos em um intervalo também 
especificado pelo usuário. O usuário deve entrar com um primeiro valor correspondente ao divisor e 
após ele vai fornecer o valor inicial do intervalo, seguido do valor final deste intervalo. 

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int divisor, vlrfinal, vlrinicial;
    
    printf("Entre com o valor do divisor: ");
    scanf("%d", &divisor);
    
    printf("Inicio do intevalo: ");
    scanf("%d", &vlrinicial);
    
    printf("Final do intervalo: ");
    scanf("%d", &vlrfinal);
    
    printf("Números divisíveis por %d no intervalo de %d a %d:\n", divisor, vlrinicial, vlrfinal);

    for(int i = vlrinicial; i <= vlrfinal; i++){
        
        if(i % divisor == 0){
        printf("%d\n", i);
        }
        
    }
    
    
    return 0;
}
