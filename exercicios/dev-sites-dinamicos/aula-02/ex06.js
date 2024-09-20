/*
Crie um programa que converta um valor em reais para dólares e euros. Peça ao usuário para inserir o valor em reais e utilize duas funções para realizar as conversões, utilizando taxas de câmbio fixas. Exiba os resultados no console.
*/

function reaisDolar (num){
    return num * 5.49
}

function reaisEuro (num){
    return num * 6
}

let valorReais = parseFloat(prompt("Para converter reais em dólar e euro, digite um valor em reais: "));

let valorReaisFormat = valorReais.toFixed(2);

console.log(`R$ ${valorReaisFormat} convertidos, te dá:`)
console.log(`US$ ${reaisDolar(valorReaisFormat).toFixed(2)} dólares`);
console.log(`€ ${reaisEuro(valorReaisFormat).toFixed(2)} euros`);