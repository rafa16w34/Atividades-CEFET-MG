package repository;

import java.util.ArrayList;
import java.util.List;
import entity.Cliente;

public class ClienteRepository {

    private List<Cliente> clientes = new ArrayList<>();

    public void adicionar(Cliente cliente) {
        clientes.add(cliente);
        System.out.println("\nCliente " + cliente.getNome() + " cadastrado com sucesso!");
    }

    public List<Cliente> listarTodos() {
        return clientes;
    }

    public Cliente buscarPorNome(String nome) {
        for (Cliente c : clientes) {
            if (c.getNome().equalsIgnoreCase(nome)) {
                System.out.println("\nCliente encontrado!\n");
                return c;
            }
        }
        return null;
    }

    public void remover(String nome) {
        clientes.removeIf(c -> c.getNome().equalsIgnoreCase(nome));
        System.out.println("\nCliente " + nome + " removido!\n");
    }
}
