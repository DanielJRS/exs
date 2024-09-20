#include <stdio.h>
/*
2. Escreva um programa que contenha duas variáveis inteiras. Compare o endereço de
ambas e exiba o maior.
*/
int main() {
    int var1, var2;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &var1, &var2);

    if (&var1 > &var2) {
        printf("O endereco de var1 (%p) e maior que o endereco de var2 (%p)\n", (void*)&var1, (void*)&var2);
    } else {
        printf("O endereco de var2 (%p) e maior que o endereco de var1 (%p)\n", (void*)&var2, (void*)&var1);
    }

    return 0;
}

