package projects.aula;
import java.util.Scanner;

public class Condicionais {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        /*
        Crie um programa que leia um número inteiro do usuário e verifique se ele é par ou ímpar.
        Exiba uma mensagem correspondente no console.
        */

        System.out.println("Digite um número: ");
        int num = scanner.nextInt();

        if (num % 2 == 0){
            System.out.println("O número é par.");
        } else {
            System.out.println("O número é ímpar.");
        }
    }
}
