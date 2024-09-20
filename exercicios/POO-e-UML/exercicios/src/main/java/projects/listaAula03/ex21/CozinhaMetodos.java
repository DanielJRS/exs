package projects.listaAula03.ex21;

public class CozinhaMetodos {
    public static void main(String[] args) {
        Cozinha cozinha = new Cozinha("Industrial", 5, "Branca");
        System.out.println("Tipo: " + cozinha.getTipo());
        System.out.println("Quantidade de Pessoas: " + cozinha.getQuantidadePessoas());
        System.out.println("Cor: " + cozinha.getCor());

        cozinha.cozinhar();
        cozinha.limpar();
    }
}
