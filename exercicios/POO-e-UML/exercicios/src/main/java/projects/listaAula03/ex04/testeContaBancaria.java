package projects.listaAula03.ex04;

public class testeContaBancaria {
    public static void main(String[] args) {
        contaBancaria conta = new contaBancaria(12345, 1000.0);
        System.out.println("Número da Conta: " + conta.getNumeroConta());
        System.out.println("Saldo Inicial: " + conta.getSaldo());

        conta.depositar(500.0);
        System.out.println("Saldo após depósito: " + conta.getSaldo());

        conta.sacar(200.0);
        System.out.println("Saldo após saque: " + conta.getSaldo());
    }
}

