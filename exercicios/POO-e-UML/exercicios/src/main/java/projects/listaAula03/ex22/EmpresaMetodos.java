package projects.listaAula03.ex22;

public class EmpresaMetodos {
    public static void main(String[] args) {
        Empresa empresa = new Empresa("Tech Solutions", "12.345.678/0001-99");
        System.out.println("Nome: " + empresa.getNome());
        System.out.println("CNPJ: " + empresa.getCnpj());
        System.out.println("Número de Funcionários: " + empresa.getNumeroFuncionarios());

        empresa.contratarFuncionario();
        empresa.contratarFuncionario();
        empresa.demitirFuncionario();
    }
}

