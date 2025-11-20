#include "Lista.hpp"
#include <iostream>


//---------------------------------------------------------------------------------------------------

void Lista::adicionarLista(Produto* p) {
    Nodo* novo = new Nodo(p);

    if (!cabeca) { // lista vazia
        cabeca = cauda = novo;
        return;
    }
    else {// inserir no final
        
        cauda->setProximo(novo);
        cauda = novo;
    }
}

//---------------------------------------------------------------------------------------------------

bool Lista::adicionarQuantidade(std :: string id_procurado) {

    int quantidade_nova = 0;
    Nodo* atual = cabeca;

    while (atual != nullptr) {

        Produto* produto_atual = atual->getProduto();
        std::string id_atual = produto_atual->getId();

        if (id_atual == id_procurado) {

            std::cout << "\nDigite a nova quantidade:\n-> ";
            while (!(std::cin >> quantidade_nova)) {
                std::cout << "Entrada inválida! Digite um número válido: ";
                std::cin.clear();
                std::cin.ignore(1000, '\n');
            }

            produto_atual->setQuantidade(quantidade_nova);
            std::cout << "\nQuantidade atualizada com sucesso!\n";

            return true;  // produto encontrado e atualizado
        }

        atual = atual->getProximo();
    }

    return false; // produto não encontrado
}

//---------------------------------------------------------------------------------------------------

void Lista::exibirLista(){
    if (!cabeca) {
        std :: cout << "\nLista vazia!\n";
        return;
    }

    std :: cout << "\n--- LISTA DE PRODUTOS ---\n";

    Nodo* atual = cabeca;
    while (atual != nullptr) {

        Produto* p = atual->getProduto();

        std :: cout << "ID: " << p->getId() << "\n";
        std :: cout << "Descricao: " << p->getDescricao() << "\n";
        std :: cout << "Peso: " << p->getPeso() << "\n";
        std :: cout << "Unidade: " << p->getUnidade() << "\n";
        std :: cout << "Preço: R$ " << p->getPreco() << "\n";
        std :: cout << "Quantidade: " << p->getQuantidade() << "\n";
        std :: cout << "------------------------------\n";

        atual = atual->getProximo();
    }
}

//---------------------------------------------------------------------------------------------------

//Criar carrinho

float Lista::CarrinhoDeCompras() {

    float total_compra = 0.0f;
    std::string id;
    int qtd_desejada;

    while (true) {

        std::cout << "\n--- CARRINHO DE COMPRAS ---\nID - Adicionar produto ao carrinho;\n0 - Finalizar compra;\n-> ";
        std::cin >> id;

        if (id == "0") {
            break; // finaliza compra
        }

        Nodo* atual = cabeca;
        Produto* produto_encontrado = nullptr;

        while (atual != nullptr) {
            if (atual->getProduto()->getId() == id) {
                produto_encontrado = atual->getProduto();
                break;
            }
            atual = atual->getProximo();
        }

        if (produto_encontrado == nullptr) {
            std::cout << "\nProduto não encontrado!\n";
            continue;
        }

        std::cout << "\nDigite a quantidade desejada:\n-> ";

        while (!(std::cin >> qtd_desejada)) {
            std::cout << "Entrada inválida! Digite um número: ";
            std::cin.clear();
            std::cin.ignore(1000, '\n');
        }

        if (qtd_desejada > produto_encontrado->getQuantidade()) {
            std::cout << "\nQuantidade insuficiente em estoque!\n";
            continue;
        }

        // Deduz estoque
        produto_encontrado->setQuantidade(
            produto_encontrado->getQuantidade() - qtd_desejada
        );

        float subtotal = produto_encontrado->getPreco() * qtd_desejada;
        total_compra += subtotal;

        std::cout << "\nItem adicionado ao carrinho!";
        std::cout << "\nSubtotal desse item: R$ " << subtotal;
        std::cout << "\nTotal atual: R$ " << total_compra << "\n";
    }

    std::cout << "\n----------------------------------";
    std::cout << "\nTotal final da compra: R$ " << total_compra;
    std::cout << "\n----------------------------------\n";

    return total_compra;
}

