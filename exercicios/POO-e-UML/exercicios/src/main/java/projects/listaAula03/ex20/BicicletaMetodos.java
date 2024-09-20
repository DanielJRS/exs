package projects.listaAula03.ex20;

public class BicicletaMetodos {
    public static void main(String[] args) {
        Bicicleta bicicleta = new Bicicleta("Caloi", "Mountain Bike", 29);
        System.out.println("Marca: " + bicicleta.getMarca());
        System.out.println("Modelo: " + bicicleta.getModelo());
        System.out.println("Tamanho da Roda: " + bicicleta.getTamanhoRoda());

        bicicleta.pedalar();
        bicicleta.frear();
    }
}

