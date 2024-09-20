/*
Crie uma função que receba um array de números (notas de um aluno) e calcule a média. Use variáveis let e const adequadamente. Em seguida, use um if-else para verificar se o aluno está aprovado (média ≥ 7) ou reprovado.
*/

function calcularMedia (notas){
    if (notas.length == 0){
        return 0;
    } else {
        let soma = 0;
        for (let i = 0; i < notas.length; i++){
            soma += notas[i];
        }
        return soma / notas.length
    }
}

const notas = [0];

const media = calcularMedia(notas);

if (media >= 7){
    console.log("Aprovado.")
} else {
    console.log("Reprovado.")
}





