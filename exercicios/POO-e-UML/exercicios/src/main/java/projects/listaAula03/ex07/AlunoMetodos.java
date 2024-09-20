package projects.listaAula03.ex07;

public class AlunoMetodos {
    public static void main(String[] args) {
        double[] notas = {8.5, 7.0, 9.0, 6.5};
        Aluno aluno = new Aluno("Daniel", 123456, "Análise e desenvolvimento de sistemas", notas);

        System.out.println("Nome: " + aluno.getNome());
        System.out.println("Matrícula: " + aluno.getMatricula());
        System.out.println("Curso: " + aluno.getCurso());
        System.out.println("Média das Notas: " + aluno.calcularMedia());
    }
}

