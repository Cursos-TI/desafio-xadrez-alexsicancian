#include <stdio.h>

int main() {

    int casasTorre = 5;    // Quantidade de casas que a Torre vai se mover
    int casasBispo = 5;    // Quantidade de casas que o Bispo vai se mover
    int casasRainha = 8;   // Quantidade de casas que a Rainha vai se mover

    int i;                 // Variável de controle
    int contadorBispo;     // Contador para o Bispo
    int contadorRainha;    // Contador para a Rainha

    // ======================================================
    // Movimentação da TORRE
    // ======================================================

    printf("Movimento da Torre (5 casas para a Direita):\n");

    for (i = 1; i <= casasTorre; i++) {
        // A cada iteração, a torre anda uma casa para a direita
        printf("Passo %d - Direita\n", i);
    }

    printf("\n");

    // ======================================================
    // Movimentação do BISPO
    // ======================================================

    printf("Movimento do Bispo (5 casas na diagonal Cima Direita):\n");

    contadorBispo = 1; // Inicializa o contador

    while (contadorBispo <= casasBispo) {
        // A cada iteração, o bispo anda uma casa na diagonal (cima + direita)
        printf("Passo %d - Cima Direita\n", contadorBispo);
        contadorBispo++; // Incrementa o contador
    }

    printf("\n");

    // ======================================================
    // Movimentação da RAINHA
    // ======================================================

    printf("Movimento da Rainha (8 casas para a Esquerda):\n");

    contadorRainha = 1; // Inicializa o contador

    do {
        // A cada iteração, a rainha anda uma casa para a esquerda
        printf("Passo %d - Esquerda\n", contadorRainha);
        contadorRainha++; // Incrementa o contador
    } while (contadorRainha <= casasRainha);

    return 0;
}
