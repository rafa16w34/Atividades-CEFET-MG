public class ContaCorrente{

    private float saldo;
    private int saquesDiarios;
    private String [] historico;
    private int posicaoHistorico;

    public  ContaCorrente(){

        this.saldo= 100.00f;
        this.saquesDiarios= 3;
        this.historico= new String[100];
        this.posicaoHistorico= 0;


    }



    public void mostrarSaldo(){

        System.out.format("Saldo atual da conta: %.2f",saldo);

    }

    public void sacar(){


        System.out.printf("\nDigite quanto gostaria de sacar:\nR$ ");
        float valor = Float.parseFloat(System.console().readLine());

        if (saquesDiarios > 0) {
            if (valor <= saldo) {

                saldo = saldo - valor;
                historico[posicaoHistorico] = (String.format("\nSaque de %.2f realizado com sucesso!\n", valor));
                posicaoHistorico++;
                mostrarSaldo();
                saquesDiarios--;

            } else {
                System.out.printf("\nErro: Valor maior do que o saldo atual!\n");
            }
        }else{

            System.out.printf("\nVocê já realizou todos os seus saques diários!\n");

        }

    }


    public void depositar() {
        System.out.printf("\nDigite quanto gostaria de depositar:\nR$ ");
        float valor = Float.parseFloat(System.console().readLine());

        if (valor > 0) {
            saldo = saldo + valor;
            mostrarSaldo();
            historico[posicaoHistorico] = (String.format("\nDepósito de %.2f realizado com sucesso!\n", valor));
            posicaoHistorico++;
        }
    }


    public void emitirHistorico(){

        if (historico.length > 0) {
            for (int i = 0; i < historico.length; i++) {

                if (historico[i] != null){

                    System.out.println(historico[i]);

                }


            }
        }else{

            System.out.println("Sem histórico disponível!");
        }

    }
}