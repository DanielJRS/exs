CREATE DATABASE controleLivros;
USE controleLivros;

CREATE TABLE editora (
    editora_id INT PRIMARY KEY,
    nome VARCHAR(50)
);

CREATE TABLE autor (
    autor_id INT PRIMARY KEY,
    nome VARCHAR(50)
);

CREATE TABLE categoria (
    categoria_id INT PRIMARY KEY,
    nome VARCHAR(50)
);

CREATE TABLE livro (
    livro_id INT PRIMARY KEY,
    nome VARCHAR(50),
    editora_id INT,
    autor_id INT,
    FOREIGN KEY (editora_id) REFERENCES editora(editora_id),
    FOREIGN KEY (autor_id) REFERENCES autor(autor_id)
);

CREATE TABLE livro_categoria (
    livro_id INT,
    categoria_id INT,
    PRIMARY KEY (livro_id, categoria_id),
    FOREIGN KEY (livro_id) REFERENCES livro(livro_id),
    FOREIGN KEY (categoria_id) REFERENCES categoria(categoria_id)
);