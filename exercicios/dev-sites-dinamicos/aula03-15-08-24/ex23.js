/*
Você foi contratado para desenvolver um sistema de gestão de tarefas para uma pequena empresa. Cada tarefa é representada por um objeto contendo as propriedades titulo, descricao, prioridade e status. Crie um array que armazene todas as tarefas. Implemente funções para:

Adicionar uma nova tarefa ao array.
Remover uma tarefa específica do array usando splice.
Atualizar o status de uma tarefa (concluída ou pendente).
Ordenar as tarefas por prioridade usando sort.
Listar todas as tarefas pendentes.
*/

let tarefas = [];

function adicionarTarefa(titulo, descricao, prioridade, status) {
    tarefas.push({ titulo, descricao, prioridade, status });
}

function removerTarefa(titulo) {
    tarefas = tarefas.filter(tarefa => tarefa.titulo !== titulo);
}

function atualizarStatus(titulo, novoStatus) {
    let tarefa = tarefas.find(tarefa => tarefa.titulo === titulo);
    if (tarefa) {
        tarefa.status = novoStatus;
    }
}

function ordenarPorPrioridade() {
    tarefas.sort((a, b) => a.prioridade - b.prioridade);
}

function listarPendentes() {
    return tarefas.filter(tarefa => tarefa.status === "pendente");
}

adicionarTarefa("Desenvolver API", "Criar endpoints para a aplicação", 1, "pendente");
adicionarTarefa("Escrever documentação", "Documentar o código da API", 2, "pendente");
adicionarTarefa("Revisar código", "Fazer revisão final do código", 1, "concluída");

console.log("Tarefas antes da remoção:", tarefas);

removerTarefa("Escrever documentação");
console.log("Tarefas após remoção:", tarefas);

atualizarStatus("Desenvolver API", "concluída");
console.log("Tarefas após atualizar status:", tarefas);

ordenarPorPrioridade();
console.log("Tarefas ordenadas por prioridade:", tarefas);

console.log("Tarefas pendentes:", listarPendentes());
