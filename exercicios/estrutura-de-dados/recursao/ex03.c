#include <stdio.h>

float somaVetor(float vetor[], int tamanho) {
    if (tamanho == 0) {
        return 0;
    }
    return vetor[tamanho - 1] + somaVetor(vetor, tamanho - 1);
}

int main() {
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    float vetor[tamanho];

    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor para a posicao %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    float soma = somaVetor(vetor, tamanho);
    printf("A soma de todos os valores do vetor eh: %.2f\n", soma);

    return 0;
}

