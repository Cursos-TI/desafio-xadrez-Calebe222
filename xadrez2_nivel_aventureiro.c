#include <stdio.h>

int main () {
    // Variáveis para controlar o movimento do cavalo
    int casa_baixo = 2;
    int casa_esquerda = 1;
    int i;


    // Movimento do Cavalo: duas casas para baixo 
    printf("Movimento do Cavalo:\n");
    for (i = 1; i <= casa_baixo; i++) {
        printf("Baixo\n"); 
    }

    // Movimento do Cavalo: uma casa para esquerda
    i = 1;
    while (i <= casa_esquerda) {
        printf("Esquerda\n");
        i++;
    }

    printf("\n");

    // Movimentos anteriores (exemplo de outras opções)
    printf("Movimentos anteriores:\n");
    printf("Cima\n");
    printf("Direita\n");

    return 0;
}