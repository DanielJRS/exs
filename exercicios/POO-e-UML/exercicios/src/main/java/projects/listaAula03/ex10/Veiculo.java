package projects.listaAula03.ex10;

/*
* Crie uma classe Veiculo com atributos tipo, placa, e cor.
* Adicione métodos para abastecer e lavar o veículo.
* */

public class Veiculo {
    private String tipo;
    private String placa;
    private String cor;

    public Veiculo(String tipo, String placa, String cor) {
        this.tipo = tipo;
        this.placa = placa;
        this.cor = cor;
    }

    public String getTipo() {
        return tipo;
    }

    public void setTipo(String tipo) {
        this.tipo = tipo;
    }

    public String getPlaca() {
        return placa;
    }

    public void setPlaca(String placa) {
        this.placa = placa;
    }

    public String getCor() {
        return cor;
    }

    public void setCor(String cor) {
        this.cor = cor;
    }

    public void abastecer() {
        System.out.println("O veículo está sendo abastecido.");
    }

    public void lavar() {
        System.out.println("O veículo está sendo lavado.");
    }
}

