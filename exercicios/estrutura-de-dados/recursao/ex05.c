#include <stdio.h>

int Comb(int n, int k) {
    if (k == 1 || k == n) {
        return 1;
    }
    return Comb(n - 1, k - 1) + Comb(n - 1, k);
}

int main() {
    int n, k;
    printf("Digite o valor de n e k: ");
    scanf("%d %d", &n, &k);

    int resultado = Comb(n, k);
    printf("Numero de grupos distintos: %d\n", resultado);

    return 0;
}
