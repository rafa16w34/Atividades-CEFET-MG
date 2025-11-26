package br.com.pagamentos.pagamentos.acoes;

import br.com.pagamentos.pagamentos.modelo.DetalhesPagamento;
import br.com.pagamentos.pagamentos.modelo.DetalhesDinheiro;

import java.util.Scanner;

public class DetalhesDinheiroPagamentoFactory implements DetalhesPagamentoFactory {
    @Override
    public DetalhesPagamento criar(Scanner scanner) throws IllegalArgumentException {
        System.out.print("Digite o valor: ");
        // Lanca NumberFormatException se não for numero
        double valor = Double.parseDouble(scanner.nextLine());

        // O construtor de DetalhesPix valida os dados
        return new DetalhesDinheiro(valor);
    }
}
