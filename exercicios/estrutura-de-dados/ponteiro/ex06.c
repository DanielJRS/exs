/*
6. Escreva uma função que dado um número real passado como parâmetro, retorne a
parte inteira e a parte fracionária deste número. Escreva um programa que chama esta
função.
Protótipo:
void frac(float num, int* inteiro, float* frac);
*/
#include <stdio.h>

void frac(float num, int* inteiro, float* frac) {
    *inteiro = (int) num;
    *frac = num - *inteiro;
}

int main() {
    float numero;
    int parteInteira;
    float parteFracionaria;

    printf("Digite um numero real: ");
    scanf("%f", &numero);

    frac(numero, &parteInteira, &parteFracionaria);

    printf("Parte inteira: %d\n", parteInteira);
    printf("Parte fracionaria: %.2f\n", parteFracionaria);

    return 0;
}


