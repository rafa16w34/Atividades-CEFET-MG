import java.util.*;
import java.util.ArrayList;

public class Aluno extends Pessoa {

    protected String matricula;
    protected Curso curso;
    protected List<Disciplina> disciplinasMatriculadas = new ArrayList<>();
    protected double notas = 0;
    protected double cr = 0;


    public Aluno(String nome, int idade, Curso curso) {
        super(nome, idade);
        this.curso = curso;

        curso.alunos.add(this.nome);
    }

    public void matricular(Disciplina disciplina,double nota) {
        System.out.println("Aluno "+this.nome + " esta matriculado em "+ disciplina.getNome() + " com a nota "+nota);

        this.disciplinasMatriculadas.add(disciplina);
        disciplina.alunos.add(this.nome);

        this.notas += nota;
        this.cr = this.notas/disciplinasMatriculadas.size();
    }

    @Override
    public void dados(){

        System.out.format("\nDados Cadastrados\nNome: %s\nIdade: %d\nNota total: %.2f\nCR: %.2f\nDisciplinas matriculadas:\n",this.nome,this.idade,this.notas,this.cr)


        if(disciplinasMatriculadas.isEmpty()){
            System.out.println("Nenhuma disciplinas matriculada!");
        }else{
            for(Disciplina disciplina : disciplinasMatriculadas){
                System.out.print(disciplina.getNome());
            }
            System.out.println(" ");
        }
    }

    public Curso getCurso() {
        return curso;
    }

    public void setCurso(Curso curso) {
        this.curso = curso;
    }

    public String getMatricula() {
        return matricula;
    }

    public void setMatricula(String matricula) {
        this.matricula = matricula;
    }



}
