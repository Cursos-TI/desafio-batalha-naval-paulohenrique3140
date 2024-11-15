#include <stdio.h>

// Desafio Batalha Naval - MateCheck

int main() {
    // Tabuleiro de 5x5 representado por uma matriz bidimensional
    int tabuleiro[5][5] = {0};  // Inicializa o tabuleiro com 0 (sem navios)
    
    // Variáveis para armazenar as coordenadas do navio
    int linhaVertical, colunaVertical, linhaHorizontal, colunaHorizontal;

    // Solicita ao usuário o posicionamento do navio vertical
    printf("Posicione o Navio 1 (Vertical):\n");
    printf("Digite a linha inicial (1 a 5): ");
    scanf("%d", &linhaVertical);
    printf("Digite a coluna inicial (1 a 5): ");
    scanf("%d", &colunaVertical);

    // Validação das coordenadas do navio vertical
    if (linhaVertical < 1 || linhaVertical > 3 || colunaVertical < 1 || colunaVertical > 5) {
        printf("Coordenadas inválidas para o navio vertical! Tente novamente.\n");
        return 1;
    }

    // Colocando o navio vertical nas coordenadas fornecidas
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaVertical + i - 1][colunaVertical - 1] = 1;  // Preenche o tabuleiro para o navio vertical
    }

    // Solicita ao usuário o posicionamento do navio horizontal
    printf("\nPosicione o Navio 2 (Horizontal):\n");
    printf("Digite a linha inicial (1 a 5): ");
    scanf("%d", &linhaHorizontal);
    printf("Digite a coluna inicial (1 a 3): ");
    scanf("%d", &colunaHorizontal);

    // Validação das coordenadas do navio horizontal
    if (linhaHorizontal < 1 || linhaHorizontal > 5 || colunaHorizontal < 1 || colunaHorizontal > 3) {
        printf("Coordenadas inválidas para o navio horizontal! Tente novamente.\n");
        return 1;
    }

    // Colocando o navio horizontal nas coordenadas fornecidas
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaHorizontal - 1][colunaHorizontal + i - 1] = 2;  // Preenche o tabuleiro para o navio horizontal
    }

    // Exibindo as coordenadas dos navios
    printf("\nCoordenadas do Navio 1 (Vertical):\n");
    for (int i = 0; i < 3; i++) {
        printf("Linha: %d, Coluna: %d\n", linhaVertical + i, colunaVertical);
    }

    printf("\nCoordenadas do Navio 2 (Horizontal):\n");
    for (int i = 0; i < 3; i++) {
        printf("Linha: %d, Coluna: %d\n", linhaHorizontal, colunaHorizontal + i);
    }

    // Exibindo o tabuleiro para visualização
    printf("\nTabuleiro Final:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}