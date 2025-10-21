import java.util.ArrayList;
import java.util.List;

public class Disciplina {

    protected String nome;
    protected Professor professor;
    protected List<String> alunos = new ArrayList<>();

    public Disciplina(Professor professor, String nome) {
        this.professor = professor;
        this.nome = nome;

        this.professor.disciplinasMinistradas.add(this.nome);
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



    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public Professor getProfessor() {
        return professor;
    }

    public void setProfessor(Professor professor) {
        this.professor = professor;
    }
}