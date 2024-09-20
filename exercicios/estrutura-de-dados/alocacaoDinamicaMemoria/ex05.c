/*
5. Fa�a um programa que leia uma quantidade qualquer de n�meros armazenando-os na mem�ria e pare
a leitura quando o usu�rio entrar um n�mero negativo. Em seguida, imprima o vetor lido. Use a fun��o
REALLOC.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor = NULL;
    int tamanho = 0;
    int numero;

    printf("Digite numeros (negativo para parar):\n");

    while (1) {
        scanf("%d", &numero);
        if (numero < 0) {
            break;
        }
        vetor = realloc(vetor, (tamanho + 1) * sizeof(int));
        if (vetor == NULL) {
            printf("Erro ao alocar memoria\n");
            return 1;
        }
        vetor[tamanho] = numero;
        tamanho++;
    }

    printf("Vetor lido:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;
}
