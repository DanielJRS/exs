/*
6. Escreva uma fun��o que dado um n�mero real passado como par�metro, retorne a
parte inteira e a parte fracion�ria deste n�mero. Escreva um programa que chama esta
fun��o.
Prot�tipo:
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


