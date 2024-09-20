package projects.listaAula03.ex11;

public class CidadeMetodos {
    public static void main(String[] args) {
        Cidade cidade = new Cidade("Toledo", 140000, "Paraná");
        System.out.println("Nome: " + cidade.getNome());
        System.out.println("População: " + cidade.getPopulacao());
        System.out.println("Estado: " + cidade.getEstado());

        cidade.aumentarPopulacao(5000);
        System.out.println("População após aumento: " + cidade.getPopulacao());

        cidade.diminuirPopulacao(2000);
        System.out.println("População após diminuição: " + cidade.getPopulacao());
    }
}

