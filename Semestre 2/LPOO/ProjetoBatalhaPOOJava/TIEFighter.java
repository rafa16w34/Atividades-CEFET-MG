/**
 * CONCEITOS: Herança e Sobrescrita
 * * TIEFighter também 'é uma' NaveEspacial.
 * Repare como ela NÃO tem o método 'disparar(IDestruivel alvo)'.
 */
public class TIEFighter extends NaveEspacial {

    public TIEFighter(String idPiloto) {
        super("TIE Fighter " + idPiloto, 60,0); // TIEs são mais frágeis, menos energia
    }

    public TIEFighter(String idPiloto, int energiaCustomizada){

        super("TIE Fighter de elite " + idPiloto, energiaCustomizada,0); //TIE Fighter com a energia customizada

    }

    /**
     * CONCEITO: Sobrescrita (Override)
     * Implementação específica de 'mover' para o TIE.
     */
    @Override
    public void mover() {
        System.out.println(getNome() + " manobra rapidamente! (Som: *TIEeeee*)");
    }


    @Override
    public void disparar() {
        System.out.println(getNome() + " dispara 2 lasers verdes!");
    }

    @Override
    public void saltarParaHiperespaco() {



    }
}