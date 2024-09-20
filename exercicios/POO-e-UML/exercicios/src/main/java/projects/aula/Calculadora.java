package projects.aula;
import java.util.Scanner;

public class Calculadora {
    public static void main(String[] args) {

        /*
        Crie um programa que funcione como uma calculadora simples.
        Ele deve oferecer ao usuário opções para somar, subtrair, multiplicar ou dividir dois números. Use uma estrutura switch para selecionar a operação.
        */

        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite um número inteiro: ");
        Integer num1 = scanner.nextInt();
        System.out.print("Digite outro número inteiro: ");
        Integer num2 = scanner.nextInt();

        System.out.print("\nSelecione a operação: \n1: somar; 2: subtrair; 3: multiplicar; 4: dividir; \nSelecione " +
                "qualquer outra letra para encerrar o programa. \n");
        Integer operacao = scanner.nextInt();

        switch (operacao){
            case 1:
                System.out.print("A soma entre " + num1 + " + " + num2 + " = " + (num1 + num2));
                break;

            case 2:
                System.out.print("A subtração entre " + num1 + " - " + num2 + " = " + (num1 - num2));
                break;

            case 3:
                System.out.println("A multiplicação entre " + num1 + " * " + num2 + " = " + (num1 * num2));
                break;

            case 4:
                System.out.println("A divisão entre " + num1 + " / " + num2 + " = " + (num1 / num2));
                break;

            default:
                System.out.println("Digite uma opção válida.");
                break;
        }
    }
}
