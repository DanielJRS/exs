/*
Crie um objeto que represente um pedido em um restaurante, com propriedades como cliente, pratos (um array de objetos representando os pratos pedidos), e total. Escreva métodos dentro desse objeto para adicionar pratos ao pedido, calcular o total e exibir um resumo do pedido.
*/

let pedido = {
    cliente: "Daniel",
    pratos: [
        { nome: "arroz", preco: 10 },
        { nome: "macarrão", preco: 20 },
        { nome: "strogonoff", preco: 30 }
    ],
    total: 0,

    adicionarPrato: function(nomePrato, precoPrato) {
        this.pratos.push({ nome: nomePrato, preco: precoPrato });
        this.calcularTotal();
    },

    calcularTotal: function() {
        this.total = this.pratos.reduce((soma, prato) => soma + prato.preco, 0);
    },

    exibirResumo: function() {
        console.log(`Resumo do pedido de ${this.cliente}:`);
        this.pratos.forEach(prato => {
            console.log(`- ${prato.nome}: R$${prato.preco}`);
        });
        console.log(`Total: R$${this.total}`);
    }
};

pedido.adicionarPrato("maionese", 15);
pedido.calcularTotal();
pedido.exibirResumo();

