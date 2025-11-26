package entity;

public class Cliente{

    private String nome;
    private int idade;
    public String empresa;
    private boolean convenio;
    private boolean fazEmCasa;
    private boolean prioridadeIdoso;

    public Cliente(String nome, int idade,String empresa){

        this.nome = nome;
        this.idade = idade;
        this.empresa = empresa;
        this.convenio = this.empresa.equalsIgnoreCase("unimed");
        this.prioridadeIdoso = (idade >= 60);

    }

    public String getNome() {
        return nome;
    }

    public int getIdade() {
        return idade;
    }

    public String getEmpresa() {
        return empresa;
    }

    public boolean getPrioridadeIdoso() {
        return prioridadeIdoso;
    }

    public boolean getFazEmCasa() {
        return fazEmCasa;
    }

    public void setFazEmCasa(boolean fazEmCasa) {
        this.fazEmCasa = fazEmCasa;
    }

    public boolean getConvenio() {
        return convenio;
    }


    public void exibirDados(){

        System.out.format("\nNome: %s\nIdade: %d\nConvenio: %b\nFaz em casa: %b\nPrioridade Idoso: %b",this.nome,this.idade,this.convenio,this.fazEmCasa,this.prioridadeIdoso);
        javax.swing.JOptionPane.showMessageDialog(null, "\nNome: " + this.nome + "\nIdade: " + this.idade + "\nConvenio: " + this.convenio + "\nFaz em casa: " + this.fazEmCasa + "\nPrioridade Idoso: " + this.prioridadeIdoso);

    }





}