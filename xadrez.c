#include <stdio.h>

// Função recursiva para simular o movimento da Torre (horizontal para a direita)
void moverTorre(int casasRestantes) {
    if (casasRestantes <= 0)
        return;
    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

// Função recursiva com loops aninhados para o Bispo (diagonal para cima e à direita)
void moverBispo(int vertical, int horizontal) {
    if (vertical <= 0)
        return;

    // Loop horizontal interno: move uma casa à direita por passo vertical
    for (int i = 0; i < horizontal; i++) {
        printf("Direita ");
    }

    printf("e Cima\n");

    moverBispo(vertical - 1, horizontal);
}

// Função recursiva para simular o movimento da Rainha (horizontal para a esquerda)
void moverRainha(int casasRestantes) {
    if (casasRestantes <= 0)
        return;
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

// Função com loops aninhados e controle de fluxo para simular o movimento do Cavalo em "L"
void moverCavalo(int movimentos) {
    printf("\nMovimento do Cavalo:\n\n");

    int contadorMovimentos = 0;

    for (int cima = 1; cima <= 2; cima++) { // 2 casas para cima
        for (int direita = 1; direita <= 1; direita++) { // 1 casa para direita
            if (cima + direita > 3) // apenas exemplo de condição arbitrária
                break;

            // Controle do fluxo usando 'continue'
            if (cima == 2 && direita == 1) {
                contadorMovimentos++;
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n");
                if (contadorMovimentos >= movimentos)
                    break;
                continue;
            }

            printf("Movimento inválido\n");
        }
        if (contadorMovimentos >= movimentos)
            break;
    }
}

int main() {
    // Quantidade de casas a serem movimentadas
    int casasTorre = 5;
    int casasRainha = 8;
    int casasBispo = 5; // vertical
    int passosHorizontaisBispo = 1; // horizontal
    int movimentosCavalo = 1; // Número de movimentos em "L"

    // Movimento da TORRE
    printf("Movimento da Torre:\n\n");
    moverTorre(casasTorre);

    // Movimento do BISPO
    printf("\nMovimento do Bispo:\n\n");
    moverBispo(casasBispo, passosHorizontaisBispo);

    // Movimento da RAINHA
    printf("\nMovimento da Rainha:\n\n");
    moverRainha(casasRainha);

    // Movimento do CAVALO
    moverCavalo(movimentosCavalo);

    return 0;
}