/*
3. Fa�a um programa que leia um n�mero N e:
� Crie dinamicamente e leia um vetor de inteiro de N posi��es;
� Leia um n�mero inteiro X e conte e mostre os m�ltiplos desse n�mero que existem no vetor
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, X, *vetor, multiplos = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);

    vetor = (int*) malloc(N * sizeof(int));

    if (vetor == NULL) {
        printf("Erro ao alocar memoria\n");
        return 1;
    }

    printf("Digite os valores do vetor:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite o valor de X: ");
    scanf("%d", &X);

    for (int i = 0; i < N; i++) {
        if (vetor[i] % X == 0) {
            multiplos++;
        }
    }

    printf("Numero de multiplos de %d: %d\n", X, multiplos);

    free(vetor);

    return 0;
}
