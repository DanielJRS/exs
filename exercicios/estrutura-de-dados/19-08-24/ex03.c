#include <stdio.h>

struct produto {
    int cod, qtda;
    char nome[20];
    float valor;
    }
int main (){
    struct produto, *prod;
    char op;
    int n = 1, i = 0;
    prod = (struct produto*) malloc (n * sizeof(struct produto));
    do {
        for(i = n - 1, i < n; i++){
            printf("Informe produto \n Codigo: \n");
            scanf("%i", &prod[i].cod);
            printf("Nome: \n");
            fflush(stdin);
            gets(prod [i].nome);
            printf("Quantidade: \n");
            scanf("%i", &prod[i].qtda);
            printf("Valor: \n");
            scanf("%f", &prod[i].valor);
            printf("O codigo do produto: %i \n", prod[].cod);
            printf("O nome do produto: %i \n", prod[].nome);
            printf("Quantidade do produto: %i \n", prod[].qtda);
            printf("O valor do produto: %f \n", prod[].valor);
        }
        printf("Deseja inserir mais produtos: \n");
            scanf("%s", &op);

        if (op == 's' || op == 'S'){
            n++;
            prod = (struct produto *) realloc (prod, n * sizeof(struct produto));
        }
    }
}

