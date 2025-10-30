//Código Orientado a Objetos

import java.util.Scanner;

class Fatorial {
    private int numero;
    private int resultado;

    public Fatorial(int numero) {
        this.numero = numero;
        this.resultado = 1;
    }

    public void calcular() {
        resultado = 1;
        for (int i = numero; i > 1; i--) {
            resultado *= i;
        }
    }

    public void mostrar() {
        System.out.println("Fatorial de " + numero + " = " + resultado);
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Digite um numero para calcular o fatorial: ");
        int n = sc.nextInt();

        Fatorial fat = new Fatorial(n);
        fat.calcular();
        fat.mostrar();
        
        sc.close();
    }
}
