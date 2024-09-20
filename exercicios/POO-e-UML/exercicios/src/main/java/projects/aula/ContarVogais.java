package projects.aula;
import java.util.Scanner;

public class ContarVogais {
    public static void main(String[] args) {
        /*
        Escreva um programa que conte o número de vogais em uma string fornecida pelo usuário.
        */

        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite uma palavra: ");
        String entrada = scanner.nextLine();

        int numeroDeVogais = contarVogais(entrada);
        System.out.println("Número de vogais na palavra: " + numeroDeVogais);

        scanner.close();
    }

    public static int contarVogais(String str) {
        int contador = 0;
        String vogais = "aeiouAEIOU";

        for (int i = 0; i < str.length(); i++) {
            char c = str.charAt(i);
            if (vogais.indexOf(c) != -1) {
                contador++;
            }
        }

        return contador;
    }
}
