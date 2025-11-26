package service;

import entity.Cliente;
import repository.ClienteRepository;


public class ClienteService {

    private ClienteRepository clienteRepository = new ClienteRepository();

    public Cliente cadastrarCliente(String nome, int idade, String empresa){  /* Cria um novo cliente e aplica regras de negócio, como verificação de prioridade por idade.*/

        Cliente cliente = new Cliente(nome, idade, empresa);

        if (idade >= 60) {
            System.out.println("Cliente com prioridade no atendimento (idoso).");
        }

        clienteRepository.adicionar(cliente);

        return cliente;


    }

    public void listarClientes() {
        for (Cliente c : clienteRepository.listarTodos()) {
            c.exibirDados();
        }
    }

    public Cliente buscarCliente(String nome) {
        return clienteRepository.buscarPorNome(nome);
    }

    public void removerCliente(String nome) {
        clienteRepository.remover(nome);
    }


}
