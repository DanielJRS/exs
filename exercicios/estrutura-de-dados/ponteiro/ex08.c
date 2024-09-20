/*
8. Desenvolva um programa que leia a quantidade total de segundos e converta para
Horas, Minutos e Segundos. Imprima o resultado da conversão no formato HH:MM:SS.
Para isso, utilize a função com protótipo:
void converteHora(int total segundos, int *hora, int *min, int *seg)
*/

#include <stdio.h>

void converteHora(int total_segundos, int *hora, int *min, int *seg) {
    *hora = total_segundos / 3600;
    total_segundos %= 3600;
    *min = total_segundos / 60;
    *seg = total_segundos % 60;
}

int main() {
    int total_segundos, hora, min, seg;

    printf("Digite a quantidade total de segundos: ");
    scanf("%d", &total_segundos);

    converteHora(total_segundos, &hora, &min, &seg);

    printf("HH:MM:SS - %02d:%02d:%02d\n", hora, min, seg);

    return 0;
}

