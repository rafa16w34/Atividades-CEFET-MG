package br.com.pagamentos.menu;

import java.util.ArrayList;
import java.util.List;
import java.util.Objects;
import java.util.Scanner;

public class Menu implements MenuOpcao {
    private final String titulo;
    private final List<MenuOpcao> opcoes;
    private final Scanner scanner;

    public Menu(String titulo, Scanner scanner) {
        this.titulo = Objects.requireNonNull(titulo, "O titulo do menu nao pode ser nulo");
        this.scanner = Objects.requireNonNull(scanner, "Scanner nao pode ser nulo");
        this.opcoes = new ArrayList<>();
    }

    public void adicionarOpcao(MenuOpcao opcao) {
        Objects.requireNonNull(opcao, "Opcao nao pode ser nulo");
        this.opcoes.add(opcao);
    }

    @Override
    public String getTitulo() {
        return this.titulo;
    }

    @Override
    public void executar() {
        boolean menuSair = false;
        while (!menuSair) {
            exibir();
            int escolha = this.getEscolhaUsuario();
            if (escolha == this.opcoes.size() + 1) {
                menuSair = true;
            } else if (escolha > 0 && escolha <= this.opcoes.size()) {
                this.opcoes.get(escolha - 1).executar();
            } else {
                System.out.println("Opcao invalida!");
            }

            if (!menuSair) {
                System.out.println("\nPressione ENTER para continuar");
                if (this.scanner.hasNextLine()) {
                    this.scanner.nextLine();
                }
                this.scanner.nextLine();
            }
        }
    }

    public void exibir() {
        System.out.println("\n--- " + this.titulo + " ---");
        for (int i = 0; i < this.opcoes.size(); i++) {
            System.out.println((i + 1) + ". " + this.opcoes.get(i).getTitulo());
        }
        System.out.println((this.opcoes.size() + 1) + ". " +
                (this.titulo.equalsIgnoreCase("Menu Principal") ? "Sair" : "Voltar"));
        System.out.println("Digite sua escolha: ");
    }

    private int getEscolhaUsuario() {
        while (!this.scanner.hasNextInt()) {
            System.out.println("Opcao Invalida, por favor digite um numero");
            this.scanner.next();
            System.out.println("Digite sua escolha: ");
        }
        int escolha = this.scanner.nextInt();
        this.scanner.nextLine();
        return escolha;
    }
}
