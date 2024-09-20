let gerenciamentoTarefas = {
    tarefas: [],

    adicionarTarefa: function(titulo, descricao, prioridade) {
        this.tarefas.push({
            titulo: titulo,
            descricao: descricao,
            status: false,
            prioridade: prioridade
        });
    },

    removerTarefa: function(titulo) {
        this.tarefas = this.tarefas.filter(tarefa => tarefa.titulo !== titulo);
    },

    alterarStatus: function(titulo) {
        let tarefa = this.tarefas.find(tarefa => tarefa.titulo === titulo);
        if (tarefa) {
            tarefa.status = !tarefa.status;
        }
    }
};

gerenciamentoTarefas.adicionarTarefa("Estudar JavaScript", "Praticar exercícios", "Alta");
gerenciamentoTarefas.alterarStatus("Estudar JavaScript");
gerenciamentoTarefas.removerTarefa("Estudar JavaScript");
console.log(gerenciamentoTarefas.tarefas);
