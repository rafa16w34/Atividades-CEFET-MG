/**
 * CONCEITO: Implementação de Interface (sem Herança)
 * * Uma TorreTurbolaser NÃO É UMA NaveEspacial. Ela não 'move', não 'dispara' (da mesma forma).
 * Mas ela 'é um' IDestruivel. Pode estar na mesma lista de alvos que as naves.
 */
public class TorreTurbolaser implements IDestruivel {

    private String id;
    private int energia;

    public TorreTurbolaser(String id) {
        this.id = "Torre " + id;
        this.energia = 250; // Torres são muito resistentes
    }

    @Override
    public String getNome() {
        return this.id;
    }

    @Override
    public void receberDano(int quantidade) {
        this.energia -= quantidade;
        if (this.energia < 0) this.energia = 0;
        System.out.println(this.id + " sofre dano pesado! Energia: " + this.energia);
    }

    @Override
    public boolean estaDestruido() {
        return this.energia <= 0;
    }

    // Método próprio da Torre
    public void rastrearAlvo(NaveEspacial nave) {
        System.out.println(this.id + " está rastreando " + nave.getNome() + "!");
    }
}