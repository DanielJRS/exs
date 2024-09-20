package projects.listaAula03.ex15;

public class JogoMetodos {
    public static void main(String[] args) {
        Jogo jogo = new Jogo("The Witcher 3", "RPG", 199.99);
        System.out.println("Nome: " + jogo.getNome());
        System.out.println("Gênero: " + jogo.getGenero());
        System.out.println("Preço: " + jogo.getPreco());

        jogo.iniciar();
        jogo.pausar();
    }
}

