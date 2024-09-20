#include <stdio.h>

int Multip_Rec(int n1, int n2) {
    if (n2 == 0) {
        return 0;
    }
    if (n2 < 0) {
        return -Multip_Rec(n1, -n2);
    }
    return n1 + Multip_Rec(n1, n2 - 1);
}

int main() {
    int num1, num2;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);

    int resultado = Multip_Rec(num1, num2);
    printf("Resultado: %d\n", resultado);

    return 0;
}

