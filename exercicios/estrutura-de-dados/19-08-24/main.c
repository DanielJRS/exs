#include <stdio.h>
#include <stdlib.h>

int main(){

    /*
    int *x, i, *x1, *x2;
    x = (int *) malloc(5 * sizeof(int));
    if (x == NULL){
        printf("Erro de aloca��o.");
        exit(1);
    }

    for (i = 0; i < 5; i++){
        printf("Informe posicao x[%d]: \n", i);
        scanf("%d", &x[i]);
    }

    for(i = 0; i < 5; i++){
        printf("%5d \n", x[i]);
    }*/
    //*********************************************

    /*
    x1 = (int *) realloc(x,10 * sizeof(int));
    for (i = 5; i < 10; i++){
        printf("Informe posicao x1[%d]: \n", i);
        scanf("%d", &x1[i]);
    }

    for(i = 0; i < 10; i++){
        printf("%5d \n", x1[i]);
    }
    //**********************************************
    x2 = (int *) realloc(x1, 8 * sizeof(int));

    /*for (i = 5; i < 10; i++){
        printf("Informe posicao x1[%d]: \n", i);
        scanf("%d", &x1[i]);
    }*/
    /*
    for(i = 0; i < 8; i++){
        printf("%5d \n", x2[i]);
    }

    free(x);
    free(x1);

    /*
    int x;
    x = sizeof(int);
    printf("Tamanho do int em bytes: %i \n", x);

    x = sizeof(float);
    printf("Tamanho do float em bytes: %i \n", x);

    x = sizeof(double);
    printf("Tamanho do double em bytes: %i \n", x);

    x = sizeof(char);
    printf("Tamanho do char em bytes: %i", x);*/

    /*Fa�a um programa que leia do usu�rio o tamanho de um vetor a ser lido e fa�a a aloca��o din�mica de mem�ria.
    Em seguida, leia do usu�rio seus valores e mostre quantos dos n�meros s�o pares e quantos s�o �mpares.*/


    int vetor, *x;
    int i;

    printf("Digite o tamanho do vetor a ser lido: ");
    scanf("%d", &vetor);

    /*x = (int *) malloc (vetor * sizeof(int));

    for (i = 0; i < vetor; i++){
        printf("Preencha o %d� valor do vetor: ", i);
        scanf("%d", i[])
    }*/


}
