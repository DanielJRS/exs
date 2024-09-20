/*
Desenvolva um programa que calcule o fatorial de um número fornecido pelo usuário. Utilize uma função recursiva para realizar o cálculo e console.log para exibir o resultado. O fatorial de um número é o produto de todos os números inteiros positivos de 1 até esse número.
*/

function fat (num){
    if (num == 0 || num == 1){
        return 1;
    } else {
        return num * fat(num - 1);
    }
}

let numUser = parseInt(prompt("Para calcular o fatorial, digite um número: "));

console.log(`O fatorial do número ${numUser} = ${fat(numUser)}`)
