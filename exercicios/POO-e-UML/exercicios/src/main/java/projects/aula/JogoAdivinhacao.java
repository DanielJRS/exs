package projects.aula;
import java.util.Random;
import java.util.Scanner;

public class JogoAdivinhacao {

    public static void main(String[] args) {
        /*
        Desenvolva um jogo de adivinhação onde o computador escolhe um número aleatório entre 1 e 100, e o usuário deve adivinhar qual é o número.
        O programa deve fornecer dicas ao usuário se o palpite for muito alto ou muito baixo e contar o número de tentativas até o acerto.
        */

        Random random = new Random();
        int numeroAleatorio = random.nextInt(100) + 1;

        Scanner scanner = new Scanner(System.in);
        int palpite;
        int tentativas = 0;

        System.out.println("Bem-vindo ao jogo de adivinhação!");
        System.out.println("Tente adivinhar o número que estou pensando, entre 1 e 100.");

        do {
            System.out.print("Digite seu palpite: ");
            palpite = scanner.nextInt();
            tentativas++;

            if (palpite > numeroAleatorio) {
                System.out.println("Muito alto! Tente novamente.");
            } else if (palpite < numeroAleatorio) {
                System.out.println("Muito baixo! Tente novamente.");
            } else {
                System.out.println("Parabéns! Você acertou o número em " + tentativas + " tentativas.");
            }
        } while (palpite != numeroAleatorio);


    }
}
