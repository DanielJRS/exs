/*
Desenvolva um programa que peça ao usuário um número e gere a tabuada desse número de 1 a 10. Utilize um loop for para gerar a tabuada e console.log para exibir os resultados.
*/

let num = parseInt(prompt("Digite um número: "));
let c = 0;

for (c = 1; c <= 10; c++){
    console.log(`${num} x ${c} = ${num * c}`)
}