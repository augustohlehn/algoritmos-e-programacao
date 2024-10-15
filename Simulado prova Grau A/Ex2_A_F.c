/******************************************************************************

e. Um número entre 0 e 100, que seja múltiplo de 5. 
f. Um caractere entre 'A' (65) e 'Z' (90). 

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
// Existem 21 múltiplos de 5 entre 0 e 100 (inclusive). 
// Sorteamos um número entre 0 e 20 com rand() % 21, e depois multiplicamos por 5. 
// Isso garante que o valor sorteado será um múltiplo de 5.
    int e = (rand() % 21) * 5; 
    printf("%d\n", e);

// O caractere 'A' tem valor ASCII 65, e 'Z' tem 90. 
// A fórmula rand() % (90 - 65 + 1) + 65 sorteia um valor numérico no intervalo de ASCII para 'A' a 'Z' 
// Depois, esse valor é convertido de número para caractere pelo printf. 
char f = rand() % ('Z' - 'A' + 1) + 'A';
printf("%c", f);

    return 0;
}
