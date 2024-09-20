#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que declare um inteiro, um real e um char, e ponteiros para cada um  deles.Associe  as  variáveis  aos  ponteiros  (use  &).
Modifique  os  valores  de  cada variável   usando   os   ponteiros.   Imprima   os   valores   das   variáveis   antes   e   após   a modificação.
*/

int main (){

int i = 10;
float f = 5.00;
char c = 'b';

int *ptr1;
float *ptr2;
char *ptr3;

ptr1 = &i;
ptr2 = &f;
ptr3 = &c;

printf("O valor da variavel i = %i\n", i);
printf("O valor da variavel f = %f\n", f);
printf("O valor da variavel c = %c\n", c);

*ptr1 = 20;
*ptr2 = 6;
*ptr3 = 'd';

printf("\nO valor da variavel apos mudar: %d\n", *ptr1);
printf("O valor da variavel apos mudar: %f\n", *ptr2);
printf("O valor da variavel apos mudar: %c\n", *ptr3);

}
