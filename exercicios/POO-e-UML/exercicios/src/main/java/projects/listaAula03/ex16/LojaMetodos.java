package projects.listaAula03.ex16;

public class LojaMetodos {
    public static void main(String[] args) {
        Loja loja = new Loja("Supermercado Central", "Rua das Flores, 123", "(45) 1234-5678");
        System.out.println("Nome: " + loja.getNome());
        System.out.println("Endereço: " + loja.getEndereco());
        System.out.println("Telefone: " + loja.getTelefone());

        loja.abrir();
        loja.fechar();
    }
}

