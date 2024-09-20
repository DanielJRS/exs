/*
Desenvolva um programa que calcule o Índice de Massa Corporal (IMC) com base no peso e altura fornecidos pelo usuário. Utilize uma função para calcular o IMC e console.log para exibir a categoria do IMC (baixo peso, normal, sobrepeso, obesidade).
*/

function calcIMC (peso, altura){
    return peso / (altura * altura);
}

function categoria (imc){
    if (imc < 18.5){
        return 'Baixo peso'
    } else if (imc >= 18.5 && imc < 24.9){
        return 'Peso normal'
    } else if (imc >= 25 && imc < 29.9){
        return 'Sobrepeso'
    } else if (imc >= 30 && imc < 34.9){
        return 'Obesidade grau I'
    } else if (imc >= 35 && imc < 39.9){
        return 'Obesidade grau II'
    } else {
        return 'Obesidade grau III'
    }
}

let p = parseFloat(prompt("Digite seu peso: "));
let a = parseFloat(prompt("Digite a sua altura: "));
let imc = calcIMC(p, a).toFixed(2);

console.log(`Com ${p.toFixed(2)}kg, seu índice IMC resultou em ${imc} e você tem ${categoria(imc)}`)
