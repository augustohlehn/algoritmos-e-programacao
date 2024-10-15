/******************************************************************************

Escreva um programa que sorteie:  
a. Um número entre 130 e 670. 
b. Um número entre -20 e -5. 
c. Um número entre -10 e 10. 
d. Um número entre 10.5 e 50.2, com uma casa decimal
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{   
    
    // Inicializa o gerador de números aleatórios com base no tempo atual
    srand(time(0)); 
    // Gera um número aleatório entre 130 e 670
    //Usar esta formula: numero = (rand() % (max - min + 1)) + min;
    int a = rand() % (670 - 130 + 1) + 130;
    printf("%d\n", a);

    int b = rand() % (-5 - (-20) + 1) - 20; 
    printf("%d\n", b);
    
    int c = rand () % (10 - (-10) +1) -10;
    printf("%d\n", c);
    
    //Letra d:
     // Multiplicando os limites por 10 para trabalhar com inteiros 
    int minimo = 105; // 10.5 * 10 
    int maximo = 502; // 50.2 * 10 
    // Sorteando um número inteiro entre 105 e 502 
    int numeroSorteado = rand() % (maximo - minimo + 1) + minimo; 
    // Dividindo por 10 para obter o valor com uma casa decimal 
    float resultado = numeroSorteado / 10.0;
    printf("%.2f", resultado);

    return 0;
}
