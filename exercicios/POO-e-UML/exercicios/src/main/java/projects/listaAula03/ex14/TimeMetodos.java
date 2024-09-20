package projects.listaAula03.ex14;

public class TimeMetodos {
    public static void main(String[] args) {
        Time time = new Time("Flamengo", "Jorge Jesus");
        System.out.println("Nome do Time: " + time.getNome());
        System.out.println("Técnico: " + time.getTecnico());
        System.out.println("Número de Jogadores: " + time.getNumeroDeJogadores());

        time.adicionarJogador("Gabigol");
        time.adicionarJogador("Arrascaeta");
        System.out.println("Jogadores: " + time.getJogadores());
        System.out.println("Número de Jogadores após adição: " + time.getNumeroDeJogadores());

        time.removerJogador("Gabigol");
        System.out.println("Jogadores: " + time.getJogadores());
        System.out.println("Número de Jogadores após remoção: " + time.getNumeroDeJogadores());
    }
}

