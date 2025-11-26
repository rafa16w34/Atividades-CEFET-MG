public class Main {

    public static void main(String[] args) {

        public Animal[] animais = new Animal[3];

        animais[0] = new Cachorro("Doguinho",3);
        animais[1] = new Gato("Garfiels",4);
        animais[2] = new Passaro("Michael",2);

        for (Animal i : animais) {
            a.fazerSom();

            if (i == 0){
                a.abanarRabo();
            }else if (i == 1){
                a.derrubarCoisas();
            }else if( i == 2){
                a.voar();
            }

            a.mover();
            System.out.println("------");
        }


    }



}