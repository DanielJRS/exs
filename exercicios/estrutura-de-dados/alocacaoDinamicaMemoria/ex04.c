/*
4. Escreva um programa que leia primeiro os 6 n�meros gerados pela loteria e depois os 6 n�meros do seu
bilhete. O programa ent�o compara quantos n�meros o jogador acertou. Em seguida, ele aloca espa�o para
um vetor de tamanho igual a quantidade de n�meros corretos e guarda os n�meros corretos nesse vetor.
Finalmente, o programa exibe os n�meros sorteados e os seus n�meros corretos.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int loteria[6], bilhete[6], acertos = 0;

    printf("Digite os 6 numeros sorteados pela loteria:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &loteria[i]);
    }

    printf("Digite os 6 numeros do seu bilhete:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &bilhete[i]);
    }

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (bilhete[i] == loteria[j]) {
                acertos++;
                break;
            }
        }
    }

    int *numeros_corretos = (int*) malloc(acertos * sizeof(int));
    int index = 0;

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (bilhete[i] == loteria[j]) {
                numeros_corretos[index++] = bilhete[i];
                break;
            }
        }
    }

    printf("Numeros sorteados: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", loteria[i]);
    }
    printf("\n");

    printf("Numeros corretos: ");
    for (int i = 0; i < acertos; i++) {
        printf("%d ", numeros_corretos[i]);
    }
    printf("\n");

    free(numeros_corretos);

    return 0;
}
