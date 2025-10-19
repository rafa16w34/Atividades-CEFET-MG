package br.com.pagamentos.pagamentos.impl;

import br.com.pagamentos.IMetodoPagamento;
import br.com.pagamentos.pagamentos.modelo.DetalhesPagamento;
import br.com.pagamentos.pagamentos.modelo.DetalhesDinheiro;
import br.com.pagamentos.pagamentos.modelo.ResultadoTransacao;

public class PagamentoDinheiro implements IMetodoPagamento {
    @Override
    public ResultadoTransacao processarPagamento(DetalhesPagamento detalhesPagamento) {
        if (!(detalhesPagamento instanceof DetalhesDinheiro)) {
            System.err.println("Erro: Detalhes de cédulas inválidos.");
            return ResultadoTransacao.falhou("Detalhes de pagamento inválidos para Dinheiro.");
        }
        DetalhesDinheiro detalhesDinheiro= (DetalhesDinheiro) detalhesPagamento;

        System.out.println("Processando pagamento via cédulas:");
        System.out.println("  Valor: R$ " + detalhesDinheiro.valor());
        return ResultadoTransacao.sucesso("Pagamento com dinheiro aprovado.", "CC-" + System.currentTimeMillis());
    }

    @Override
    public String getTipo() {
        return "Dinheiro";
    }
}
