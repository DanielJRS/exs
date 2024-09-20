package projects.aula;
import java.util.Scanner;

public class EntradaDados {

    public static void main(String[] args) {
        /*
        Escreva um programa que leia o nome e a idade de uma pessoa a partir do teclado e
        imprima uma mensagem no console com essas informações.
        */

        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite seu nome: ");
        String nome = scanner.nextLine();

        System.out.print("Digite sua idade: ");
        Integer idade = scanner.nextInt();

        System.out.println("Olá " + nome + ", você tem " + idade + " anos de idade.");


    }
}
