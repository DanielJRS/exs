/*
9. Considere um cadastro de produtos de um estoque, com as seguintes informações para cada produto:
• Código de identificação do produto: representado por um valor inteiro
• Nome do produto: com até 50 caracteres
• Quantidade disponível no estoque: representado por um número inteiro
• Preço de venda: representado por um valor real
a) Defina uma estrutura, denominada produto, que tenha os campos apropriados para guardar as
informações de um produto;
b) Aloque inicialmente memória para 1 produto e deixe a critério do usuário (realloc) a inserção de
mais unidades do mesmo;
c) Encontre o produto com o maior preço de venda;
d) Encontre o produto com a maior quantidade disponível no estoque.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Produto {
    int codigo;
    char nome[50];
    int quantidade;
    float preco;
};

int main() {
    int num_produtos = 1;
    struct Produto *produtos = (struct Produto*) malloc(num_produtos * sizeof(struct Produto));
    int opcao;

    do {
        printf("Digite o codigo do produto: ");
        scanf("%d", &produtos[num_produtos - 1].codigo);
        printf("Digite o nome do produto: ");
        scanf("%s", produtos[num_produtos - 1].nome);
        printf("Digite a quantidade do produto: ");
        scanf("%d", &produtos[num_produtos - 1].quantidade);
        printf("Digite o preco do produto: ");
        scanf("%f", &produtos[num_produtos - 1].preco);

        printf("Deseja adicionar mais um produto? (1-Sim, 0-Nao): ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            num_produtos++;
            produtos = (struct Produto*) realloc(produtos, num_produtos * sizeof(struct Produto));
        }
    } while (opcao == 1);

    struct Produto *produto_maior_preco = &produtos[0];
    struct Produto *produto_maior_quantidade = &produtos[0];

    for (int i = 1; i < num_produtos; i++) {
        if (produtos[i].preco > produto_maior_preco->preco) {
            produto_maior_preco = &produtos[i];
        }
        if (produtos[i].quantidade > produto_maior_quantidade->quantidade) {
            produto_maior_quantidade = &produtos[i];
        }
    }

    printf("Produto com maior preco: %s, Codigo: %d, Preco: %.2f\n",
           produto_maior_preco->nome, produto_maior_preco->codigo, produto_maior_preco->preco);
    printf("Produto com maior quantidade: %s, Codigo: %d, Quantidade: %d\n",
           produto_maior_quantidade->nome, produto_maior_quantidade->codigo, produto_maior_quantidade->quantidade);

    free(produtos);

    return 0;
}

