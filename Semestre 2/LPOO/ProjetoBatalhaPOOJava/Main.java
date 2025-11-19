import java.util.List;

/**
 * Ponto de entrada da simulação.
 * Aqui demonstramos o POLIMORFISMO e a SOBRECARGA.
 */
public class Main {

    public static void main(String[] args) {

        System.out.println("--- PARTE 1: DEMONSTRAÇÃO DE POLIMORFISMO (HERANÇA) ---");
        System.out.println("Criando uma lista do tipo ABSTRATO (NaveEspacial)...");

        // Criamos uma lista da CLASSE MÃE (Abstrata)
        List<NaveEspacial> esquadrao = List.of(
            new XWing("Luke Skywalker"),
            new TIEFighter("Piloto Imperial 001"),
            new XWing("Wedge Antilles"),
            new TIEFighter("Darth Vader (Protótipo TIE)",150),
            new YWing("Jon Dutch Vander")
        );

        // O "Loop Polimórfico"
        // A variável 'nave' é do tipo 'NaveEspacial', mas o Java sabe
        // qual método 'mover()' e 'disparar()' real deve chamar em tempo de execução.

        for (NaveEspacial nave : esquadrao) {
            nave.mover();
            nave.disparar();
            System.out.println("---");
        }

        // -----------------------------------------------------------------

        System.out.println("\n--- PARTE 2: DEMONSTRAÇÃO DE SOBRECARGA (OVERLOAD) ---");
        
        // Precisamos de uma referência direta à XWing para ver seus métodos específicos
        XWing luke = (XWing) esquadrao.get(0); // Pegando a X-Wing do Luke da lista
        TIEFighter vader = (TIEFighter) esquadrao.get(3); // Pegando o TIE do Vader

        YWing dutch = (YWing) esquadrao.get(4);
        TIEFighter stormtrooper = (TIEFighter) esquadrao.get(1);

        // Chamando o método 1 (sem parâmetros)
        luke.disparar();
        dutch.disparar();
        
        // Chamando o método 2 (SOBRECARGA, com parâmetro)
        System.out.println("\n(Luke ataca Vader...)");
        luke.disparar(vader); // Chama a versão sobrecarregada!

        System.out.println("\nDutch ataca um stormtrooper!\n");
        dutch.disparar(stormtrooper);
        
        // TIEFighter não tem esse método sobrecarregado:
        // vader.disparar(luke); // -> ISSO DARIA ERRO DE COMPILAÇÃO!

        // -----------------------------------------------------------------

        System.out.println("\n--- PARTE 3: DEMONSTRAÇÃO DE POLIMORFISMO (INTERFACES) ---");
        System.out.println("Criando uma lista do tipo INTERFACE (IDestruivel)...");

        // Esta lista pode conter QUALQUER COISA que implemente 'IDestruivel'
        List<IDestruivel> alvosNaTrincheira = List.of(
            esquadrao.get(1), // O TIE Fighter
            new TorreTurbolaser("Alfa-01"),
            esquadrao.get(0), // A X-Wing do Luke
            new TorreTurbolaser("Beta-02"),
            esquadrao.get(4), // A Y-Wing do Dutch
            new TorreTurbolaser("Alfa-16")
        );

        System.out.println("\n(Um ataque coordenado atinge todos os alvos...)");

        // Loop Polimórfico (baseado na Interface)
        // O loop não se importa se o 'alvo' é uma NaveEspacial ou uma TorreTurbolaser.
        // Ele só sabe que o objeto 'sabe' como 'receberDano'.



        for (IDestruivel alvo : alvosNaTrincheira) {
            System.out.println("Atacando " + alvo.getNome() + "...");
            alvo.receberDano(70); // Aplicando um dano pesado
            if (alvo.estaDestruido()) {
                System.out.println(alvo.getNome() + " foi destruído!");
            }
            System.out.println("---");


        }

        luke.ativarEscudosDefletores(luke.getNome());
        dutch.ativarEscudosDefletores(dutch.getNome());
        vader.ativarEscudosDefletores(vader.getNome());

        luke.receberDano(10);
        luke.receberDano(40);
        luke.receberDano(100);

        vader.receberDano(20);

        System.out.println("---");

        for (NaveEspacial nave : esquadrao) {

            nave.saltarParaHiperespaco(nave.getNome());
            System.out.println("---");
        }

        System.out.println("---");

        luke.iniarReparos();

        System.out.println("---");

        System.out.println("Total de naves na batalha: " + NaveEspacial.getTotalNavesCriadas());


    }
}