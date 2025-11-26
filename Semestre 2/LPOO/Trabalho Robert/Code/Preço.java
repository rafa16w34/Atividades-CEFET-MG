import entity.Cliente;

public class Preço {

    private Cliente cliente;
    private double precoFixo = 20.0;

    public Preço( Cliente cliente){

        this.cliente = cliente;
    }

    public boolean temConvenio() {
        // Garante que o cliente existe e que ele realmente tem convênio
        return cliente != null && cliente.empresa.equalsIgnoreCase("unimed");
    }

    public void aplicarDesconto(){
        double preco = precoFixo;

        if (temConvenio()) {
            preco *= 0.8; // desconto de 20%
            System.out.println("\nConvênio \"" + cliente.empresa + "\" aplicado. Desconto de 20%.\n");
            System.out.println("\nValor: R$ " +precoFixo + " (valor total) \nDesconto de 20% aplicado\nValor final: "  + preco + "\n");
        } else {
            System.out.println("\nSem convênio. Preço normal aplicado.\n");
            System.out.println("\nValor: R$ " +precoFixo + " (valor total) \nNenhum desconto aplicado\nValor final: "  + preco + "\n");
        }

    }

}