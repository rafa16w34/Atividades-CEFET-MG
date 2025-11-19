/**
 * CONCEITO: Interface
 * Define um "contrato" para qualquer objeto que possa ser alvo
 * e sofrer danos no jogo. Não importa se é uma nave, uma torre ou um dróide.
 */
public interface IDestruivel {
    
    /**
     * Aplica uma quantidade de dano ao objeto.
     * @param quantidade O dano a ser aplicado.
     */
    void receberDano(int quantidade);

    /**
     * Verifica se o objeto foi destruído (energia <= 0).
     * @return true se destruído, false caso contrário.
     */
    boolean estaDestruido();

    /**
     * Obtém o nome ou identificador do alvo.
     * @return O nome do alvo.
     */
    String getNome();
}