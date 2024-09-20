CREATE DATABASE lista002;

USE lista002;

CREATE TABLE alunos (
codigo INT PRIMARY KEY,
nome VARCHAR(50),
telefone VARCHAR(11),
cidade VARCHAR(50)
);

DESC alunos;

CREATE TABLE alunos2 (
codigo INT PRIMARY KEY,
nome VARCHAR(200),
telefone VARCHAR(50),
cidade VARCHAR(100)
);

CREATE TABLE funcionarios(
funcionario_id INT PRIMARY KEY,
nome VARCHAR(50),
endereco VARCHAR(50),
telefone INT,
cidade VARCHAR(50),
estado VARCHAR(50),
cep INT,
rg INT,
cpf INT,
salario FLOAT
);

CREATE TABLE fornecedores (
fornecedores_id INT PRIMARY KEY,
nome VARCHAR(50),
endereco VARCHAR(100),
telefone INT,
cidade VARCHAR(50),
estado VARCHAR(50),
cep INT,
cnpj INT,
email VARCHAR(50)
);

CREATE TABLE livros (
codigo INT PRIMARY KEY,
nome VARCHAR(50),
categoria VARCHAR(50),
resumo VARCHAR(50),
precocusto FLOAT,
precovenda FLOAT
);

DESC alunos2;
DESC funcionarios;
DESC fornecedores;
DESC livros;

CREATE TABLE estoque (
codigo INT PRIMARY KEY,
nomedoproduto VARCHAR(100),
categoria VARCHAR(50),
quantidade INT,
fornecedor VARCHAR(50)
);

CREATE TABLE notas (
codigo INT PRIMARY KEY,
nomedoaluno VARCHAR(100),
bimestre INT
);

CREATE TABLE filmes (
codigo INT PRIMARY KEY,
nome VARCHAR(50),
sinopse VARCHAR(400),
categoria VARCHAR(50),
diretor VARCHAR(50)
);

DROP TABLE alunos;

DESC alunos;

DROP TABLE livros;

DROP TABLE filmes;

RENAME TABLE alunos2 TO alunos;

DESC alunos;

RENAME TABLE estoque TO produtos;

RENAME TABLE notas TO aprovados;

RENAME TABLE aprovados TO notas;

DROP TABLE notas;

ALTER TABLE alunos ADD estado VARCHAR(50);

CREATE TABLE caixa (
caixa_id INT PRIMARY KEY
);

ALTER TABLE caixa ADD observacao VARCHAR(100);

ALTER TABLE alunos ADD cpf VARCHAR(11);

DESC caixa;

ALTER TABLE caixa ADD saldo FLOAT;

CREATE DATABASE controlepedidos;

USE controlepedidos;

CREATE TABLE cliente (
cliente_id INT PRIMARY KEY,
nome VARCHAR(50)
);

CREATE TABLE pedido (
pedido_id INT PRIMARY KEY,
cliente_id INT,
item_id INT,
FOREIGN KEY (cliente_id) REFERENCES cliente(cliente_id),
FOREIGN KEY (item_id) REFERENCES item(item_id)
);

CREATE TABLE item (
item_id INT PRIMARY KEY,
nome INT
);

ALTER TABLE pedido ADD item_id INT;
ALTER TABLE pedido MODIFY COLUMN item_id INT FOREIGN KEY

