package projects.listaAula03.ex11;

/*
* Crie uma classe Cidade com atributos nome, populacao, e estado.
* Adicione métodos para aumentar e diminuir a população.
* */

public class Cidade {
    private String nome;
    private int populacao;
    private String estado;

    public Cidade(String nome, int populacao, String estado) {
        this.nome = nome;
        this.populacao = populacao;
        this.estado = estado;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getPopulacao() {
        return populacao;
    }

    public void setPopulacao(int populacao) {
        this.populacao = populacao;
    }

    public String getEstado() {
        return estado;
    }

    public void setEstado(String estado) {
        this.estado = estado;
    }

    public void aumentarPopulacao(int quantidade) {
        if (quantidade > 0) {
            this.populacao += quantidade;
        }
    }

    public void diminuirPopulacao(int quantidade) {
        if (quantidade > 0 && this.populacao >= quantidade) {
            this.populacao -= quantidade;
        }
    }
}

