#include <stdio.h>

// Função recusriva para mover a torre
void moverTorre(int casas) {
    if (casas == 0) return; // Conidção de parada da recursão
    printf("Direita\n");
}

// Função recursiva para mover o bispo 
void moverBispo(int casas) {
    if (casas == 0) return; // Condição de parada da recursão
    printf("Cima, Direita\n"); // Bispo se move na diagonal 
    moverBispo(casas - 1); // chamada recursiva
}

// Função recursiva para mover a rainha 
void moverRainha(int casas) {
    if (casas == 0) return; // Condição de parada de recursão
    printf("Esquerda\n"); // Rainha se move para a esquerda
    moverRainha(casas - 1);
}

// Função para mover o Cavalo com loops complexos
void moverCavalo(int passos) {
    printf("\nMovimento do Cavalo:\n");
    for (int i = 1; i <= passos; i++) {
        for (int j = 1; j <= 2; j++) {
            if (j == 1) {
                printf("Cima\n"); // Primeira parte do "L": duas casas para cima
            } else {
                printf("Cima\n");
            }
        }
        printf("Direita\n"); // Segunda parte do "L": uma casa para a direita
    }
}

// Função para mover o Bispo com loops aninhados
void moverBispoComLoops(int casas) {
    printf("\nMovimento do bispo com loops aninhados:\n");
    for (int i = 1; i <= casas; i++) {
        for (int j = 1; j <= casas; j++) {
            if (i == j) {
                printf("Cima, direita\n");
            }
        }
    }
}

int main () {
    // Movimento da torre (recursivo)
    printf("Movimento da torre:\n");
    moverTorre(5);

    // Movimento do Bispo (recursivo)
    printf("\nMovimento do Bispo:\n");
    moverBispo(5);

    // Movimento da Rainha (recursivo)
    printf("\nMovimento da Rainha\n");
    moverRainha(8); // Rainha move-se 8 casas para a esquerda

    // Movimento do cavalo (loops complexos)
    moverCavalo(3); // Cavalo move-se 3 vezes em "L"

    // Movimento do bispo com loops aninhados
    moverBispoComLoops(5); // Bispo move-se casas na diagonal

    return 0;
}

