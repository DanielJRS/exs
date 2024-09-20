function calcularInvestimento(valorInicial, taxaJuros, anos) {
    for (let i = 1; i <= anos; i++) {
        valorInicial += valorInicial * (taxaJuros / 100);
        console.log("Ano " + i + ": R$" + valorInicial.toFixed(2));
    }
}

let valorInicial = parseFloat(prompt("Digite o valor inicial: "));
let taxaJuros = parseFloat(prompt("Digite a taxa de juros anual: "));
let anos = parseInt(prompt("Digite o número de anos: "));

calcularInvestimento(valorInicial, taxaJuros, anos);
