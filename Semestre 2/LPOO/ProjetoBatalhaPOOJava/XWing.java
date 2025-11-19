/**
 * CONCEITOS: Herança (Especialização) e Sobrescrita (Override)
 * * XWing 'é uma' NaveEspacial. Ela herda tudo de NaveEspacial
 * e implementa os métodos abstratos.
 */
public class XWing extends NaveEspacial {

    private DroideAstromech droide;

    // O construtor da XWing chama o construtor da classe mãe (NaveEspacial)
    public XWing(String nomePiloto) {
        super("X-Wing de " + nomePiloto, 100,20); // Define energia padrão de 100
        this.droide = new DroideAstromech();
    }

    /**
     * CONCEITO: Sobrescrita (Override)
     * Implementação específica de 'mover' para a XWing.
     */
    @Override
    public void mover() {

        System.out.println(getNome() + " avança pela trincheira em velocidade de ataque!");
    }

    /**
     * CONCEITO: Sobrescrita (Override)
     * Implementação específica de 'disparar' para a XWing.
     */
    @Override
    public void disparar() {
        System.out.println(getNome() + " dispara 4 lasers vermelhos interligados!");
    }

    /**
     * CONCEITO: Sobrecarga (Overload)
     * Mesmo nome do método ('disparar'), mas com uma assinatura (parâmetros) diferente.
     * O compilador sabe qual chamar com base nos argumentos.
     */
    public void disparar(IDestruivel alvo) {
        System.out.println(getNome() + " mira e dispara lasers em " + alvo.getNome() + "!");
        // Lógica de dano (ex: 4 tiros de 10)
        alvo.receberDano(10);
        alvo.receberDano(10);
        alvo.receberDano(10);
        alvo.receberDano(10);
    }

    public void ativarEscudosDefletores() {

    }

    @Override
    public void saltarParaHiperespaco() {
    }

    public void iniarReparos(){

        this.droide.reparar(this);

    }
}