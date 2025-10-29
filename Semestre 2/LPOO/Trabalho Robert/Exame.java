import java.time.LocalDate;
import java.util.HashMap;
import java.util.Map;

public class Exame {

    static class InfoExame {
        int diasEntrega;
        boolean precisaPreparo;

        InfoExame(int diasEntrega, boolean precisaPreparo) {
            this.diasEntrega = diasEntrega;
            this.precisaPreparo = precisaPreparo;
        }
    }

    private String nome;
    private boolean convenio;
    private LocalDate dataColeta;
    private int dias;

    private static final Map<String, InfoExame> exames = new HashMap<>();
    static {
        exames.put("hemograma", new InfoExame(2, false));
        exames.put("raio-x", new InfoExame(5, false));
        exames.put("urina", new InfoExame(3, false));
        exames.put("colonoscopia", new InfoExame(7, true));
        exames.put("covid", new InfoExame(1, false));
        exames.put("glicose", new InfoExame(2, false));
    }

    public Exame(String nome, boolean convenio, LocalDate dataColeta) {
        this.nome = nome.toLowerCase();

        this.convenio = convenio;
        this.dataColeta = dataColeta;
    }

    public LocalDate dataDeEntrega() {
        InfoExame info = exames.get(nome);
        if (info != null) {
            return dataColeta.plusDays(info.diasEntrega);
        } else {
            System.out.println("\nExame \"" + nome + "\" não encontrado.\n");
            return null;
        }
    }

    public void precisaDePreparo() {
        InfoExame info = exames.get(nome);
        if (info != null) {
            if (info.precisaPreparo)
                System.out.println("\nO exame \"" + nome.toUpperCase() + "\" requer preparo prévio.\n");
            else
                System.out.println("\nO exame \"" + nome.toUpperCase() + "\" não requer preparo.\n");
        } else {
            System.out.println("\nExame não encontrado!\n");
        }
    }

}
