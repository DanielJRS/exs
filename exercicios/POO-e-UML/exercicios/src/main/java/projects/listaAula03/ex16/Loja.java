package projects.listaAula03.ex16;

/*
* Crie uma classe Loja com atributos nome, endereco, e telefone.
* Adicione métodos para abrir e fechar a loja.*/

public class Loja {
    private String nome;
    private String endereco;
    private String telefone;

    public Loja(String nome, String endereco, String telefone) {
        this.nome = nome;
        this.endereco = endereco;
        this.telefone = telefone;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getEndereco() {
        return endereco;
    }

    public void setEndereco(String endereco) {
        this.endereco = endereco;
    }

    public String getTelefone() {
        return telefone;
    }

    public void setTelefone(String telefone) {
        this.telefone = telefone;
    }

    public void abrir() {
        System.out.println("A loja " + nome + " está aberta.");
    }

    public void fechar() {
        System.out.println("A loja " + nome + " está fechada.");
    }
}

