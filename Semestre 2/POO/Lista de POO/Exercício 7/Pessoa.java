public class Pessoa{

    //Atributos:
    private String nome;
    private int idade;
    private String cpf;


    //Construtores
    public Pessoa(){
    }

    public Pessoa(String nome, int idade, String cpf){

        this.nome = nome;
        this.idade = idade;
        this.cpf = cpf;

    }


    //Getters:
    public String getNome() {
        return nome;
    }
    public int getIdade() {return idade;}
    public String getCpf() {
        return cpf;
    }

    //Setters:
    public void setNome(String nome) {
        this.nome = nome;
    }
    public void setIdade(int idade) {
        this.idade = idade;
    }
    public void setCpf(String cpf){
        this.cpf = cpf;
    }

    //Método de Imprimir Dados
    Public void imprimirDados(){

        System.out.format("Nome: %s",nome);
        System.out.format("Idade: %d",idade);
        System.out.format("CPF: %s",cpf);

    }


}

