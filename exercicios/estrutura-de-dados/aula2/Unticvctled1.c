#include <stdlib.h>
#include <stdio.h>

int main(){

    int num;

    printf("Digite um n�mero: ");
    scanf("%i", &num);

    if(num == 0){
        printf("O n�mero � igual a zero.");
    } else if (num < 0){
        printf("O n�mero %i � negativo.", &num);
    } else {
        printf("O n�mero %i � positivo.", &num);
    }

}
