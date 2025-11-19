/**
 * CONCEITOS: Classe Abstrata, Herança (Base), Encapsulamento
 * * 'abstract' significa que não podemos criar uma "NaveEspacial" genérica.
 * Temos que criar tipos específicos (XWing, TIE).
 * * Implementa 'IDestruivel' pois toda nave é, por definição, um alvo.
 */
public abstract class NaveEspacial implements IDestruivel, IHiperdrive {

    /**
     * CONCEITO: Encapsulamento
     * Atributos são 'private'. O acesso é controlado via métodos (get/set).
     * Nenhuma classe externa pode fazer 'nave.energia = -1000'.
     */
    private String nome;
    private int energia;
    private int escudo;
    private boolean escudo_ativado;

    private static int totalNavesCriadas = 0;

    // Construtor usado pelas classes filhas
    public NaveEspacial(String nome, int energiaInicial,int escudo) {
        this.nome = nome;
        this.energia = energiaInicial;
        this.escudo = escudo;

        totalNavesCriadas ++;
    }

    // --- Métodos Abstratos (Obrigatórios para as filhas) ---

    /**
     * CONCEITO: Método Abstrato (parte do Polimorfismo)
     * Toda nave 'move', mas cada uma move de um jeito.
     * Forçamos as classes filhas a implementar (sobrescrever) este método.
     */
    public abstract void mover();

    public abstract void disparar();


    // --- Implementação da Interface IDestruivel ---
    // (Este comportamento é comum a todas as naves)

    @Override
    public String getNome() {
        return this.nome;
    }

    @Override
    public void receberDano(int quantidade) {

        if (escudo_ativado) {//Verifica se o escudos estão ativados

            quantidade -= escudo;//O escudo absorve o dano

            if (quantidade > 0) { //Se os escudo quebrarem..

                this.energia -= quantidade;

                if (this.energia < 0) {
                    this.energia = 0;
                }

                System.out.println(this.nome + " foi atingido e os seus escudos foram quebrados!Recebeu "+ (quantidade)  +" de dano.Energia restante: " + this.energia);

            }else {

                System.out.println(this.nome + " foi atingido, mas os seus escudos o protegeram do dano!");

            }

        }else{

            this.energia -= quantidade;
            if (this.energia < 0) {
                this.energia = 0;
            }
            System.out.println(this.nome + " foi atingido! Energia restante: " + this.energia);

        }
    }

    @Override
    public boolean estaDestruido() {
        return this.energia <= 0;
    }

    // --- Métodos de Acesso (Encapsulamento) ---
    
    public int getEnergia() {
        return this.energia;
    }

    // Método específico que não existe nas TIE
    public void ativarEscudosDefletores(String nome) {

        if (escudo > 0) {
            System.out.println(nome + " ativa escudos defletores!");
            escudo_ativado = true;
        }else{
            System.out.println("Os TIE Fighter não tem escudos defletores!");
        }
    }


    public void saltarParaHiperespaco(String nome) {

        if (escudo > 0) {//Verifica se é um tie

            if (escudo == 20) {//Verifica se é uma XWing

                System.out.println("X-Wing (" + nome + ") entrando no hiper espaço!");

            } else if (escudo == 40) {

                System.out.println("Y-Wing (" + nome + ") entrando no hiperespaço!");

            }

        } else {
            System.out.println("TIE (" + nome + ") não pode saltar para o hiper espaço!");
        }

    }


    public static int getTotalNavesCriadas(){

        return (totalNavesCriadas);

    }


}




