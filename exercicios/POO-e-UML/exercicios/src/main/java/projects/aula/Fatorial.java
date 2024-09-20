package projects.aula;
import java.util.Scanner;

public class Fatorial {
    public static void main(String[] args) {
        /*
        Crie um programa que calcule o fatorial de um número inteiro fornecido pelo usuário.
        Utilize tanto a versão iterativa quanto a versão recursiva.
        */

        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite um número inteiro para calcular o fatorial: ");
        int numero = scanner.nextInt();

        long fatorialIterativo = calcularFatorialIterativo(numero);
        System.out.println("Fatorial de " + numero + " (Iterativo): " + fatorialIterativo);

        long fatorialRecursivo = calcularFatorialRecursivo(numero);
        System.out.println("Fatorial de " + numero + " (Recursivo): " + fatorialRecursivo);

        scanner.close();
    }

    public static long calcularFatorialIterativo(int n) {
        long fatorial = 1;
        for (int i = 2; i <= n; i++) {
            fatorial *= i;
        }
        return fatorial;
    }

    public static long calcularFatorialRecursivo(int n) {
        if (n <= 1) {
            return 1;
        } else {
            return n * calcularFatorialRecursivo(n - 1);
        }
    }
}
