let biblioteca = {
    livros: [],

    adicionarLivro: function(titulo, autor, ano, disponivel) {
        this.livros.push({ titulo, autor, ano, disponivel });
    },

    removerLivro: function(titulo) {
        this.livros = this.livros.filter(livro => livro.titulo !== titulo);
    },

    listarLivrosDisponiveis: function() {
        return this.livros.filter(livro => livro.disponivel);
    }
};

biblioteca.adicionarLivro("O Senhor dos Anéis", "J.R.R. Tolkien", 1954, true);
biblioteca.adicionarLivro("1984", "George Orwell", 1949, false);
biblioteca.removerLivro("1984");
console.log(biblioteca.listarLivrosDisponiveis());
