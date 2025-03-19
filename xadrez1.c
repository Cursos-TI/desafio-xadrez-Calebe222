#include <stdio.h>

int main () {
    // Movimento da torre: 5 casas para a direita
    printf("Movimento da torre: \n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo: 5 casas na diagonal para cima e à direita
    printf("\nMovimento do Bispo:\n");
    int casa = 1;
    while (casa <= 5) {
        printf("Cima, Direita\n");
        casa++;
    }

    // Movimento da Rainha: 8 casas para a esquerda 
    printf("\nMovimentando da Rainha:\n");
    int passo = 1;
    do {
        printf("Esquerda\n");
        passo++;
    } while (passo <= 8);

    return 0;
}