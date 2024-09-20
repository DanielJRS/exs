/*
5. Faça uma função chamada primo que recebe como parâmetro um inteiro m e dois
outros inteiros p1 e p2 passados por referência. A função deve retornar em p1 o maior
número primo que é menor do que m e deve retornar em p2 o menor número primo que é
maior do que m.
*/

#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

void primo(int m, int *p1, int *p2) {
    *p1 = m - 1;
    while (*p1 > 1 && !ehPrimo(*p1)) {
        (*p1)--;
    }

    *p2 = m + 1;
    while (!ehPrimo(*p2)) {
        (*p2)++;
    }
}

int main() {
    int m, p1, p2;

    printf("Digite um numero inteiro: ");
    scanf("%d", &m);

    primo(m, &p1, &p2);

    printf("Maior primo menor que %d: %d\n", m, p1);
    printf("Menor primo maior que %d: %d\n", m, p2);

    return 0;
}

