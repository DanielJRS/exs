/*
1. Faça um programa que leia do usuário o tamanho de um vetor a ser lido e faça a alocação dinâmica de
memória. Em seguida, leia do usuário seus valores e mostre quantos dos números são pares e quantos são
ímpares.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho, *vetor, pares = 0, impares = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    vetor = (int*) malloc(tamanho * sizeof(int));

    if (vetor == NULL) {
        printf("Erro ao alocar memoria\n");
        return 1;
    }

    printf("Digite os valores do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("Numeros pares: %d\n", pares);
    printf("Numeros impares: %d\n", impares);

    free(vetor);

    return 0;
}
