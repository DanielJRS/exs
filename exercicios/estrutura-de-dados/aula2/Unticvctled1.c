#include <stdlib.h>
#include <stdio.h>

int main(){

    int num;

    printf("Digite um número: ");
    scanf("%i", &num);

    if(num == 0){
        printf("O número é igual a zero.");
    } else if (num < 0){
        printf("O número %i é negativo.", &num);
    } else {
        printf("O número %i é positivo.", &num);
    }

}
