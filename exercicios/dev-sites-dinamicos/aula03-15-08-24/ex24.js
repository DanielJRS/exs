/*
Uma loja de e-commerce deseja analisar seus dados de vendas mensais. Eles forneceram um array onde cada elemento é um número representando o valor total de vendas em um determinado mês. Implemente as seguintes funcionalidades:

Calcule o total de vendas do ano usando reduce.
Encontre o mês com a maior venda usando Math.max e indexOf.
Filtre os meses com vendas acima de um determinado valor usando filter.
Verifique se houve algum mês com vendas abaixo de um determinado valor usando some.
Divida o array em dois arrays, um com os meses do primeiro semestre e outro com os meses do segundo semestre, usando slice.
*/

let vendasMensais = [1200, 1500, 1300, 1700, 1800, 1600, 2000, 1900, 2100, 2200, 2400, 2500];

let totalVendasAno = vendasMensais.reduce((total, vendas) => total + vendas, 0);

let mesMaiorVenda = vendasMensais.indexOf(Math.max(...vendasMensais));

let filtroVendas = (valor) => vendasMensais.filter(venda => venda > valor);

let vendasAbaixoValor = (valor) => vendasMensais.some(venda => venda < valor);

let semestre1 = vendasMensais.slice(0, 6);
let semestre2 = vendasMensais.slice(6);

console.log("Total de vendas do ano:", totalVendasAno);
console.log("Mês com maior venda:", mesMaiorVenda);
console.log("Meses com vendas acima de 2000:", filtroVendas(2000));
console.log("Houve algum mês com vendas abaixo de 1000:", vendasAbaixoValor(1000));
console.log("Vendas do primeiro semestre:", semestre1);
console.log("Vendas do segundo semestre:", semestre2);
