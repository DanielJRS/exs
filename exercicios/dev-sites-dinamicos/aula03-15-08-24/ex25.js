/*
Uma escola precisa de um sistema para registrar a presença dos alunos em diferentes aulas. Cada dia, a presença é armazenada em um array de objetos com as propriedades nomeDoAluno e presente (true ou false). Escreva funções para:

Adicionar um registro de presença para um dia específico.
Contar quantas vezes um aluno específico esteve presente usando filter e length.
Criar um novo array com os nomes dos alunos que estiveram presentes todos os dias usando filter e every.
Verificar se algum aluno faltou todos os dias usando some.
Ordenar os alunos pelo número de presenças em ordem decrescente.
*/

let registrosPresenca = [];

function adicionarPresenca(dia, presencas) {
    registrosPresenca[dia] = presencas;
}

function contarPresenca(nome) {
    return registrosPresenca.flat().filter(registro => registro.nomeDoAluno === nome && registro.presente).length;
}

function alunosPresentesTodosOsDias() {
    let nomesAlunos = [...new Set(registrosPresenca.flat().map(registro => registro.nomeDoAluno))];
    return nomesAlunos.filter(nome => registrosPresenca.flat().filter(registro => registro.nomeDoAluno === nome).every(registro => registro.presente));
}

function algumAlunoFaltouTodosOsDias() {
    let nomesAlunos = [...new Set(registrosPresenca.flat().map(registro => registro.nomeDoAluno))];
    return nomesAlunos.some(nome => registrosPresenca.flat().filter(registro => registro.nomeDoAluno === nome).every(registro => !registro.presente));
}

function ordenarAlunosPorPresencas() {
    let contagemPresencas = registrosPresenca.flat().reduce((acc, registro) => {
        if (!acc[registro.nomeDoAluno]) acc[registro.nomeDoAluno] = 0;
        if (registro.presente) acc[registro.nomeDoAluno]++;
        return acc;
    }, {});
    return Object.entries(contagemPresencas).sort((a, b) => b[1] - a[1]).map(entry => entry[0]);
}

// Exemplo de uso
adicionarPresenca(0, [{ nomeDoAluno: "Ana", presente: true }, { nomeDoAluno: "Pedro", presente: false }]);
adicionarPresenca(1, [{ nomeDoAluno: "Ana", presente: true }, { nomeDoAluno: "Pedro", presente: true }]);
adicionarPresenca(2, [{ nomeDoAluno: "Ana", presente: true }, { nomeDoAluno: "Pedro", presente: true }]);

console.log("Contagem de presenças de Ana:", contarPresenca("Ana"));
console.log("Alunos presentes todos os dias:", alunosPresentesTodosOsDias());
console.log("Algum aluno faltou todos os dias?", algumAlunoFaltouTodosOsDias());
console.log("Alunos ordenados por número de presenças:", ordenarAlunosPorPresencas());
