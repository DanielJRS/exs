package projects.aula;
import java.util.Scanner;

public class OperadoresAritmeticos {
    public static void main(String[] args) {
        /*
        Escreva um programa que leia dois números do usuário e exiba a soma, subtração, multiplicação e divisão desses números.
        */

        Scanner scanner = new Scanner(System.in);

        System.out.print("Insira um número: ");
        int num = scanner.nextInt();

        System.out.print("Insira outro número: ");
        int num2 = scanner.nextInt();

        System.out.println("A soma de " + num + " + " + num2 + " = " + (num + num2));
        System.out.println("A subtração de " + num + " - " + num2 + " = " + (num - num2));
        System.out.println("A multiplicação de " + num + " * " + num2 + " = " + (num * num2));
        System.out.println("A divisão de " + num + " / " + num2 + " = " + (num / num2));

    }
}
