import javax.swing.JOptionPane;
import java.time.LocalDate;
import java.time.LocalTime;

public class Main {

    public static void main (String[] args){

        //CADASTRO BÁSICO DO CLIENTE

        String nome1 = javax.swing.JOptionPane.showInputDialog("Informe seu nome: ");
        String idade1texto = javax.swing.JOptionPane.showInputDialog("Informe sua idade: ");
        int idade1 = Integer.parseInt(idade1texto);
        String empresa = javax.swing.JOptionPane.showInputDialog("Qual seu plano de saúde? ");

        Cliente cliente1 = new Cliente(nome1,idade1,empresa);

        cliente1.fazEmCasa();
        cliente1.exibirDados();

        String nomeExame = javax.swing.JOptionPane.showInputDialog("Informe o nome do exame: ");

        LocalDate data1 = LocalDate.now();
        LocalTime hora1 = LocalTime.now();

        Exame exame1 = new Exame(nomeExame,cliente1.convenio,data1);

        exame1.dataDeEntrega();
        exame1.precisaDePreparo();

        Preço preco1 = new Preço(cliente1);

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

    }

}