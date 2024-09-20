/*
6. Escreva um programa que aloque dinamicamente uma matriz (de inteiros) de dimensões definidas pelo
usuário e a leia. Em seguida, implemente uma função que receba um valor, retorne 1 caso o valor esteja na
matriz ou retorne 0 caso não esteja na matriz.
*/

#include <stdio.h>
#include <stdlib.h>

int buscaValor(int **matriz, int linhas, int colunas, int valor) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] == valor) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int linhas, colunas, valor;

    printf("Digite o numero de linhas: ");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas: ");
    scanf("%d", &colunas);

    int **matriz = (int**) malloc(linhas * sizeof(int*));
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int*) malloc(colunas * sizeof(int));
    }

    printf("Digite os valores da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite o valor a ser buscado: ");
    scanf("%d", &valor);

    if (buscaValor(matriz, linhas, colunas, valor)) {
        printf("Valor encontrado na matriz.\n");
    } else {
        printf("Valor nao encontrado na matriz.\n");
    }

    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
