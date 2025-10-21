public class Main {
    public static void main(String[] args) {
        ContaCorrente conta = new ContaCorrente();
        int opcao;

        do {
            System.out.println("\n==== MENU CONTA CORRENTE ====");
            System.out.println("1 - Mostrar saldo");
            System.out.println("2 - Depositar");
            System.out.println("3 - Sacar");
            System.out.println("4 - Emitir histórico");
            System.out.println("0 - Sair");
            System.out.print("Escolha uma opção: ");
            opcao = Integer.parseInt(System.console().readLine());

            switch (opcao) {
                case 1:
                    conta.mostrarSaldo();
                    break;
                case 2:
                    conta.depositar();
                    break;
                case 3:
                    conta.sacar();
                    break;
                case 4:
                    conta.emitirHistorico();
                    break;
                case 0:
                    System.out.println("Encerrando o programa...");
                    break;
                default:
                    System.out.println("Opção inválida!");
                    break;
            }
        } while (opcao != 0);
    }
}
