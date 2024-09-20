/*
Crie um programa que simule a aprovação de crédito. Solicite ao usuário seu salário mensal e o valor da prestação do empréstimo desejado. Utilize if e else para verificar se a prestação não excede 30% do salário. Exiba "Crédito aprovado" ou "Crédito negado" no console.
*/

let salario = parseInt(prompt("Digite o valor total do seu salário (mensal): "));

let prestacao = parseInt(prompt("Digite o valor ideal de prestação do seu empréstimo: "));

if (prestacao > (salario *30) / 100){
    console.log("Crédito negado.")
} else {
    console.log("Crédito aprovado.")
}
