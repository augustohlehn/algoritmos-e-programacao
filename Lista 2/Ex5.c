// Um motorista deseja encher o tanque do seu carro com gasolina. Escreva um algoritmo para 
//ler o preço do litro da gasolina e o valor que o motorista tem disponível para abastecer. 
//Calcule quantos litros ele conseguiu colocar no tanque e exiba na tela.

#include <stdio.h>

int main (){

    float preco, valor;

    printf("Qual o preço do litro da gasolina? ");
    scanf("%f", &preco);

    printf("Qual o valor que você tem para gastar? ");
    scanf("%f", &valor);

    float litros = valor/preco;

    printf("Você pode abastecer %.1f litros!", litros);

    return 0;

}