package projects.listaAula03.ex12;

/*
* Implemente uma classe Filme com atributos titulo, diretor, e duracao.
* Adicione métodos para iniciar e parar o filme.*/

public class Filme {
    private String titulo;
    private String diretor;
    private int duracao; // duração em minutos

    public Filme(String titulo, String diretor, int duracao) {
        this.titulo = titulo;
        this.diretor = diretor;
        this.duracao = duracao;
    }

    public String getTitulo() {
        return titulo;
    }

    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }

    public String getDiretor() {
        return diretor;
    }

    public void setDiretor(String diretor) {
        this.diretor = diretor;
    }

    public int getDuracao() {
        return duracao;
    }

    public void setDuracao(int duracao) {
        this.duracao = duracao;
    }

    public void iniciar() {
        System.out.println("O filme " + titulo + " está começando.");
    }

    public void parar() {
        System.out.println("O filme " + titulo + " foi interrompido.");
    }
}

