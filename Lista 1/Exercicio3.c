#include <stdio.h>

int main() {
    printf("Qual é o verdadeiro nome do super-herói Batman?\n");//Exibe a pergunta na tela.
    //Exibe as alterantivas (Usar \n para exibir na linha abaixo).
    printf("A)Bruce Wayne\n");
    printf("B)Clark Kent\n");
    printf("C)Peter Parker\n");
    printf("D)Tony Stark\n");
    printf("E)Steve Rogers\n");

    //Alterantiva correta
    char resposta_correta = 'A';

    //Pergunta a alterantiva ao usuário
    char resposta_usuario;
    printf("\nDigite a letra correspondente à sua resposta: ");
    scanf(" %c", &resposta_usuario);  //Váriavel com a resposta do usuário

    //Exibe a resposta do usuário e a correta
    printf("\nVocê respondeu a alternativa %c.\n", resposta_usuario);
    printf("A resposta correta é a alternativa %c.\n", resposta_correta);

    return 0;
}