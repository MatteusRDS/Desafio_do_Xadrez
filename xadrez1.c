#include <stdio.h>

int main() {
    // ============================================================
    // Desafio: Movimentando as Peças do Xadrez
    // ============================================================

    printf("=== Desafio: Movimentando as Peças do Xadrez ===\n\n");

    // ============================================================
    // 1️⃣ Movimento da TORRE - usando FOR
    // ============================================================
    int casasTorre = 5; // A torre se moverá 5 casas para a direita
    printf("=== Movimento da TORRE ===\n");

    // O laço FOR é usado quando sabemos exatamente quantas repetições queremos.
    for (int i = 1; i <= casasTorre; i++) {
        printf("Casa %d: Direita\n", i);
    }

    // ============================================================
    // 2️⃣ Movimento do BISPO - usando WHILE
    // ============================================================
    int casasBispo = 5; // O bispo se moverá 5 casas na diagonal para cima e à direita
    int j = 1;
    printf("\n=== Movimento do BISPO ===\n");

    // O laço WHILE executa enquanto a condição for verdadeira.
    while (j <= casasBispo) {
        printf("Casa %d: Cima, Direita\n", j);
        j++;
    }

    // ============================================================
    // 3️⃣ Movimento da RAINHA - usando DO...WHILE
    // ============================================================
    int casasRainha = 8; // A rainha se moverá 8 casas para a esquerda
    int k = 1;
    printf("\n=== Movimento da RAINHA ===\n");

    // O laço DO...WHILE executa pelo menos uma vez, 
    // e depois verifica a condição no final.
    do {
        printf("Casa %d: Esquerda\n", k);
        k++;
    } while (k <= casasRainha);

    // ============================================================
    // Finalização
    // ============================================================
    printf("\nTodos os movimentos foram concluídos!\n");
    printf("========================================\n");

    return 0;
}
