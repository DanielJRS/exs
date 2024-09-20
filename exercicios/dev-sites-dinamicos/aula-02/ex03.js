/*
Desenvolva um programa que peça ao usuário para escolher entre converter temperaturas de Celsius para Fahrenheit ou vice-versa. Use um switch para lidar com as escolhas e uma função para realizar a conversão. Exiba o resultado no console.
*/

function conversorCpF (celsius){
    return (celsius * 9/5) + 32;
}

function conversorFpC (fahrenheit){
    return ((fahrenheit - 32) * 5) / 9;
}


let opcao = parseInt(prompt("Digite 1 para converter de Celsius para Fahrenheit; \nDigite 2 para converter de Fahrenheit para Celsius."));

switch(opcao){
    case 1:
        let celsius = parseInt(prompt("Digite o valor em Celsius: "));
        let resultadoCpF = conversorCpF(celsius)
        console.log(resultadoCpF)
        break;

    case 2:
        let fahrenheit = parseInt(prompt("Digite o valor em Fahrenheit: "));
        let resultadoFpC = conversorFpC(fahrenheit)
        console.log(resultadoFpC)
        break;
    
    default:
        console.log("Opção inválida.")
        break;
}
