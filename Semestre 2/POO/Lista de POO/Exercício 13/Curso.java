import java.util.ArrayList;
import java.util.List;

public class Curso {

    protected String nome;
    protected List<String> alunos = new ArrayList<>();

    public Curso(String nome) {
        this.nome = nome;
    }
    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void dados(){
        System.out.format("Nome: %s", this.nome);

        System.out.print("Lista de alunos matriculados: ");
        if(alunos.isEmpty()){
            System.out.println("Nenhum aluno ministradas!");
        }else {
            for (String aluno : alunos) {
                System.out.print(aluno);
            }
            System.out.println(" ");
        }
    }


}
