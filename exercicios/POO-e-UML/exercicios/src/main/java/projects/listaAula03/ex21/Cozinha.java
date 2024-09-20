package projects.listaAula03.ex21;

/*
* Implemente uma classe Cozinha com atributos tipo, quantidadePessoas, e cor.
* Adicione métodos para cozinhar e limpar.
* */

public class Cozinha {
    private String tipo;
    private int quantidadePessoas;
    private String cor;

    public Cozinha(String tipo, int quantidadePessoas, String cor) {
        this.tipo = tipo;
        this.quantidadePessoas = quantidadePessoas;
        this.cor = cor;
    }

    public String getTipo() {
        return tipo;
    }

    public void setTipo(String tipo) {
        this.tipo = tipo;
    }

    public int getQuantidadePessoas() {
        return quantidadePessoas;
    }

    public void setQuantidadePessoas(int quantidadePessoas) {
        this.quantidadePessoas = quantidadePessoas;
    }

    public String getCor() {
        return cor;
    }

    public void setCor(String cor) {
        this.cor = cor;
    }

    public void cozinhar() {
        System.out.println("A cozinha está em uso para cozinhar.");
    }

    public void limpar() {
        System.out.println("A cozinha está sendo limpa.");
    }
}

