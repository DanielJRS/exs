#include <stdio.h>

//Usando a recursividade, calcule a soma de todos os valores de um vetor  de tamanho definido pelo usuário de reais.

float soma (float vet[], int n){//recursiva
    if (n == 0){
    return 0;
    }else{
        return vet[n-1] + soma(vet, n-1);
    }
}

int main(){
    int n, i;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    float vet[n];
    printf("Preencha o vetor com %d valores\n", n);
    for (i=0; i<n; i++){
        vet[i] = rand()%100;
    }
    for (i=0; i<n; i++){
        printf("%.2f ", vet[i]);
    }
    printf("\na soma de todas as posições do vetor é %f\n", soma(vet,n));
}
