import java.util.List;

public class Main {

    public static void main(String[] args) {

        //-----------------------------------------------------------------------

        System.out.println("--- PARTE 1: DEMONSTRAÇÃO DE POLIMORFISMO (HERANÇA) ---");
        System.out.println("Criando uma lista do tipo ABSTRATO (NaveEspacial)...");


        List<NaveEspacial> esquadrao = List.of(
            new XWing("Luke Skywalker"),
            new TIEFighter("Piloto Imperial 001"),
            new XWing("Wedge Antilles"),
            new TIEFighter("Darth Vader (Protótipo TIE)",150),
            new YWing("Jon Dutch Vander")
        );


        for (NaveEspacial nave : esquadrao) {
            nave.mover();
            nave.disparar();
            System.out.println("---");
        }

        // -----------------------------------------------------------------

        System.out.println("\n--- PARTE 2: DEMONSTRAÇÃO DE SOBRECARGA (OVERLOAD) ---");
        

        XWing luke = (XWing) esquadrao.get(0);
        TIEFighter vader = (TIEFighter) esquadrao.get(3);

        YWing dutch = (YWing) esquadrao.get(4);
        TIEFighter stormtrooper = (TIEFighter) esquadrao.get(1);


        luke.disparar();
        dutch.disparar();
        

        System.out.println("\n(Luke ataca Vader...)");
        luke.disparar(vader);

        System.out.println("\nDutch ataca o Piloto Imperial 001!\n");
        dutch.disparar(stormtrooper);
        


        // -----------------------------------------------------------------

        System.out.println("\n--- PARTE 3: DEMONSTRAÇÃO DE POLIMORFISMO (INTERFACES) ---");
        System.out.println("Criando uma lista do tipo INTERFACE (IDestruivel)...");


        List<IDestruivel> alvosNaTrincheira = List.of(
            esquadrao.get(1),
            new TorreTurbolaser("Alfa-01"),
            esquadrao.get(0),
            new TorreTurbolaser("Beta-02"),
            esquadrao.get(4),
            new TorreTurbolaser("Alfa-16")
        );

        System.out.println("\n(Um ataque coordenado atinge todos os alvos...)");


        for (IDestruivel alvo : alvosNaTrincheira) {
            System.out.println("Atacando " + alvo.getNome() + "...");
            alvo.receberDano(70); // Aplicando um dano pesado
            if (alvo.estaDestruido()) {
                System.out.println(alvo.getNome() + " foi destruído!");
            }
            System.out.println("---");


        }

        //-------------------------------------------------------------------------------------------

        //Escudos defletores

        luke.ativarEscudosDefletores();
        dutch.ativarEscudosDefletores();

        //Dano com escudos ativados

        luke.receberDano(10);
        luke.receberDano(40);

        vader.receberDano(20);

        //---------------------------------------------------------------------------------------------

        System.out.println("---------------------------------------------------------------------------------------------------------------------------");

        //Extra (Para realmente tornar essa a batalha de Yavin):

        System.out.println("MOMENTO MAIS CRÍTICO DA BATALHA:");

        System.out.println("Luke Skywalker se aproxima do ponto fraco da Estrela da Morte!");

        System.out.println( vader.getNome() + " avança para um ataque mas um antigo amigo ajuda Luke no momento mais preciso!");

        System.out.println("Luke atira um torpedo de protóns no ponto fraco da Estrela da Morte, fazendo com que ela exploda completamente.");

        System.out.println("Uma vitória para a Aliança Rebelde e para a Galáxia!");

        System.out.println("---------------------------------------------------------------------------------------------------------------------------");

        //---------------------------------------------------------------------------------------------


        //Naves do esquadrão entram no hiperespaço

        for (NaveEspacial nave : esquadrao) {

            if (nave instanceof IHiperdrive hiper) {

                hiper.saltarParaHiperespaco();

            } else {

                System.out.println(nave.getNome() + " não pode saltar para o hiperespaço!");

            }

            System.out.println("---");
        }

        System.out.println("---");

        //----------------------------------------------------------------------------------------------

        //R2 repara a nave do Luke

        luke.iniciarReparos();

        System.out.println("---");

        //-----------------------------------------------------------------------------------------------

        //É mostrado quantas naves estavam presentes durante a grandiosa e memorável batalha de Yavin

        System.out.println("Total de naves na batalha: " + NaveEspacial.getTotalNavesCriadas());


        System.out.println("Que a força esteja com você!");

    }
}