public class Cliente{

    private String nome;
    private int idade;
    private String empresa;
    private boolean convenio;
    private boolean fazEmCasa;
    private boolean prioridadeIdoso;

    public Cliente(String nome, int idade,String empresa){

        this.nome = nome;
        this.idade = idade;
        this.empresa = empresa;
        this.convenio = this.empresa.equalsIgnoreCase("unimed");

    }

    public void exibirDados(){

        System.out.format("\nNome: %s\nIdade: %d\nConvenio: %b\nFaz em casa: %b\nPrioridade Idoso: %b",this.nome,this.idade,this.convenio,this.fazEmCasa,this.prioridadeIdoso);
        javax.swing.JOptionPane.showMessageDialog(null, "\nNome: " + this.nome + "\nIdade: " + this.idade + "\nConvenio: " + this.convenio + "\nFaz em casa: " + this.fazEmCasa + "\nPrioridade Idoso: " + this.prioridadeIdoso);

    }


    public void fazEmCasa(){

        if (this.idade >= 60){

            this.prioridadeIdoso = true;

            String resposta = javax.swing.JOptionPane.showInputDialog("Gostaria de fazer exame em casa?\n(Responda com sim ou não)\n");

            if (resposta.equalsIgnoreCase("sim")){

                this.fazEmCasa = true;
                System.out.format("\n%s prefere fazer seus exames em casa.\n",this.nome);
                javax.swing.JOptionPane.showMessageDialog(null,"\n O(A) " + this.nome + "prefere fazer seus exames em casa.\n");


            }else{

                this.fazEmCasa = false;
                System.out.format("\n%s prefere fazer seus exames na Cliníca.\n",this.nome);
                javax.swing.JOptionPane.showMessageDialog(null,"\n O(A) " + this.nome + "prefere fazer seus exames na cliníca.\n");

            }

        }else{

            System.out.format("\n%s não tem idade suficiente para poder fazer exames em casa.\n",this.nome);
            javax.swing.JOptionPane.showMessageDialog(null,"\n O(A) " + this.nome + " não tem idade suficiente para poder fazer seus exames em casa.\n");

        }

    }

}