package projects.listaAula03.ex19;

public class LivroDigitalMetodos {
    public static void main(String[] args) {
        LivroDigital livro = new LivroDigital("1984", "George Orwell", 1.5);
        System.out.println("Título: " + livro.getTitulo());
        System.out.println("Autor: " + livro.getAutor());
        System.out.println("Tamanho do Arquivo: " + livro.getTamanhoArquivo() + " MB");

        livro.abrir();
        livro.fechar();
    }
}

