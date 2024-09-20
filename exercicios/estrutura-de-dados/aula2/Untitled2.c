#include <stdio.h>

//Implementar uma função recursiva que, dados dois números inteiros x e n, calcula o valor de xn.

int fatorial (int n1, int n2){
    if (n2 == 0){ //potência igual a zero retorna 1
    return 1;
    }else{
        return (n1 * fatorial(n1,n2-1));
    }
}

int main(){
    int n1, n2;

    printf("Digite um número inteiro (base): ");
    scanf("%d", &n1);
    printf("Digite outro número inteiro (expoente): ");
    scanf("%d", &n2);
    printf("O resultado de %d elevado a %d = %d\n", n1,n2, fatorial(n1,n2));
    }
