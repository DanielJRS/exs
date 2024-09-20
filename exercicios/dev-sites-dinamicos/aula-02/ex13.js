let num1 = parseFloat(prompt("Digite o primeiro número: "));
let num2 = parseFloat(prompt("Digite o segundo número: "));
let operacao = prompt("Digite a operação (+, -, *, /): ");

let resultado;

switch (operacao) {
    case '+':
        resultado = num1 + num2;
        break;
    case '-':
        resultado = num1 - num2;
        break;
    case '*':
        resultado = num1 * num2;
        break;
    case '/':
        resultado = num1 / num2;
        break;
    default:
        resultado = "Operação inválida";
}

console.log("Resultado: " + resultado);
