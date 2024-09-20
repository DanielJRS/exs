package projects.listaAula03.ex05;

public class testeCachorro {
    public static void main(String[] args) {
        Cachorro cachorro = new Cachorro("Rex", "Labrador", 3);
        System.out.println("Nome: " + cachorro.getNome());
        System.out.println("Raça: " + cachorro.getRaca());
        System.out.println("Idade: " + cachorro.getIdade());

        cachorro.latir();
        cachorro.correr();
    }
}

