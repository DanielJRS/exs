const usuarioPadrao = "admin";
const senhaPadrao = "1234";

let usuario = prompt("Digite o nome de usuário:");
let senha = prompt("Digite a senha:");

if (usuario === usuarioPadrao && senha === senhaPadrao) {
    alert("Login bem-sucedido");
} else {
    alert("Credenciais incorretas");
}
