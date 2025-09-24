//String title 
//Runnable action
//MenuItem(title,action)
//StringgetTitle()
//void execute() 


packate br.com.pagamentos.menu;

public class MenuItem implements MenuOpcao{

    private final String titulo;
    private final Runnable acao;
    public MenuItem(String titulo, Runnable acao) {

        this.titulo = Objects.requiresNonNull(titulo, "O titulo do menu nao pode ser nulo")
    
        this acao = Objects.requiresNonNull(acao, "A acao do menu nao pode ser nula")

    }

    @Override
    public String getTitulo(){

        return this.titulo;
    }

    @Override
    public void.executar(){

        this.acao.run();

    }

}