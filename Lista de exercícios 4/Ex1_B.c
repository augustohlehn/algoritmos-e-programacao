/******************************************************************************
b. Gerar e escrever os números pares do intervalo [20,50]. 

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n= 20;
    
    while(n <= 50){
        if (n % 2 == 0){
            printf("%d\n", n);
        }
        n ++;
    }

    return 0;
}
