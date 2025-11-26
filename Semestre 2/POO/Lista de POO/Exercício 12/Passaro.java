public class Passaro extends Animal{

    private String envergaduraAsa;

    public Passaro(String nome, int idade){

        super(nome,idade);

    }

    @Override
    public void fazerSom(){

        super.fazerSom();
        System.out.println("Piu Piu");

    }

    public void voar(){

        System.out.format("%s está voando\n",nome);

    }

    public void mover(){

        System.out.format("\n%s anda voando pela casa!\n")

    }

}