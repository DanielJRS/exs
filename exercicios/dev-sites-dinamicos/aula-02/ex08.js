/*
Crie um programa que converta uma nota numérica (0 a 10) em uma letra correspondente (A, B, C, D, F). Utilize um switch para fazer a conversão e exiba a nota em letra no console.
*/

let nota = parseInt(prompt("Digite um número de 1 a 10: "));

if (nota < 0 || nota > 10){
    console.log("Insira apenas números de 1 a 10");
} else {
    switch (nota){
        case 0 || 1 || 2:
            console.log("Você tirou um F.");
            break;
        case 3 || 4:
            console.log("Você tirou um D.");
            break;
        case 5 || 6:
            console.log("Você tirou um C.");
            break;
        case 7 || 8:
            console.log("Você tirou um B.");
            break;
        case 9 || 10:
            console.log("Você tirou um A.");
            break;
        default:
            console.log(null);
            break;
    }
}