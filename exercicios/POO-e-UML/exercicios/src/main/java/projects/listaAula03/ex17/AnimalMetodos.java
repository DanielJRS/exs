package projects.listaAula03.ex17;

public class AnimalMetodos {
    public static void main(String[] args) {
        Animal animal = new Animal("Leão", 5, 190.5);
        System.out.println("Espécie: " + animal.getEspecie());
        System.out.println("Idade: " + animal.getIdade());
        System.out.println("Peso: " + animal.getPeso());

        animal.alimentar();
        animal.dormir();
    }
}

