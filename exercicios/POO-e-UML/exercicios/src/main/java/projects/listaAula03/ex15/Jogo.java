package projects.listaAula03.ex15;

/*
*  Crie uma classe Jogo com atributos nome, genero, e preco.
* Adicione métodos para iniciar e pausar o jogo.*/

public class Jogo {
    private String nome;
    private String genero;
    private double preco;

    public Jogo(String nome, String genero, double preco) {
        this.nome = nome;
        this.genero = genero;
        this.preco = preco;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getGenero() {
        return genero;
    }

    public void setGenero(String genero) {
        this.genero = genero;
    }

    public double getPreco() {
        return preco;
    }

    public void setPreco(double preco) {
        this.preco = preco;
    }

    public void iniciar() {
        System.out.println("O jogo " + nome + " está começando.");
    }

    public void pausar() {
        System.out.println("O jogo " + nome + " foi pausado.");
    }
}

