#include <stdio.h>

int main() {
    // Variáveis para armazenar a pergunta e as alternativas
    char pergunta[200] = "Qual é o verdadeiro nome do super-herói Batman?";
    char alternativa1[100] = "A) Bruce Wayne";
    char alternativa2[100] = "B) Clark Kent";
    char alternativa3[100] = "C) Peter Parker";
    char alternativa4[100] = "D) Tony Stark";
    char alternativa5[100] = "E) Steve Rogers";
    
    // Variável que guarda a alternativa correta
    char resposta_correta = 'A';

    // Exibe a pergunta
    printf("%s\n", pergunta);

    // Exibe as alternativas manualmente
    printf("%s\n", alternativa1);
    printf("%s\n", alternativa2);
    printf("%s\n", alternativa3);
    printf("%s\n", alternativa4);
    printf("%s\n", alternativa5);

    // Pergunta a alternativa ao usuário
    char resposta_usuario;
    printf("\nDigite a letra correspondente à sua resposta: ");
    scanf(" %c", &resposta_usuario);

    // Exibe a resposta do usuário e a correta
    printf("\nVocê respondeu a alternativa %c.\n", resposta_usuario);
    printf("A resposta correta é a alternativa %c.\n", resposta_correta);

    // Verifica se a resposta do usuário está correta
    if (resposta_usuario == resposta_correta) {
        printf("Parabéns! Você acertou.\n");
    } else {
        printf("Que pena! Você errou.\n");
    }

    return 0;
}