package projects.listaAula03.ex02;


/*
* 2 - Defina uma classe Celular com atributos como marca, modelo, e capacidadeBateria.
* Adicione métodos para ligar e desligar o celular.
*/

public class Celular {
    public String marca;
    public String modelo;
    public int capacidadeBateria;
    public boolean status = true;

    public Celular(String marca, String modelo, int capacidadeBateria) {
        this.marca = marca;
        this.modelo = modelo;
        this.capacidadeBateria = capacidadeBateria;
    }

    public void ligar (){
        if (this.status){
            System.out.println("O celular está ligado.");
        } else {
            System.out.println("O celular está desligado.");
        }
    }

    public void desligar (){
        System.out.println("O celular está desligado.");
    }

    public boolean getstatus (){
        return status;
    }

    public void setstatus (boolean status) {
        this.status = status;
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

    public int getCapacidadeBateria() {
        return capacidadeBateria;
    }

    public void setCapacidadeBateria(int capacidadeBateria) {
        this.capacidadeBateria = capacidadeBateria;
    }
}
