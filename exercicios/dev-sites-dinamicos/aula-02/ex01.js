/*
Problema: Desenvolva um programa que peça ao usuário para inserir um ano. Utilize uma função para verificar se o ano é bissexto (divisível por 4, mas não por 100, exceto se for divisível por 400). Exiba o resultado no console usando if e else.
*/

function anoBissexto(ano) {
  return (ano % 4 === 0 && ano % 100 !== 0) || (ano % 400 === 0);
}

const anoUser = parseInt(prompt("Insira um ano:"));

if (anoBissexto(anoUser)) {
  console.log(`O ano ${anoUser} é bissexto.`);
} else {
  console.log(`O ano ${anoUser} não é bissexto.`);
}
