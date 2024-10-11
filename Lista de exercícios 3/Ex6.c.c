/**Brincadeira do PAR ou ÍMPAR. Pergunte para o usuário se ele aposta em PAR ou ÍMPAR. Depois 
disso, peça para ele digitar um número de 0 a 5 (como se fosse mostrar os dedos da mão. Sorteie 
um número de 0 a 5 e some com o que o usuário digitou. Se o usuário escolheu PAR e o valor da 
soma for par OU se ele escolheu ÍMPAR e o valor da soma é ímpar, diga que ele venceu. Senão, diga 
que o programa venceu**/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main (){

int numero,sorteio,escolha,soma;

printf("Você aposta em: \n1-PAR \n2-ÍMPAR?\n ");
scanf("%d", &escolha);

printf("Digite um número de 0 a 5: ");
scanf("%d", &numero);

sorteio = rand() %6;

printf("O número sorteado foi %d\n", sorteio);

soma = numero + sorteio;

printf("A soma foi %d\n", soma);

if (escolha == 1){
soma % 2 == 0; 

printf("Você escolheu par e ganhou!");
}
else {
    printf("Você escolheu ímpar e ganhou!");
}

    return 0;
}
