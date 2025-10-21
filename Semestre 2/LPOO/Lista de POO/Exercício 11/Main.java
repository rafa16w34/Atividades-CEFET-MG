public class Main {

    public static void main(String[] args) {

        Cachorro dog = new Cachorro("Doguinho",3);
        Gato cat = new Gato("Garfield",4);
        Passaro bird = new Passaro ("Michael",2);

        dog.fazerSom();
        dog.abanarRabo();
        cat.fazerSom();
        cat.derrubarCoisas();
        bird.fazerSom();
        bird.voar();


    }



}