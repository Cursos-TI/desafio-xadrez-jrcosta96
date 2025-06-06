#include <stdio.h>

/*
 * Este programa simula o movimento de três peças de xadrez:
 * Torre, Bispo e Rainha.
 * Cada peça é movimentada usando uma estrutura de repetição diferente:
 * - Torre: for
 * - Bispo: while
 * - Rainha: do-while
 */

int main() {
    // Movimento da TORRE (5 casas para a direita)
    // Usando estrutura de repetição FOR
    int movimentoTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= movimentoTorre; i++) {
        printf("Direita\n");
    }

    // Movimento do BISPO (5 casas na diagonal para cima e à direita)
    // Usando estrutura de repetição WHILE
    int movimentoBispo = 5;
    int i = 1;
    printf("\nMovimento do Bispo:\n");
    while (i <= movimentoBispo) {
        printf("Cima Direita\n");
        i++;
    }

    // Movimento da RAINHA (8 casas para a esquerda)
    // Usando estrutura de repetição DO-WHILE
    int movimentoRainha = 8;
    int j = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= movimentoRainha);

    return 0;
}
#include <stdio.h>

int main() {
    // Definição das quantidades de casas para cada direção
    int passosBaixo = 2;     // Duas casas para baixo
    int passosEsquerda = 1;  // Uma casa para a esquerda

    // Impressão do movimento do Cavalo separado por uma linha em branco
    printf("\nMovimento do Cavalo:\n\n");

    // Primeiro loop: movimentar o Cavalo duas vezes para baixo (loop for)
    for (int i = 0; i < passosBaixo; i++) {
        printf("Baixo\n");
    }

    // Segundo loop: movimentar o Cavalo uma vez para a esquerda (loop while)
    int j = 0;
    while (j < passosEsquerda) {
        printf("Esquerda\n");
        j++;
    }

    return 0;
