package projects.aula;

import static projects.aula.Soma.soma;

public class MetodoSoma {
    public static void main(String[] args) {
    /*
    Escreva um programa que contenha um método chamado soma que receba dois números inteiros como parâmetros e retorne a soma deles.
    Chame esse método a partir do método main e exiba o resultado.
    */
        // O método está em um arquivo externo "Soma.java".
        int resultado = soma(5, 8);
        System.out.println(resultado);
    }
}
