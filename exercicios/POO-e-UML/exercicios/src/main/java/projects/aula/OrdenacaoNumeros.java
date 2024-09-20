package projects.aula;
import java.util.Scanner;
import java.util.Arrays;

public class OrdenacaoNumeros {

    public static void main(String[] args) {
        /*
        Implemente um programa que leia 5 números inteiros do usuário, armazene-os em um array e os imprima em ordem crescente.
        */

        Scanner scanner = new Scanner(System.in);
        int [] array = new int[5];

        for (int i = 0; i < 5; i++){
            System.out.print("Digite o " + (i +1) + "° elemento: ");
            array[i] = scanner.nextInt();
        }

        Arrays.sort(array);

        System.out.println("Os valores do array ordenados do menor para o maior (crescente): ");
        for (int arrays : array){
            System.out.println(arrays);
        }
    }
}
