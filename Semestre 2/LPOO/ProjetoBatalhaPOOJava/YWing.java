public class YWing extends NaveEspacial {

    public YWing(String nomePiloto) {
        super("Y-Wing de " + nomePiloto, 80,40);
    }

    @Override
    public void mover() {
        System.out.println(getNome() + " se move lentamente, focada no bombardeio!");
    }

    @Override
    public void disparar() {
        System.out.println(getNome() + " dispara um torpedo de prótons!");
    }

    public void disparar(IDestruivel alvo) {
        System.out.println(getNome() + " mira e dispara lasers em " + alvo.getNome() + "!");
        // Lógica de dano (ex: 2 tiros de 10)
        alvo.receberDano(10);
        alvo.receberDano(10);
    }


    public void ativarEscudosDefletores() {


    }

    @Override
    public void saltarParaHiperespaco() {



    }
}
