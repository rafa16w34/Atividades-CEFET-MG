package br.com.pagamentos.pagamentos.impl;

import br.com.pagamentos.IMetodoPagamento;
import br.com.pagamentos.pagamentos.modelo.DetalhesCartaoDebito;
import br.com.pagamentos.pagamentos.modelo.DetalhesPagamento;
import br.com.pagamentos.pagamentos.modelo.ResultadoTransacao;

/**
 * Implementacao concreta para processamento de pagamentos via Cartao de Débito.
 * Segue o Principio da Responsabilidade Unica (SRP), focando apenas na logica de cartao de débito.
 * Parte do Padrao Strategy.
 */
public class PagamentoCartaoDebito implements IMetodoPagamento {
    @Override
    public ResultadoTransacao processarPagamento(DetalhesPagamento detalhesPagamento) {
        if (!(detalhesPagamento instanceof DetalhesCartaoDebito)) {
            System.err.println("Erro: Detalhes de pagamento inválidos para Cartão de Débito.");
            return ResultadoTransacao.falhou("Detalhes de pagamento inválidos para Cartão de Débito.");
        }
        DetalhesCartaoDebito detalhesCD = (DetalhesCartaoDebito) detalhesPagamento;

        System.out.println("Processando pagamento via Cartão de Débito:");
        System.out.println("  Número do Cartão: " + detalhesCD.numeroCartao().replaceAll("(\\d{4})(?=\\d)", "$1-XXXX-XXXX-"));
        System.out.println("  Titular: " + detalhesCD.nomeTitularCartao());
        System.out.println("  Valor: R$ " + detalhesCD.valor());

        if (detalhesCD.numeroCartao().length() == 16 && detalhesCD.cvv().length() == 3) {
            System.out.println("Pagamento com cartão de Débito aprovado!");
            return ResultadoTransacao.sucesso("Pagamento com cartão de débito aprovado.", "CC-" + System.currentTimeMillis());
        } else {
            System.out.println("Pagamento com cartão de débito recusado: Dados inválidos.");
            return ResultadoTransacao.falhou("Dados do cartão de débito inválidos.");
        }
    }

    @Override
    public String getTipo() {
        return "CartaoDebito";
    }
}
