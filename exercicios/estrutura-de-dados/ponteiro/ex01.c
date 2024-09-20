/*
1. Escreva um programa que declare um inteiro, um real e um char, e ponteiros para cada
um deles. Associe as variáveis aos ponteiros (use &). Modifique os valores de cada
variável usando os ponteiros. Imprima os valores das variáveis antes e após a
modificação.
*/

#include <stdio.h>

int main() {
    int inteiro = 10;
    float real = 3.14;
    char caractere = 'A';

    int *ptr_inteiro = &inteiro;
    float *ptr_real = &real;
    char *ptr_caractere = &caractere;

    printf("Antes da modificacao:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);

    *ptr_inteiro = 20;
    *ptr_real = 6.28;
    *ptr_caractere = 'B';

    printf("Apos a modificacao:\n");
    printf("Inteiro: %d\n", *ptr_inteiro);
    printf("Real: %.2f\n", *ptr_real);
    printf("Caractere: %c\n", *ptr_caractere);

    return 0;
}

