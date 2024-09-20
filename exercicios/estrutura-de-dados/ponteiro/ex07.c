/*
Implemente uma fun��o que calcule a �rea da superf�cie e o volume de uma esfera de
raio R. Essa fun��o deve obedecer ao prot�tipo:
void calc_esfera(float R, float *area, float *volume)
A �rea da superf�cie e o volume s�o dados, respectivamente, por:
A = 4 * pi * R2
V = 4/3 * pi * R3
*/

#include <stdio.h>
#define PI 3.14159

void calc_esfera(float R, float *area, float *volume) {
    *area = 4 * PI * R * R;
    *volume = (4.0 / 3.0) * PI * R * R * R;
}

int main() {
    float raio, area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    calc_esfera(raio, &area, &volume);

    printf("Area da superficie: %.2f\n", area);
    printf("Volume: %.2f\n", volume);

    return 0;
}



