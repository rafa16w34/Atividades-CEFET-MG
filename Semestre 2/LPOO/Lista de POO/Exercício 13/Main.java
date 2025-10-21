
public class Main {
    public static void main(String[] args) {

        Curso curso1 = new Curso("Engenharia");

        Aluno aluno1 = new Aluno("Rafael", 19, curso1);

        Professor professor1 = new Professor("Eduardo", 25);

        Disciplina disciplina1 = new Disciplina(professor1, "Orientada a Objetos");

        aluno1.matricular(disciplina1, 10);

        aluno1.dados();

        System.out.println(" ");

        curso1.dados();

        System.out.println(" ");

        professor1.dados();

        System.out.println(" ");

        disciplina1.dados();

    }
}