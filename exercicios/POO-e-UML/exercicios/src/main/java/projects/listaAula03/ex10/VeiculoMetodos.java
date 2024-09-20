package projects.listaAula03.ex10;

public class VeiculoMetodos {
    public static void main(String[] args) {
        Veiculo veiculo = new Veiculo("Carro", "ABC-1234", "Preto");
        System.out.println("Tipo: " + veiculo.getTipo());
        System.out.println("Placa: " + veiculo.getPlaca());
        System.out.println("Cor: " + veiculo.getCor());

        veiculo.abastecer();
        veiculo.lavar();
    }
}
