function averificar(){
    const nome = window.document.querySelector('input#inome')
    const idade = window.document.querySelector('input#iidade')
    const res = window.document.querySelector('h4#resultado')
    
    const rnome = String(nome.value)
    const ridade = Number(idade.value)

    if (ridade < 16) {
        res.innerHTML = `Olá ${rnome}! Com ${ridade} anos o voto é proibido.`
    } else if (ridade >= 16 && idade < 18){
        res.innerHTML = `Olá ${rnome}! Com ${ridade} anos o voto é opcional.`
    } else if (ridade >= 70){
        res.innerHTML = `Olá ${rnome}! Com ${ridade} anos o voto é opcional.`
    } else {
        res.innerHTML = `Olá ${rnome}! Com ${ridade} anos o voto é obrigatório.`
    }
}