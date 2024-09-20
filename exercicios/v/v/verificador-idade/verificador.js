function calcular() {
    const nasc = window.document.getElementById('n')
    const masc = window.document.getElementById('m')
    const fem = window.document.getElementById('f')
    const res = window.document.getElementById('r')
    const img = window.document.querySelector('img#imagem')

    const idade = 2024 - Number(nasc.value)
    const sexo1 = String(masc.value)
    const sexo2 = String(fem.value)
    const ano = new Date()
    const anoatual = ano.getFullYear()

    if (nasc.value.length == 0 || nasc.value > anoatual) {
        window.alert('[ERRO] Verifique os dados digitados e tente novamente.')
    }

    if (sexo1 == "m" && idade >= 0 && idade <= 14) {
        res.innerHTML = `Olá, você é do sexo masculino e tem ${idade} anos de idade.`
        img.src = '/v/verificador-idade/m-crianca.jpg'

    } else if (sexo1 == "m" && idade <= 25) {
        res.innerHTML = `Olá, você é do sexo masculino e tem ${idade} anos de idade.`
        img.src = '/v/verificador-idade/m-jovem.jpg'

    }
}