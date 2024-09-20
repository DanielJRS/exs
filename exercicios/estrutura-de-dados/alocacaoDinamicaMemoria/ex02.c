/*
2. Fa�a um programa que receba do usu�rio o tamanho de uma string e chame uma fun��o para alocar
dinamicamente essa string. Em seguida, o usu�rio dever� informar o conte�do dessa string. O programa
imprime a string sem suas vogais.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void removeVogais(char *str) {
    int i, j = 0;
    int tamanho = strlen(str);
    char *novaStr = (char*) malloc(tamanho + 1);

    for (i = 0; i < tamanho; i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            novaStr[j++] = str[i];
        }
    }
    novaStr[j] = '\0';
    strcpy(str, novaStr);
    free(novaStr);
}

int main() {
    int tamanho;
    char *str;

    printf("Digite o tamanho da string: ");
    scanf("%d", &tamanho);

    str = (char*) malloc((tamanho + 1) * sizeof(char));

    if (str == NULL) {
        printf("Erro ao alocar memoria\n");
        return 1;
    }

    printf("Digite a string: ");
    scanf(" %[^\n]", str);

    removeVogais(str);

    printf("String sem vogais: %s\n", str);

    free(str);

    return 0;
}



