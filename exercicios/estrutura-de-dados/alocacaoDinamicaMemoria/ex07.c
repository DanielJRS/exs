/*
7. Faça um programa que leia dois números N e M e:
• Crie e leia uma matriz de inteiros N x M;
• Localize os dois maiores números de uma matriz e mostre a linha e a coluna onde estão.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M;

    printf("Digite o numero de linhas (N): ");
    scanf("%d", &N);
    printf("Digite o numero de colunas (M): ");
    scanf("%d", &M);

    int **matriz = (int**) malloc(N * sizeof(int*));
    for (int i = 0; i < N; i++) {
        matriz[i] = (int*) malloc(M * sizeof(int));
    }

    printf("Digite os valores da matriz:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int max1 = matriz[0][0], max2 = matriz[0][0];
    int max1_linha = 0, max1_coluna = 0, max2_linha = 0, max2_coluna = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (matriz[i][j] > max1) {
                max2 = max1;
                max2_linha = max1_linha;
                max2_coluna = max1_coluna;
                max1 = matriz[i][j];
                max1_linha = i;
                max1_coluna = j;
            } else if (matriz[i][j] > max2 && matriz[i][j] != max1) {
                max2 = matriz[i][j];
                max2_linha = i;
                max2_coluna = j;
            }
        }
    }

    printf("Maior numero: %d na linha %d, coluna %d\n", max1, max1_linha, max1_coluna);
    printf("Segundo maior numero: %d na linha %d, coluna %d\n", max2, max2_linha, max2_coluna);

    for (int i = 0; i < N; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}

