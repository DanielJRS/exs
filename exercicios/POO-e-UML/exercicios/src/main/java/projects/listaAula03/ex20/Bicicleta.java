package projects.listaAula03.ex20;

/*
 * Crie uma classe Bicicleta com atributos marca, modelo, e tamanhoRoda.
 * Adicione métodos para pedalar e frear.
 * */

public class Bicicleta {
    private String marca;
    private String modelo;
    private int tamanhoRoda;

    public Bicicleta(String marca, String modelo, int tamanhoRoda) {
        this.marca = marca;
        this.modelo = modelo;
        this.tamanhoRoda = tamanhoRoda;
    }

    public String getMarca() {
        return marca;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    public String getModelo() {
        return modelo;
    }

    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    public int getTamanhoRoda() {
        return tamanhoRoda;
    }

    public void setTamanhoRoda(int tamanhoRoda) {
        this.tamanhoRoda = tamanhoRoda;
    }

    public void pedalar() {
        System.out.println("A bicicleta está sendo pedalada.");
    }

    public void frear() {
        System.out.println("A bicicleta está freando.");
    }
}

