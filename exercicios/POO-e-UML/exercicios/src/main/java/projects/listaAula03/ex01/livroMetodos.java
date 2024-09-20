package projects.listaAula03.ex01;

public class livroMetodos {

    public static void main(String[] args) {

        Livro livro = new Livro("teste", "Daniel", 3);

        livro.setTitulo("");
        livro.setAutor("     ");
        System.out.println(livro.getTitulo());
    }
}
