public class Usuario{

    private String nome;
    private int matricula;
    private String [] livrosEmprestados;
    private int posicao;

    public Usuario(){

        this.posicao = 0;

    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setLivrosEmprestados(String[] livrosEmprestados) {
        this.livrosEmprestados = livrosEmprestados;
    }

    public String getNome() {
        return nome;
    }

    public String[] getLivrosEmprestados() {
        return livrosEmprestados;
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////

    public void pegarLivro(Livro livro){



        if (livro.getDisponivel() == true){

            System.out.format("\nO "%s" foi pego para empréstimo com sucesso!\n",livro.getTitulo);
            livrosEmprestados[posicao] = livro.getTitulo;
            posicao++;


        }else{

            System.out.format("\nO "%s" não está disponível para empréstimo!\n",livro.getTitulo());

        }
    }

    public void devolverLivros(){

        boolean encontrado = false;
        for (int i = 0; i < posicao; i++) {
            if (livrosEmprestados[i].equals(livro.getTitulo())) {
                System.out.format("\nO livro \"%s\" foi devolvido com sucesso!\n", livro.getTitulo());
                livrosEmprestados[i] = null;
                livro.setDisponivel(true);
                encontrado = true;
                break;
            }
        }
        if (!encontrado) {
            System.out.format("\nO livro \"%s\" não foi pego para empréstimo!\n", livro.getTitulo());
        }

    }