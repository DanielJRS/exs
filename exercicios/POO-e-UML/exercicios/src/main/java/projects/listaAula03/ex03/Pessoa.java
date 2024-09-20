package projects.listaAula03.ex03;

/*
* 3 - Implemente uma classe Pessoa com atributos nome, idade, e altura.
* Adicione um método que imprime uma apresentação da pessoa.
*/

public class Pessoa {
    public String nome;
    public int idade;
    public float altura;

    public Pessoa(String nome, int idade, float altura) {
        this.nome = nome;
        this.idade = idade;
        this.altura = altura;
    }

    public void apresentacao (){
        System.out.println("Olá, meu nome é " + this.nome + ", tenho " + this.idade + " anos e " + this.altura + "cm " +
                "de altura.");
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getIdade() {
        return idade;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }

    public float getAltura() {
        return altura;
    }

    public void setAltura(float altura) {
        this.altura = altura;
    }
}
