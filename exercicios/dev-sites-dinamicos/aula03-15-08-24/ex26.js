/*
Uma plataforma de música deseja implementar um sistema de gerenciamento de playlists. Cada playlist é um array de objetos onde cada objeto representa uma música com titulo, artista, duracao e genero. Desenvolva funções para:

Adicionar uma nova música à playlist.
Remover uma música específica da playlist usando splice.
Criar uma nova playlist com músicas de um gênero específico usando filter.
Calcular a duração total da playlist usando reduce.
Ordenar as músicas por duração, do menor para o maior.
*/

let playlist = [];

function adicionarMusica(titulo, artista, duracao, genero) {
    playlist.push({ titulo, artista, duracao, genero });
}

function removerMusica(titulo) {
    let index = playlist.findIndex(musica => musica.titulo === titulo);
    if (index !== -1) {
        playlist.splice(index, 1);
    }
}

function criarPlaylistPorGenero(genero) {
    return playlist.filter(musica => musica.genero === genero);
}

function calcularDuracaoTotal() {
    return playlist.reduce((total, musica) => total + musica.duracao, 0);
}

function ordenarPorDuracao() {
    return playlist.slice().sort((a, b) => a.duracao - b.duracao);
}

// Exemplo de uso
adicionarMusica("Shape of You", "Ed Sheeran", 3.54, "Pop");
adicionarMusica("Blinding Lights", "The Weeknd", 3.20, "Pop");
adicionarMusica("Bohemian Rhapsody", "Queen", 5.55, "Rock");

console.log("Playlist por gênero 'Pop':", criarPlaylistPorGenero("Pop"));
console.log("Duração total da playlist:", calcularDuracaoTotal());
console.log("Playlist ordenada por duração:", ordenarPorDuracao());

removerMusica("Blinding Lights");
console.log("Playlist após remoção:", playlist);
