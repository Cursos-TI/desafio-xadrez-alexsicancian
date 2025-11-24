#include <stdio.h>

// Movimento da Torre (recursivo)
void moverTorre(int casas, int passo) {
    if (casas == 0) return;
    printf("Passo %d - Direita\n", passo);
    moverTorre(casas - 1, passo + 1);
}

// Movimento da Rainha (recursivo)
void moverRainha(int casas, int passo) {
    if (casas == 0) return;
    printf("Passo %d - Esquerda\n", passo);
    moverRainha(casas - 1, passo + 1);
}

// Movimento do Bispo (recursivo + loops aninhados)
void moverBispo(int casas, int passo) {
    if (casas == 0) return;

    for (int v = 1; v <= 1; v++) {
        for (int h = 1; h <= 1; h++) {
            printf("Passo %d - Cima Direita\n", passo);
        }
    }

    moverBispo(casas - 1, passo + 1);
}

// Movimento do Cavalo (loops aninhados complexos)
void moverCavalo() {
    int cima = 2;
    int direita = 1;
    int movCima = 0;
    int movDir = 0;

    printf("Movimento do Cavalo (2 Cima, 1 Direita):\n");

    for (int passo = 1; passo <= 3; passo++) {
        for (int fase = 1; fase <= 2; fase++) {

            if (movCima < cima) {
                if (fase != 1) continue;
                movCima++;
                printf("Passo %d - Cima\n", passo);
                break;
            }

            if (movCima == cima && movDir < direita) {
                if (fase != 2) continue;
                movDir++;
                printf("Passo %d - Direita\n", passo);
                break;
            }
        }
    }
}

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Torre
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre, 1);
    printf("\n");

    // Bispo
    printf("Movimento do Bispo:\n");
    moverBispo(casasBispo, 1);
    printf("\n");

    // Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha, 1);
    printf("\n");

    // Cavalo
    moverCavalo();

    return 0;
}
