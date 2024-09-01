#include <stdio.h>

int main()
{
    char nome[20]; //variável para informar o nome
    printf("Por favor, informe seu nome: ");//Saída para perguntar o nome
    scanf("%s",nome); //Para digitar o nome na saída
    printf("Bem vindo(a) ao sistema, %s!\n", nome); //Retorna a mensagem com o nome escaneado escaneado

    return 0;
}