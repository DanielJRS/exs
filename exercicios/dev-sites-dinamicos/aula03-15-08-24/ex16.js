/*
Um objeto representa um produto em uma loja (com propriedades como nome, preço e quantidade em estoque). Crie uma função que receba esse objeto e calcule o valor total em estoque (preço x quantidade). Se o valor total for maior que um determinado valor, exiba uma mensagem de alerta usando console.log.
*/

function calcularValorTotal (produto){
    return produto.preco * produto.qtd;
}

let produto = {
    nome: "Tênis",
    preco: 59.99,
    qtd: 5
}

let res = calcularValorTotal(produto);

if (res <= 200){
    console.log("Tudo certo.")
} else {
    console.log("Valor acima do previsto.")
}