public class YWing extends NaveEspacial {

    //---------------------------------------------------------------------------------------------

    //Construtor atualizado (nome da nave, energia padrão de 80 e escudo padrão de 40)

    public YWing(String nomePiloto) {
        super("Y-Wing de " + nomePiloto, 80,40);
    }

    //---------------------------------------------------------------------------------------------

    @Override
    public void mover() {
        System.out.println(getNome() + " se move lentamente, focada no bombardeio!");// Mostra a mensagem correta
    }

    //---------------------------------------------------------------------------------------------

    @Override
    public void disparar() {
        System.out.println(getNome() + " dispara um torpedo de prótons!");//Mostra a mensagem correta
    }

    //---------------------------------------------------------------------------------------------

    public void disparar(IDestruivel alvo) {//Atira dois tiros de prótons (A YWing só tem dois canhões.)
        System.out.println(getNome() + " mira e dispara lasers em " + alvo.getNome() + "!");
        // Lógica de dano (ex: 2 tiros de 10)
        alvo.receberDano(10);
        alvo.receberDano(10);
    }

    //---------------------------------------------------------------------------------------------

    //Chama o metodo para ativar os escudos defletores

    public void ativarEscudosDefletores() {}

    //---------------------------------------------------------------------------------------------

    //Chama o metodo para saltar para o hiperespaço

    public void saltarParaHiperespaco() {}
}
