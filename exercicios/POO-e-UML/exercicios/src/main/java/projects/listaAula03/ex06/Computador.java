package projects.listaAula03.ex06;

/*
* 6 - Crie uma classe Computador com atributos como processador, memoriaRAM, e armazenamento.
* Adicione métodos para ligar e desligar o computador.*/

public class Computador {
    private String processador;
    private int memoriaRAM;
    private int armazenamento;

    public Computador(String processador, int memoriaRAM, int armazenamento) {
        this.processador = processador;
        this.memoriaRAM = memoriaRAM;
        this.armazenamento = armazenamento;
    }

    public String getProcessador() {
        return processador;
    }

    public void setProcessador(String processador) {
        this.processador = processador;
    }

    public int getMemoriaRAM() {
        return memoriaRAM;
    }

    public void setMemoriaRAM(int memoriaRAM) {
        this.memoriaRAM = memoriaRAM;
    }

    public int getArmazenamento() {
        return armazenamento;
    }

    public void setArmazenamento(int armazenamento) {
        this.armazenamento = armazenamento;
    }

    public void ligar() {
        System.out.println("O computador está ligado.");
    }

    public void desligar() {
        System.out.println("O computador está desligado.");
    }
}

