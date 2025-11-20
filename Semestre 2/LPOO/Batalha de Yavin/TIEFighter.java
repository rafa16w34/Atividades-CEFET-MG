public class TIEFighter extends NaveEspacial {

    //---------------------------------------------------------------------------------------------------------------------------------

    //Construtor do TIE Fighter atualizado
    public TIEFighter(String idPiloto) {
        super("TIE Fighter " + idPiloto, 60,0);
    }

    //Construtor dos TIE Fighter com a energia customizada
    public TIEFighter(String idPiloto, int energiaCustomizada){

        super("TIE Fighter de elite de " + idPiloto, energiaCustomizada,0);

    }

    //--------------------------------------------------------------------------------------------------------------------------------------

    @Override
    public void mover() {
        System.out.println(getNome() + " manobra rapidamente! (Som: *TIEeeee*)");
    }


    @Override
    public void disparar() {
        System.out.println(getNome() + " dispara 2 lasers verdes!");
    }

    //---------------------------------------------------------------------------------------------

    //Chama o metodo para ativar os escudos defletores (mesmo que ele não possa fazer isso)

    public void ativarEscudosDefletores() {};

    //-----------------------------------------------------------------------------------------------------------------------------------------


}