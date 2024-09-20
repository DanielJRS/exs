package projects.listaAula03.ex19;

/*
* Defina uma classe LivroDigital com atributos como titulo, autor, e tamanhoArquivo.
* Adicione métodos para abrir e fechar o livro.
* */

public class LivroDigital {
    private String titulo;
    private String autor;
    private double tamanhoArquivo; // tamanho em MB

    public LivroDigital(String titulo, String autor, double tamanhoArquivo) {
        this.titulo = titulo;
        this.autor = autor;
        this.tamanhoArquivo = tamanhoArquivo;
    }

    public String getTitulo() {
        return titulo;
    }

    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }

    public String getAutor() {
        return autor;
    }

    public void setAutor(String autor) {
        this.autor = autor;
    }

    public double getTamanhoArquivo() {
        return tamanhoArquivo;
    }

    public void setTamanhoArquivo(double tamanhoArquivo) {
        this.tamanhoArquivo = tamanhoArquivo;
    }

    public void abrir() {
        System.out.println("O livro digital " + titulo + " está aberto.");
    }

    public void fechar() {
        System.out.println("O livro digital " + titulo + " está fechado.");
    }
}

