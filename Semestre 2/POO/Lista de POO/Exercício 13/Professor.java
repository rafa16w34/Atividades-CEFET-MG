import java.util.ArrayList;
import java.util.List;

public class Professor extends Pessoa{

    protected List<String> disciplinasMinistradas = new ArrayList<>();

    public Professor(String nome, int idade) {
        super(nome, idade);
    }

    public void ministrar(Disciplina disciplina){
        System.out.format("O prof. %s vai dar aula para a disciplina: %s", this.nome, disciplina.getNome());

        disciplina.setProfessor(this);
        this.disciplinasMinistradas.add(disciplina.getNome());
    }

    @Override
    public void dados(){
        System.out.format("\nDados Cadastrados:\nNome: %s\nIdade: %d\nDisciplinas dadas:\n",this.nome,this.idade);

        if(disciplinasMinistradas.isEmpty()){
            System.out.println("Nenhuma disciplina disponível para listagem!");
        }else{
            for(String disciplina : disciplinasMinistradas){
                System.out.print(disciplina);
            }
            System.out.println(" ");
        }
    }
}