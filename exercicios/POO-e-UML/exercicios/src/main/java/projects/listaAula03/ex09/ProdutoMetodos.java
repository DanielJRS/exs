package projects.listaAula03.ex09;

public class ProdutoMetodos {
    public static void main(String[] args) {
        Produto produto = new Produto("Notebook", 2500.0, 10);
        System.out.println("Nome: " + produto.getNome());
        System.out.println("Preço: " + produto.getPreco());
        System.out.println("Quantidade em Estoque: " + produto.getQuantidadeEstoque());

        produto.aumentarEstoque(5);
        System.out.println("Quantidade em Estoque após aumento: " + produto.getQuantidadeEstoque());

        produto.diminuirEstoque(3);
        System.out.println("Quantidade em Estoque após diminuição: " + produto.getQuantidadeEstoque());
    }
}

