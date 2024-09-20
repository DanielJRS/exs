#include <stdio.h>

int Soma_Digitos(int num) {
    if (num == 0) {
        return 0;
    }
    return (num % 10) + Soma_Digitos(num / 10);
}

int main() {
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    int resultado = Soma_Digitos(numero);
    printf("Soma dos digitos: %d\n", resultado);

    return 0;
}

