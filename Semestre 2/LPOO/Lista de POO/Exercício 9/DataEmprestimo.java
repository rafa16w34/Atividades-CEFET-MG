import java.time.LocalDate;

public class DataEmprestimo {

    private LocalDate dataEmprestimo;
    private LocalDate dataDevolucao;

    public DataEmprestimo(){

        this.dataEmprestimo = LocalDate.now();
        this.dataDevolucao = dataEmprestimo.plusWeeks(2);

    }


}