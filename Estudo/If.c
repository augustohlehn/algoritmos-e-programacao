#include <stdio.h>

int main (){

    int idade;
    printf("Digite sua idade: ");
    scanf("%d",&idade);

    if (idade >=18){
        printf("Você é maior de idade");
    }

    printf("OK\n");

    return 0;
}