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

    // ======================================================
    // Movimentação do CAVALO
    // ======================================================

    printf("\nMovimento do Cavalo (2 casas para Baixo e 1 para a Esquerda):\n");

    int movimentoVertical = 2;   // Quantidade de casas para baixo
    int movimentoHorizontal = 1; // Quantidade de casas para a esquerda

    int j = 1; 

    for (int i = 1; i <= movimentoVertical; i++)
    {
        printf("Passo %d - Baixo\n", i);  // Movimento vertical do cavalo

        
        j = 1;
        while (j < 1) {
            j++;
        }
    }
    int contadorEsquerda = 1;
    while (contadorEsquerda <= movimentoHorizontal) {
        printf("Passo %d - Esquerda\n", movimentoVertical + contadorEsquerda);
        contadorEsquerda++;
    }


    return 0;
}
