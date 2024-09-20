package projects.listaAula03.ex14;

/*
* Defina uma classe Time com atributos como nome, tecnico, e numeroDeJogadores.
* Adicione métodos para adicionar e remover jogadores.*/

import java.util.ArrayList;

public class Time {
    private String nome;
    private String tecnico;
    private int numeroDeJogadores;
    private ArrayList<String> jogadores;

    public Time(String nome, String tecnico) {
        this.nome = nome;
        this.tecnico = tecnico;
        this.jogadores = new ArrayList<>();
        this.numeroDeJogadores = 0;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getTecnico() {
        return tecnico;
    }

    public void setTecnico(String tecnico) {
        this.tecnico = tecnico;
    }

    public int getNumeroDeJogadores() {
        return numeroDeJogadores;
    }

    public ArrayList<String> getJogadores() {
        return jogadores;
    }

    public void adicionarJogador(String jogador) {
        jogadores.add(jogador);
        numeroDeJogadores++;
    }

    public void removerJogador(String jogador) {
        if (jogadores.remove(jogador)) {
            numeroDeJogadores--;
        }
    }
}

