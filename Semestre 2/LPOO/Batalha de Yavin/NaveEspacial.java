public abstract class NaveEspacial implements IDestruivel {

    private String nome;
    private int energia;

    //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    private int escudo;//Armazena quanto de dano o escudo vai absorver
    private boolean escudo_ativado;//Usado para verificar se o escudo está ou não ativado

    //------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    private static int totalNavesCriadas = 0;//Salva o número de naves criadas

    //-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    //Construtor atualizado

    public NaveEspacial(String nome, int energiaInicial,int escudo) {
        this.nome = nome;
        this.energia = energiaInicial;

        this.escudo = escudo;   //Recebe o valor do escudo, ou seja, o quanto irá absorver de dano

        totalNavesCriadas ++;   //Adiciona +1 a cada nave criada
    }

    //--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    public abstract void mover();

    public abstract void disparar();


    @Override
    public String getNome() {
        return this.nome;
    }

    //-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    @Override
    public void receberDano(int quantidade) {

        if (escudo_ativado) {           //Verifica se os escudos estão ativados

            quantidade -= escudo;       //O escudo absorve o dano

            if (quantidade > 0) {       //Se os escudos quebrarem ...

                this.energia -= quantidade; // Ele irá receber o resto do dano

                if (this.energia < 0) {
                    this.energia = 0;
                }

                System.out.println(this.nome + " foi atingido e os seus escudos foram quebrados!Recebeu "+ (quantidade)  +" de dano.Energia restante: " + this.energia);

            }else { //Senão ele irá ficar totalmente protegido do dano

                System.out.println(this.nome + " foi atingido, mas os seus escudos o protegeram do dano!");

            }

        }else{

            //Dano sem escudo

            this.energia -= quantidade;
            if (this.energia < 0) {
                this.energia = 0;
            }
            System.out.println(this.nome + " foi atingido! Energia restante: " + this.energia);

        }
    }

    //----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    @Override
    public boolean estaDestruido() {
        return this.energia <= 0;
    }

    
    public int getEnergia() {
        return this.energia;
    }

    //-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    // Metodo para ativar os escudos:

    public void ativarEscudosDefletores() {

        if (escudo > 0) {//Se o valor de escudo for maior que 0, então os escudos podem ser ativados (OBS: só não são ativados se for um caça TIE)
            System.out.println(this.nome + " ativa escudos defletores!");
            escudo_ativado = true;
        }else{
            System.out.println("Os TIE Fighter não tem escudos defletores!");
        }
    }

    //--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    //Get da variável que salva quantas naves foram criadas

    public static int getTotalNavesCriadas(){

        return (totalNavesCriadas);

    }


}




