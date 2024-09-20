const hora = new Date();
const horaatual = hora.getHours();
const minutoatual = hora.getMinutes();
const msg = window.document.querySelector('h3#mensagem');
const img = window.document.querySelector('img#imagem')

if (horaatual >= 0 && horaatual <= 11) {
    msg.innerHTML = `Olá, agora são ${horaatual}h e ${minutoatual}min e está de manhã!`
    img.src = '/v/hora/manha.jpg'

} else if (horaatual <= 17) {
    msg.innerHTML = `Olá, agora são ${horaatual}h e ${minutoatual}min e está de tarde!`
    img.src = '/v/hora/tarde.jpg'

} else {
    msg.innerHTML = `Olá, agora são ${horaatual}h e ${minutoatual}min e está de noite!`
    img.src = '/v/hora/noite.jpg'
}