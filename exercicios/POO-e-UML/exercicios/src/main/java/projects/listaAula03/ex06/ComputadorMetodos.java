package projects.listaAula03.ex06;

public class ComputadorMetodos {
    public static void main(String[] args) {
        Computador computador = new Computador("AMD Ryzen 5 3500U", 16, 240);
        System.out.println("Processador: " + computador.getProcessador());
        System.out.println("Memória RAM: " + computador.getMemoriaRAM() + "GB");
        System.out.println("Armazenamento: " + computador.getArmazenamento() + "GB");

        computador.ligar();
        computador.desligar();
    }
}

