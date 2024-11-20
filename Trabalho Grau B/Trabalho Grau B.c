#include <stdio.h>
#include <string.h>

// Definição das structs
typedef struct {
    char nome[30];
    int quantidade;
} Ingrediente;

typedef struct {
    char nome[30];
    int ingredientes[7];
    int quantidades[7];
} Pocao;

// Inicialização dos ingredientes
void inicializarIngredientes(Ingrediente ingredientes[]) {
    strcpy(ingredientes[0].nome, "Pó de Fênix"); //Aqui a string "Pó de Fênix" é copiada para o campo nome do primeiro elemento do array ingredientes.
    ingredientes[0].quantidade = 100;

    strcpy(ingredientes[1].nome, "Essência Celestial");//Assim por diante...
    ingredientes[1].quantidade = 50;

    strcpy(ingredientes[2].nome, "Raiz de Dragão");
    ingredientes[2].quantidade = 45;

    strcpy(ingredientes[3].nome, "Orvalho Lunar");
    ingredientes[3].quantidade = 30;

    strcpy(ingredientes[4].nome, "Flores secas");
    ingredientes[4].quantidade = 200;

    strcpy(ingredientes[5].nome, "Elixir amargo");
    ingredientes[5].quantidade = 20;

    strcpy(ingredientes[6].nome, "Lágrimas de unicórnio");
    ingredientes[6].quantidade = 15;
}

// Inicialização das receitas de poções
void inicializarPocoes(Pocao pocoes[]) {
    strcpy(pocoes[0].nome, "Poção de Cura");
    pocoes[0].ingredientes[0] = 0; pocoes[0].quantidades[0] = 30;
    pocoes[0].ingredientes[1] = 1; pocoes[0].quantidades[1] = 20;
    pocoes[0].ingredientes[4] = 4; pocoes[0].quantidades[4] = 20;
    pocoes[0].ingredientes[6] = 6; pocoes[0].quantidades[6] = 10;

    strcpy(pocoes[1].nome, "Poção Força da Floresta");
    pocoes[1].ingredientes[3] = 3; pocoes[1].quantidades[3] = 20;
    pocoes[1].ingredientes[2] = 2; pocoes[1].quantidades[2] = 30;
    pocoes[1].ingredientes[4] = 4; pocoes[1].quantidades[4] = 30;

    strcpy(pocoes[2].nome, "Poção Sabedoria da Riqueza");
    pocoes[2].ingredientes[1] = 1; pocoes[2].quantidades[1] = 30;
    pocoes[2].ingredientes[0] = 0; pocoes[2].quantidades[0] = 50;

    strcpy(pocoes[3].nome, "Poção Sorte no Amor");
    pocoes[3].ingredientes[3] = 3; pocoes[3].quantidades[3] = 10;
    pocoes[3].ingredientes[4] = 4; pocoes[3].quantidades[4] = 50;
    pocoes[3].ingredientes[6] = 6; pocoes[3].quantidades[6] = 5;

    strcpy(pocoes[4].nome, "Poção Malvada");
    pocoes[4].ingredientes[5] = 5; pocoes[4].quantidades[5] = 10;
    pocoes[4].ingredientes[2] = 2; pocoes[4].quantidades[2] = 15;
}

// Exibe os ingredientes disponíveis
void consultarIngredientes(Ingrediente ingredientes[]) {
    printf("Ingredientes Disponíveis:\n");
    for (int i = 0; i < 7; i++) {
        printf("%d. %s: %d\n", i + 1, ingredientes[i].nome, ingredientes[i].quantidade);
    }
}

// Prepara uma poção
void prepararPocao(Ingrediente ingredientes[], Pocao pocoes[]) {
    int escolha;
    printf("Escolha uma poção para preparar:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d. %s\n", i + 1, pocoes[i].nome);
    }
    scanf("%d", &escolha);

    if (escolha < 1 || escolha > 5) {
        printf("Escolha inválida!\n");
        return;
    }

    Pocao pocaoEscolhida = pocoes[escolha - 1];
    int falta = 0;

    // Verifica se há ingredientes suficientes
    for (int i = 0; i < 7; i++) {
        if (pocaoEscolhida.quantidades[i] > 0 && ingredientes[pocaoEscolhida.ingredientes[i]].quantidade < pocaoEscolhida.quantidades[i]) {
            printf("Falta de %s: necessário %d, disponível %d\n",
                   ingredientes[pocaoEscolhida.ingredientes[i]].nome,
                   pocaoEscolhida.quantidades[i],
                   ingredientes[pocaoEscolhida.ingredientes[i]].quantidade);
            falta = 1;
        }
    }

    if (falta) {
        printf("Não foi possível preparar a poção.\n");
    } else {
        // Atualiza os ingredientes no estoque
        for (int i = 0; i < 7; i++) {
            if (pocaoEscolhida.quantidades[i] > 0) {
                ingredientes[pocaoEscolhida.ingredientes[i]].quantidade -= pocaoEscolhida.quantidades[i];
            }
        }

        // Exibe mensagem de sucesso e estoque atualizado
        printf("Poção criada com sucesso!\n");
        printf("Estoque atualizado:\n");
        for (int i = 0; i < 7; i++) {
            printf("%d. %s: %d\n", i + 1, ingredientes[i].nome, ingredientes[i].quantidade);
        }
    }
}

// Reabastece ingredientes
void reabastecerIngrediente(Ingrediente ingredientes[]) {
    int escolha, quantidade;

    consultarIngredientes(ingredientes);
    printf("Escolha um ingrediente pelo número: ");
    scanf("%d", &escolha);

    if (escolha < 1 || escolha > 7) {
        printf("Escolha inválida!\n");
        return;
    }

    printf("Digite a quantidade a ser adicionada: ");
    scanf("%d", &quantidade);

    if (quantidade < 0) {
        printf("Quantidade inválida!\n");
        return;
    }

    ingredientes[escolha - 1].quantidade += quantidade;
    printf("Ingrediente %s reabastecido com sucesso!\n", ingredientes[escolha - 1].nome);
}

int main() {
    Ingrediente ingredientes[7];
    Pocao pocoes[5];
    int opcao;

    inicializarIngredientes(ingredientes);
    inicializarPocoes(pocoes);

    do {
        printf("\nMenu Principal:\n");
        printf("1. Consultar Ingredientes Disponíveis\n");
        printf("2. Preparar Poção\n");
        printf("3. Reabastecer Ingrediente\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                consultarIngredientes(ingredientes);
                break;
            case 2:
                prepararPocao(ingredientes, pocoes);
                break;
            case 3:
                reabastecerIngrediente(ingredientes);
                break;
            case 4:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}
