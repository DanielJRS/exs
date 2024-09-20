#include <stdio.h>
#include <stdlib.h>

/*
Escreva  um  programa  que  contenha  duas  variáveis  inteiras.  Leia  essas  variáveis  do teclado.
Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.
*/



int main (){

int valor1;
int valor2;

int *p_v1 = &valor1;
int *p_v2 = &valor2;

printf("Digite o valor 1: ");
scanf("%i", p_v1);
printf("Digite o valor 2: ");
scanf("%i", p_v2);

if(p_v1 > p_v2){
    printf("Ponteiro valor1 eh maior que valor2 %x %x", p_v1, p_v2);
} else {
    printf("Ponteiro valor2 eh maior que valor1 %x %x", p_v2, p_v1);
    }
}
