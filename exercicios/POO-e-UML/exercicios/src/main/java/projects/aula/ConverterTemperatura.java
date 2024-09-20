package projects.aula;
import java.util.Scanner;

public class ConverterTemperatura {

    public static void main(String[] args) {
        /*
        Desenvolva um programa que converta temperaturas entre Celsius e Fahrenheit.
        O usuário deve escolher qual conversão deseja realizar e inserir o valor da temperatura a ser convertida.
        */
        Scanner scanner = new Scanner(System.in);

        System.out.println("Conversor de temperatura. Digite uma opção");
        System.out.println("1 - Para converter de Celsius para Fahrenheit;");
        System.out.println("2 - Para converter de Fahrenheit para Celsius;");
        System.out.print("Digite uma opção: ");
        int opcao = scanner.nextInt();
        System.out.print("Digite o valor a ser convertido: ");
        int valor = scanner.nextInt();

        if (opcao == 1){
            System.out.println(valor + "° Celsius convertido = " + (valor * 32) + "° Fahrenheit.");
        } else {
            System.out.println(valor + "° Fahrenheit convertido = " + (valor / 32) + "° Celsius.");
        }

    }
}
