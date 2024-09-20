/*
Crie um objeto contaBancaria com propriedades como numero, titular, saldo, e transacoes (um array de objetos representando cada transação). Implemente métodos para depositar, sacar, e visualizar o histórico de transações.
*/

let contaBancaria = {
    numero: "123456",
    titular: "Daniel",
    saldo: 0,
    transacoes: [],

    depositar: function(valor) {
        this.saldo += valor;
        this.transacoes.push({ tipo: "Depósito", valor: valor });
    },

    sacar: function(valor) {
        if (valor <= this.saldo) {
            this.saldo -= valor;
            this.transacoes.push({ tipo: "Saque", valor: valor });
        } else {
            console.log("Saldo insuficiente");
        }
    },

    verHistorico: function() {
        return this.transacoes;
    }
};

contaBancaria.depositar(500);
contaBancaria.sacar(200);
console.log(contaBancaria.verHistorico());
console.log("Saldo atual: " + contaBancaria.saldo);
