package br.com.pagamentos.pagamentos.acoes;

import br.com.pagamentos.pagamentos.modelo.DetalhesCartaoCredito;
import br.com.pagamentos.pagamentos.modelo.DetalhesCartaoDebito;
import br.com.pagamentos.pagamentos.modelo.DetalhesPagamento;

import java.util.Scanner;

/**
 * @brief Implementacao de DetalhesPagamentoFactory para Cartao de Debito.
 * Coleta os detalhes especificos de um pagamento com cartao de debito do usuario.
 */
public class DetalhesCartaoDebitoPagamentoFactory implements DetalhesPagamentoFactory {
    @Override
    public DetalhesPagamento criar(Scanner scanner) throws IllegalArgumentException {
        System.out.print("Digite o número do cartão (16 dígitos): ");
        String numeroCartao = scanner.nextLine();
        System.out.print("Digite o nome do titular: ");
        String nomeTitularCartao = scanner.nextLine();
        System.out.print("Digite a data de expiração (MM/AA): ");
        String dataVencimento = scanner.nextLine();
        System.out.print("Digite o CVV (3 dígitos): ");
        String cvv = scanner.nextLine();
        System.out.print("Digite o valor: ");
        // Lanca NumberFormatException se não for numero
        double valor = Double.parseDouble(scanner.nextLine());

        // O construtor de DetalhesCartaoDebito valida os dados
        return new DetalhesCartaoDebito(numeroCartao, nomeTitularCartao, dataVencimento, cvv, valor);
    }
}
