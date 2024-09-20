/*
8. Crie um programa que declare uma estrutura (struct) para o cadastro de alunos.
a) Deverão ser armazenados, para cada aluno: matrícula, sobrenome (apenas um) e ano de
nascimento;
b) Ao início do programa, o usuário deverá informar o número de alunos que serão armazenados;
c) O programa deverá alocar dinamicamente a quantidade necessária de memória para armazenar
os registros dos alunos;
d) O programa deverá pedir ao usuário que entre com as informações dos alunos;
e) Ao final, mostrar os dados armazenados e liberar a memória alocada.
*/

#include <stdio.h>
#include <stdlib.h>

struct Aluno {
    int matricula;
    char sobrenome[50];
    int ano_nascimento;
};

int main() {
    int num_alunos;

    printf("Digite o numero de alunos: ");
    scanf("%d", &num_alunos);

    struct Aluno *alunos = (struct Aluno*) malloc(num_alunos * sizeof(struct Aluno));

    if (alunos == NULL) {
        printf("Erro ao alocar memoria\n");
        return 1;
    }

    for (int i = 0; i < num_alunos; i++) {
        printf("Digite a matricula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);
        printf("Digite o sobrenome do aluno %d: ", i + 1);
        scanf("%s", alunos[i].sobrenome);
        printf("Digite o ano de nascimento do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].ano_nascimento);
    }

    printf("\nDados dos alunos:\n");
    for (int i = 0; i < num_alunos; i++) {
        printf("Aluno %d: Matricula: %d, Sobrenome: %s, Ano de Nascimento: %d\n",
               i + 1, alunos[i].matricula, alunos[i].sobrenome, alunos[i].ano_nascimento);
    }

    free(alunos);

    return 0;
}

