#include <stdio.h>
#include <stdlib.h>

/*
Escreva  um  programa  que  contenha  duas  vari�veis  inteiras.  Compare  o  endere�o  de ambas e exiba o maior.
*/

int main (){
int valor1 = 5;
int valor2 = 20;

int *p_v1  = &valor1;
int *p_v2 = &valor2;

if(p_v1 > p_v2){
    printf("Ponteiro valor1 � maior que valor2 %p %p", p_v1, p_v2);
} else {
    printf("Ponteiro valor2 � maior que valor1 %x %x", p_v2, p_v1);
    }
}

