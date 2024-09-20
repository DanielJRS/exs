function contar(){
    const txtvalor1 = window.document.querySelector('input#valorInicial');
    const txtvalor2 = window.document.querySelector('input#valorFinal');
    const txtpasso = window.document.querySelector('input#passo');
    const res = window.document.querySelector('h3#resultado')

    valor1 = Number(txtvalor1.value);
    valor2 = Number(txtvalor2.value);
    passo = Number(txtpasso.value);

    let resultado = `Contador: <br>`

    for (valor1; valor1 < valor2; valor1 += passo) {
        resultado += `${valor1} `

    } 

    res.innerHTML = resultado;
}