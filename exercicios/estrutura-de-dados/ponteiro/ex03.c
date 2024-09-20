/*
3. Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do
teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.
*/

#include <stdio.h>

int main() {
    int var1, var2;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &var1, &var2);

    if (&var1 > &var2) {
        printf("Conteudo do maior endereco: %d\n", var1);
    } else {
        printf("Conteudo do maior endereco: %d\n", var2);
    }

    return 0;
}

