package projects.aula;
import java.util.Scanner;

public class Palindromo {
    public static void main(String[] args) {
        /*
        Crie um programa que verifique se uma palavra fornecida pelo usuário é um palíndromo (palavra que se lê da mesma forma de trás para frente).
        */
        Scanner scanner = new Scanner(System.in);

        System.out.println("Palíndromo: palavra que de trás para frente se lê da mesma forma.");
        System.out.print("Digite uma palavra para saber se é palíndromo: ");
        String palavra = scanner.nextLine();

        if (isPalindromo(palavra)) {
            System.out.println("A palavra '" + palavra + "' é um palíndromo.");
        } else {
            System.out.println("A palavra '" + palavra + "' não é um palíndromo.");
        }

        scanner.close();
    }

    public static boolean isPalindromo(String palavra) {
        int left = 0;
        int right = palavra.length() - 1;

        while (left < right) {
            if (palavra.charAt(left) != palavra.charAt(right)) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }



    }
