public class Gato extends Animal{

    private String corPelo;

    public Gato(String nome, int idade){

        super(nome,idade);
    }

    @Override
    public void fazerSom(){

        super.fazerSom();
        System.out.println("Miau");

    }

    public void derrubarCoisas(){

        System.out.format("%s derrubou um vaso!\n",nome);

    }

    public void mover(){

        System.out.format("\n%s caminha arranhando tudo e runrunando pela casa!\n"nome);

    }

}