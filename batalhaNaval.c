#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // 1. Cria um tabuleiro 10x10
    int tabuleiro[10][10];
    int i, j;

    // 2. Preenche todo o tabuleiro com 0 (água)
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // 3. Posiciona os navios diretamente no tabuleiro
    // Navio de tamanho 3 na horizontal, começando em (linha 2, coluna 3)
    tabuleiro[2][3] = 3;
    tabuleiro[2][4] = 3;
    tabuleiro[2][5] = 3;

    // Navio de tamanho 3 na vertical, começando em (linha 5, coluna 6)
    tabuleiro[5][6] = 3;
    tabuleiro[6][6] = 3;
    tabuleiro[7][6] = 3;

    // 4. Mostra o tabuleiro final na tela
    printf("--- Tabuleiro Batalha Naval ---\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n"); // Pula para a próxima linha
    }

    return 0;
}
