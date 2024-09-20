#include <stdio.h>

int somatorio(int N) {
    if (N == 1) {
        return 1;
    }
    return N + somatorio(N - 1);
}

int main() {
    int N;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    if (N > 0) {
        printf("O somatorio de 1 a %d eh: %d\n", N, somatorio(N));
    } else {
        printf("Por favor, insira um numero inteiro positivo.\n");
    }

    return 0;
}

