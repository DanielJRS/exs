function verificarAcesso () {
    const nome = window.document.querySelector('input#nome')
    const anos = window.document.querySelector('input#idade')
    const res = window.document.querySelector('p#resposta')

    const rnome = String(nome.value)
    const ridade = Number(anos.value)

    if (ridade >= 18) {
        res.innerHTML = `Olá ${rnome}, você tem ${ridade} anos de idade e, portanto, você tem permissão para acessar a página, divirta-se!`
    } else {
        res.innerHTML = `Olá ${rnome}, você tem ${ridade} anos de idade e, portanto, você <strong> não</strong> tem permissão para acessar a página.`
    }
}