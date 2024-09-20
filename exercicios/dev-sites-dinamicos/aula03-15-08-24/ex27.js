/*
Uma empresa realiza pesquisas de satisfação regularmente, armazenando as respostas em um array. Cada resposta é um número de 1 a 5, representando a satisfação do cliente. Implemente as seguintes funcionalidades:

Calcule a média das respostas usando reduce.
Crie um novo array contendo apenas as respostas que foram acima de uma determinada nota usando filter.
Verifique se todos os clientes deram uma nota acima de um determinado valor usando every.
Ordene as respostas da mais alta para a mais baixa usando sort.
Conte quantas vezes cada nota foi dada usando reduce para criar um objeto de contagem.
*/

let respostas = [5, 4, 3, 5, 2, 5, 4, 3, 2, 4];

function calcularMedia() {
    return respostas.reduce((soma, nota) => soma + nota, 0) / respostas.length;
}

function filtrarAcimaNota(notaMinima) {
    return respostas.filter(nota => nota > notaMinima);
}

function todosAcimaNota(notaMinima) {
    return respostas.every(nota => nota > notaMinima);
}

function ordenarRespostas() {
    return respostas.slice().sort((a, b) => b - a);
}

function contarNotas() {
    return respostas.reduce((contagem, nota) => {
        contagem[nota] = (contagem[nota] || 0) + 1;
        return contagem;
    }, {});
}

console.log("Média das respostas:", calcularMedia());
console.log("Respostas acima da nota 3:", filtrarAcimaNota(3));
console.log("Todos deram nota acima de 2?", todosAcimaNota(2));
console.log("Respostas ordenadas da mais alta para a mais baixa:", ordenarRespostas());
console.log("Contagem de cada nota:", contarNotas());
