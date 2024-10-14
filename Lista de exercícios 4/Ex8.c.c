/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int numero;
    char resposta;

    do {
        
        printf("Entre com um número: ");
        scanf("%d", &numero);

        // Calcula o fatorial
        int fatorial = 1;
        for (int i = 1; i <= numero; i++) {
            fatorial *= i;
        }

        
        printf("O fatorial de %d é %d\n", numero, fatorial);

       
        printf("Calcular outro número (s/n)? ");
        scanf(" %c", &resposta);  // O espaço antes de %c serve para ignorar o '\n' deixado pelo scanf anterior

    } while (resposta == 's' || resposta == 'S');

    return 0;
}
