/*
Desenvolva um programa que peça ao usuário para inserir dois números, representando um intervalo. Utilize um loop while para contar e exibir todos os números ímpares dentro desse intervalo.
*/

function eImpar (num){
  return num % 2 !== 0;
}

function mostrarNum (primeiroNum, ultimoNum){
  let numeroAtual = primeiroNum;

  while (numeroAtual <= ultimoNum){
    if (eImpar(numeroAtual)) {
      console.log(numeroAtual);
    }
    numeroAtual++
  }
}

let num1 = parseInt(prompt("Contar de: "));
let num2 = parseInt(prompt("Até: "));

let primeiroNum = Math.min(num1, num2);
let ultimoNum = Math.max(num1, num2);

mostrarNum(primeiroNum, ultimoNum);
