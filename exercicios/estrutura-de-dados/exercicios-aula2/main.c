#include <stdio.h>
#include <stdlib.h>


/* Enunciado: Crie  uma  fun��o  recursiva  que  receba  um
  n�mero  inteiro  positivo  N  e calcule o somat�rio dos n�meros de 1 a N */

/* int soma (int n){
    if(n == 1){
        return 1;
    } else {
        return n = n + soma(n-1);
    }
}

int main()
{
    int n;

    printf("Para somar, digite um numero inteiro positivo: ");
    scanf("%i", &n);

    printf("A soma dos numeros ate %i = %i", n, soma(n));
} */



/*Enunciado: Implemente uma fun��o recursiva que, dados dois
  n�meros inteiros x e n, calcula o valor de xn*/

  int pot (int x, int n){
    if(n == 0){
        return printf("O expoente nao pode ser zero.");
    } else {
    return x = x * (pot (n-1);
    }
  }

  int main(){

  int x, n;

  printf("Insira o numero base: ");
  scanf("%i", &x);

  printf("Insira o numero expoente: ");
  scanf("%i", &n);

  printf("%i elevado a %i = %i", x, n, pot());
  }
