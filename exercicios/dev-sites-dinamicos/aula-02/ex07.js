/*
Desenvolva um programa que peça ao usuário para inserir um número e verifique se ele é primo. Utilize uma função para realizar a verificação e console.log para exibir o resultado. Utilize break para interromper o loop quando necessário.
*/

function ePrimo(num) {
    if (num <= 1) {
      return false;
    }
    if (num === 2) {
      return true;
    }
    if (num % 2 === 0) {
      return false;
    }
  
    for (let i = 3; i <= Math.sqrt(num); i += 2) {
      if (num % i === 0) {
        return false;
      }
    }
  
    return true;
  }
  
  const numero = parseInt(prompt("Insira um número para verificar se é primo:"));
  
  if (isNaN(numero)) {
    console.log("Por favor, insira um número válido.");
  } else {
    if (ePrimo(numero)) {
      console.log(`O número ${numero} é um número primo.`);
    } else {
      console.log(`O número ${numero} não é um número primo.`);
    }
  }
  