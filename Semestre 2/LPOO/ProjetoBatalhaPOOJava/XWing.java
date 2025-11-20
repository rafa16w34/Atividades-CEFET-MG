public class XWing extends NaveEspacial implements IHiperdrive {

    //------------------------------------------------------------------------------

    //Atributo do droide astromecânico.

    private DroideAstromech droide;

    //------------------------------------------------------------------------------

    //Construtor atualizado:

    public XWing(String nomePiloto) {
        super("X-Wing de " + nomePiloto, 100,20); // Define energia padrão de 100 e escudo 20

        this.droide = new DroideAstromech("R2-D2");// Cria o droide para a nave
    }

    //-------------------------------------------------------------------------------

    @Override
    public void mover() {

        System.out.println(getNome() + " avança pela trincheira em velocidade de ataque!");
    }

    @Override
    public void disparar() {
        System.out.println(getNome() + " dispara 4 lasers vermelhos interligados!");
    }


    public void disparar(IDestruivel alvo) {
        System.out.println(getNome() + " mira e dispara lasers em " + alvo.getNome() + "!");
        // Lógica de dano (ex: 4 tiros de 10)
        alvo.receberDano(10);
        alvo.receberDano(10);
        alvo.receberDano(10);
        alvo.receberDano(10);
    }

    //---------------------------------------------------------------------------------------------

    //Chama o metodo para ativar os escudos defletores

    public void ativarEscudosDefletores() {};

    //---------------------------------------------------------------------------------------------

    //Chama o metodo para saltar para o hiperespaço

    public void saltarParaHiperespaco() {

        System.out.println( getNome() + " entrando no hiper espaço!");

    }

    //---------------------------------------------------------------------------------------------

    //Chama o metodo para o droide reparar a nave

    public void iniciarReparos(){

        this.droide.reparar(this);

    }
}