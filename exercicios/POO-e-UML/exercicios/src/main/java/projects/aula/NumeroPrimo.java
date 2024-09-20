package projects.aula;
import java.util.Scanner;

public class NumeroPrimo {
    public static void main(String[] args) {
        /*
        Escreva um programa que determine se um número fornecido pelo usuário é primo. Um número primo é aquele que só é divisível por 1 e por ele mesmo.
        */

        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite um número para saber se é primo: ");
        Integer num = scanner.nextInt();

        boolean isPrimo = num > 1;

        for (int i = 2; i <= Math.sqrt(num); i++) {
            if (num % i == 0) {
                isPrimo = false;
                break;
            }
        }

        if (isPrimo) {
            System.out.println(num + " é primo.");
        } else {
            System.out.println(num + " não é primo.");
        }
    }
}
