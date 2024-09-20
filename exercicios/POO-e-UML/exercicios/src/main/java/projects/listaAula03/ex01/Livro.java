package projects.listaAula03.ex01;

/*
* 1 - Crie uma classe chamada Livro com atributos como titulo, autor, e numeroDePaginas.
* Adicione métodos para abrir o livro e ler uma página.
*/

/*
Validação de valores nulos ou vazios: Nos campos de texto, como o título e autor, você pode validar se o valor é nulo ou uma string vazia, evitando que sejam atribuídos valores inválidos.

Validação de limites numéricos: No caso do número de páginas, você pode garantir que ele seja sempre maior que zero. Se o valor for inválido, você pode exibir uma mensagem ou lançar uma exceção.

Ajuste de outros atributos dependentes: Se o número de páginas mudar, você pode verificar se a página atual ainda é válida (não pode ser maior que o total de páginas) e ajustá-la, se necessário.

Controle de alterações irreversíveis: Você pode impedir que certos atributos, como o título ou o autor, sejam alterados após serem definidos uma vez, se isso fizer sentido para o comportamento da sua classe.
* */

public class Livro {
    private String titulo;
    private String autor;
    private int numeroDePaginas;
    private int paginaAtual;

    public Livro(String titulo, String autor, int numeroDePaginas) {
        this.titulo = titulo;
        this.autor = autor;
        this.numeroDePaginas = numeroDePaginas;
        this.paginaAtual = 0;
    }

    public void abrir() {
        this.paginaAtual = 1;
        System.out.println("Livro aberto na página " + this.paginaAtual);
    }

    public void lerPagina() {
        if (this.paginaAtual > 0 && this.paginaAtual <= this.numeroDePaginas) {
            System.out.println("Lendo página " + this.paginaAtual);
            if (paginaAtual > numeroDePaginas){
                System.out.println("Erro");
            } else {
                this.paginaAtual++;
            }
        } else {
            System.out.println("Você leu todas as páginas, não existem mais para ler.");
        }
    }

    public String getTitulo() {
        return titulo;
    }

    /*
    * Validação de valores nulos ou vazios: Nos campos de texto, como o título e autor, você pode validar se o valor é nulo ou uma string vazia, evitando que sejam atribuídos valores inválidos.*/

    public void setTitulo(String titulo) {
        if (titulo == null || titulo.trim().isEmpty()){
            System.out.println("O valor de título não pode ser nulo, adicione um valor.");
        } else {
            this.titulo = titulo;
        }
    }

    public String getAutor() {
        return autor;
    }

    public void setAutor(String autor) {
        if (autor == null || autor.trim().isEmpty()){
            System.out.println("O valor de autor não pode ser vazio, adicione um valor.");
        } else {
            this.autor = autor;
        }
    }

    public int getNumeroDePaginas() {
        return numeroDePaginas;
    }

    /*
    * Validação de limites numéricos: No caso do número de páginas, você pode garantir que ele seja sempre maior que zero. Se o valor for inválido, você pode exibir uma mensagem ou lançar uma exceção.*/

    public void setNumeroDePaginas(int numeroDePaginas) {
        if (numeroDePaginas <= 0){
            System.out.println("O número de páginas não pode ser menor ou igual a zero, por favor, adicione outro " +
                    "número de páginas.");
        }
    }
}