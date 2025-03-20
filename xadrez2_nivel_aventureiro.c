#include <stdio.h>

int main() {
    // Variáveis para controlar o movimento do cavalo
    int casa_baixo = 2; // número de casas para baixo
    int casa_esquerda = 1; // número de casas para a esquerda
    int i;

    // Movimento do Cavalo: duas casas para baixo
    printf("Movimento do Cavalo:\n");
    for (i = 1; i <= casa_baixo; i++) { // Removi o ponto e vírgula aqui
        printf("Baixo\n"); // Imprime a direção do movimento
    }

    // Movimento do Cavalo: uma casa para a esquerda
    i = 1; // Reinicializa o contador
    while (i <= casa_esquerda) {
        printf("Esquerda\n"); // Imprime a direção do movimento
        i++;
    }

    // Linha em branco para separar os movimentos
    printf("\n");

    // Movimentos anteriores (exemplo de outras peças)
    printf("Movimentos anteriores:\n");
    printf("Cima\n");
    printf("Direita\n");

    return 0;
}