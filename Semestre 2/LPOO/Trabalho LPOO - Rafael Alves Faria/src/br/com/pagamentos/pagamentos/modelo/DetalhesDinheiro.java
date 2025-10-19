package br.com.pagamentos.pagamentos.modelo;

public record DetalhesDinheiro(double valor)
        implements DetalhesEspecificosPagamento{
    public DetalhesDinheiro {

        this.validarValor(valor);
    }

    @Override
    public void validarValor(double valor) {
        if (valor <= 0) {
            throw new IllegalArgumentException("Valor do pagamento deve ser positivo.");
        }
    }
}
