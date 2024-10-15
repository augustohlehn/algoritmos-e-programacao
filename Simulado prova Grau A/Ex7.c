/******************************************************************************

7. Escreva um programa que leia 10 caracteres inseridos pelo usuário. Para cada caractere, o 
programa deve informar se é uma letra, um número, ou um símbolo especial. Utilize a função 
isalpha() da biblioteca ctype.h para verificar se o caractere é uma letra, e isdigit() para 
números. 

*******************************************************************************/
#include <stdio.h>
#include <ctype.h>

int main() {
    char caracteres[10];

    // Ler os 10 caracteres do usuário
    printf("Digite 10 caracteres:\n");
    for (int i = 0; i < 10; i++) {
        scanf(" %c", &caracteres[i]);  // o espaço antes do %c ignora espaços em branco
    }

    // Processar cada caractere
    for (int i = 0; i < 10; i++) {
        if (isalpha(caracteres[i])) {
            printf("Caractere %c é uma letra.\n", caracteres[i]);
        } else if (isdigit(caracteres[i])) {
            printf("Caractere %c é um número.\n", caracteres[i]);
        } else {
            printf("Caractere %c é um símbolo especial.\n", caracteres[i]);
        }
    }

    return 0;
}