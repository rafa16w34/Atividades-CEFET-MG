public class Cachorro extends Animal {

    private String raca;

    public Cachorro(String nome, int idade){

        super(nome,idade);

    }

    @Override
    public void fazerSom(){
        super.fazerSom();
        System.out.println("AU AU");
    }

    public void abanarRabo(){

        System.out.format("%s está abanando o rabinho.\n",nome);

    }

    public void mover(){

        System.out.format("\n%s anda pela casa latindo e feliz!\n")

    }


}