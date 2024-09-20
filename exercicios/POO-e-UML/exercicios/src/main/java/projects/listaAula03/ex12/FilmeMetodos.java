package projects.listaAula03.ex12;

public class FilmeMetodos {
    public static void main(String[] args) {
        Filme filme = new Filme("Inception", "Christopher Nolan", 148);
        System.out.println("Título: " + filme.getTitulo());
        System.out.println("Diretor: " + filme.getDiretor());
        System.out.println("Duração: " + filme.getDuracao() + " minutos");

        filme.iniciar();
        filme.parar();
    }
}

