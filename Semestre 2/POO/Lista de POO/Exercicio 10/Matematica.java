public class Matematica {

    private int lado;
    private int altura;
    private int raio;

    public Matematica(){

        this.lado = 10;
        this.altura = 4;
        this.raio = 2;

    }

    public int calcularArea(){

        System.out.printf("\nDigite qual é a figura que você quer calcular a área:\n1- quadrado\n2- retângulo\n3- triângulo\n4- círculo\n-> ");
        int opcao = Integer.parseInt(System.console().readLine());

        if (opcao == 1){

            int area = lado * lado;
            return area;

        } else if (opcao == 2) {

            int area = lado * altura;
            return area;

        } else if (opcao == 3) {

            int area = (lado * altura)/2;
            return area;

        } else if (opcao == 4) {

            int area = raio * raio * 3 ;//Valor aproximado para o pi
            return area;

        }else{

            System.out.printf("\nOpção inválida !\n")

            return 0;
        }

    }

}