#include <stdio.h>

//Implementar uma fun��o recursiva que, dados dois n�meros inteiros x e n, calcula o valor de xn.

int fatorial (int n){
    if (n == 1){
    return 1;
    }else{
        return (n * fatorial(n-1));
    }
}

int main(){
    int n;
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &n);
    printf("%d! = %d\n", n, fatorial(n));
    }
