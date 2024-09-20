package projects.listaAula03.ex04;

/*
* 4 - Crie uma classe ContaBancaria com atributos como numeroConta e saldo.
* Adicione métodos para depositar e sacar dinheiro.
*/

public class contaBancaria {
    private int numeroConta;
    private double saldo;

    public contaBancaria(int numeroConta, double saldoInicial) {
        this.numeroConta = numeroConta;
        this.saldo = saldoInicial;
    }

    public int getNumeroConta() {
        return numeroConta;
    }

    public double getSaldo() {
        return saldo;
    }

    public void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
        }
    }

    public void sacar(double valor) {
        if (valor > 0 && saldo >= valor) {
            saldo -= valor;
        }
    }
}

