/*
Crie um programa que exiba uma contagem regressiva de um número fornecido pelo usuário até 0. Utilize um loop do while para realizar a contagem e console.log para exibir cada número.
*/

let num = parseInt(prompt("Digite um número:"));

do {
    console.log(num);
    num--;
} while (num >= 0);
