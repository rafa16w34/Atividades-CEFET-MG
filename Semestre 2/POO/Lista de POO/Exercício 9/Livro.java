public class Livro {

    private int isbn;
    private String titulo;
    private String autor;
    private boolean disponivel;

    public Livro(){

    }

    public String getTitulo() {
        return titulo;
    }

    public boolean getDisponivel(){
        return disponivel;
    }

    public void setTitulo(String titulo){
        this.titulo = titulo;
    }

    public void setDisponivel(boolean disponivel){
        this.disponivel = true;
    }



}