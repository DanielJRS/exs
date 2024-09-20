/*
Crie uma função que receba um array de produtos (cada produto é um objeto com propriedades como nome, preco, categoria, e estoque). A função deve permitir buscar produtos por nome, filtrar por categoria e ordenar por preço.
*/

function gerenciarProdutos(produtos) {
    return {
        buscarPorNome: function(nome) {
            return produtos.find(produto => produto.nome === nome);
        },

        filtrarPorCategoria: function(categoria) {
            return produtos.filter(produto => produto.categoria === categoria);
        },

        ordenarPorPreco: function() {
            return produtos.sort((a, b) => a.preco - b.preco);
        }
    };
}

// Exemplo de uso
let produtos = [
    { nome: "Camisa", preco: 50, categoria: "Vestuário", estoque: 10 },
    { nome: "Calça", preco: 100, categoria: "Vestuário", estoque: 5 },
    { nome: "Notebook", preco: 3000, categoria: "Eletrônicos", estoque: 2 }
];

let loja = gerenciarProdutos(produtos);
console.log(loja.buscarPorNome("Camisa"));
console.log(loja.filtrarPorCategoria("Vestuário"));
console.log(loja.ordenarPorPreco());
