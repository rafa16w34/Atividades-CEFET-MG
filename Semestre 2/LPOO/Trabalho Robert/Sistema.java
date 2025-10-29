import java.time.LocalDate;
import java.time.LocalTime;
import java.util.ArrayList;
import java.util.List;

public class Sistema {

    protected static class Agendamento {
        String idCliente;
        String idExame;
        LocalDate data;
        LocalTime hora;

        Agendamento(String idCliente, String idExame, LocalDate data, LocalTime hora) {
            this.idCliente = idCliente;
            this.idExame = idExame;
            this.data = data;
            this.hora = hora;
        }

        void exibirDetalhes() {
            System.out.println(" | Cliente: " + idCliente +
                    "\n | Exame: " + idExame +
                    "\n | Data: " + data +
                    "\n | Hora: " + hora);
        }
    }

    protected List<Agendamento> agendamentos = new ArrayList<>();

    public void adicionar(String idCliente, String idExame, LocalDate data, LocalTime hora) {
        agendamentos.add(new Agendamento(idCliente, idExame, data, hora));
        System.out.println("\nAgendamento do cliente " + idCliente + " adicionado!\n");
    }

    public void listarTodos() {
        System.out.println("\nLista de Agendamentos:");
        for (Agendamento a : agendamentos) {
            a.exibirDetalhes();
        }
    }

    public void remover(String idCliente) {
        agendamentos.removeIf(a -> a.idCliente.equalsIgnoreCase(idCliente));
        System.out.println("\nAgendamento do cliente " + idCliente + " removido!\n");
    }
}
