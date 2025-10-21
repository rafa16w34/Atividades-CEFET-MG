import javax.swing.JOptionPane;

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




    }

}