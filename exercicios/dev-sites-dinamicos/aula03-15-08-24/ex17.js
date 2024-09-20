/*
Crie um array de objetos, onde cada objeto representa um usuário com propriedades como nome, idade e email. Em seguida, crie uma função que filtre os usuários maiores de idade e exiba seus nomes no console.
*/

function calcIdade (usuarios){
    let maiorIdade = usuarios.filter(usuario => usuario.idade >= 18);
    maiorIdade.forEach(usuario => {
        console.log(usuario.nome);
    });
}

let usuarios = [
    {nome: "Daniel", idade: 23, email: "email1@email.com.br"},
    {nome: "Bruna", idade: 25, email: "email2@email.com.br"}
]

let menor = calcIdade(usuarios);
console.log(menor)