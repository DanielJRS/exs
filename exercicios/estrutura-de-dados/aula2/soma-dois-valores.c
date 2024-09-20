#include <stdio.h>

//Pedir dois valores e multiplicá-los.

int mult (int n1, int n2){
    if (n2 == 0){
    return 0;
    }else{
        return n1 + mult(n1, n2-1);
    }
}

int main(){
    int n1, n2;

    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);
    printf("O resultado de %d + %d = %d\n", n1,n2, mult(n1,n2));
    }
