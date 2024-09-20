package projects.listaAula03.ex08;

public class ProfessorMetodos {
    public static void main(String[] args) {
        Professor professor = new Professor("Daniel", "Matemática", 4500.0);
        System.out.println("Nome: " + professor.getNome());
        System.out.println("Disciplina: " + professor.getDisciplina());
        System.out.println("Salário: " + professor.getSalario());

        professor.darAula();
        professor.corrigirProvas();
    }
}

