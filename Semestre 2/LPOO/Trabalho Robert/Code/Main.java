import controller.ClienteController;

import javax.swing.JOptionPane;
import java.time.LocalDate;
import java.time.LocalTime;
import controller.ClienteController;
import entity.Cliente;


public class Main {

    public static void main (String[] args){

        //CADASTRO BÁSICO DO CLIENTE

        ClienteController clienteController = new ClienteController();

        int opcao = 99;

        while(opcao != 0) {

            opcao = Integer.parseInt(JOptionPane.showInputDialog(
                    "===== SISTEMA DE CLÍNICA =====\n" +
                            "1 - Cadastrar Cliente\n" +
                            "2 - Listar Clientes\n" +
                            "3 - Buscar Cliente\n" +
                            "4 - Remover Cliente\n" +
                            "0 - Sair\n\n" +
                            "Escolha uma opção:"
            ));

            switch (opcao) {
                case 1 -> {
                    clienteController.cadastro();
                }
                case 2 -> {
                    clienteController.listarClientes();
                }
                case 3 -> {
                    String nomeBusca = JOptionPane.showInputDialog("Informe o nome do cliente que gostaria de buscar: ");
                    clienteController.buscarCliente(nomeBusca);
                }
                case 4 -> {
                    String nomeExclui = JOptionPane.showInputDialog("Informe o nome do cliente que gostaria de excluir: ");
                    clienteController.removerCliente(nomeExclui);
                }
                case 0 -> {
                    JOptionPane.showMessageDialog(null, "Encerrando Sistema...");
                }
                default -> {
                    JOptionPane.showMessageDialog(null, "Digite uma opção válida!");
                }
            }

        }
/*
        String nomeExame = javax.swing.JOptionPane.showInputDialog("Informe o nome do exame: ");

        LocalDate data1 = LocalDate.now();
        LocalTime hora1 = LocalTime.now();

        Exame exame1 = new Exame(nomeExame,cliente.convenio,data1);

        exame1.dataDeEntrega();
        exame1.precisaDePreparo();

        Preço preco1 = new Preço(cliente);

        preco1.temConvenio();
        preco1.aplicarDesconto();

        String idCliente1 = "000001";
        int idNumCl = Integer.parseInt(idCliente1);
        idNumCl++;
        idCliente1 = String.format("%06d", idNumCl);

        String idExame1 = "000009";
        int idNumEx = Integer.parseInt(idCliente1);
        idNumEx++;
        idExame1 = String.format("%06d", idNumEx);


        Sistema sistema1 = new Sistema();

        sistema1.adicionar(idCliente1,idExame1,data1,hora1);
        sistema1.listarTodos();
        sistema1.remover(idCliente1);
        sistema1.listarTodos();

    */}

}