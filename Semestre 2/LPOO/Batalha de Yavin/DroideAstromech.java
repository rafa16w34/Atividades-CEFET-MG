public class DroideAstromech {

    public String nome;

    public DroideAstromech(String nome){

        this.nome = nome;

    }

    public void reparar(NaveEspacial naveAlvo){

        System.out.println( this.nome + " reparando " + naveAlvo.getNome() + "!");//sempre será r2?

    }

}
