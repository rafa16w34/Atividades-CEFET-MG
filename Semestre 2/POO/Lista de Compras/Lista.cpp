#include "Lista.hpp"
#include <iostream>



void Lista::adicionarLista(std :: string descricao, int quantidade, int prioridade,bool inicioLista) {// Adicionar item (inserção no final da lista)
    
    Nodo* novo = new Nodo(descricao, quantidade, prioridade);

    if (cabeca == nullptr) {    // lista vazia

        cabeca = novo;
        cauda = novo;

    } else if (inicioLista == 1) {

        cauda->definirProximo(novo);
        cauda = novo;

    } else if (inicioLista == 0) {
        
        novo->definirProximo(cabeca);
        cabeca = novo;

    }
}


// Remover último item

void Lista::removerUlltimo() {
    if (cabeca == nullptr) {
        std :: cout << "\nA lista está vazia!\n";
        return;
    }

    // Só um elemento
    if (cabeca == cauda) {
        delete cabeca;
        cabeca = nullptr;
        cauda = nullptr;
        return;
    }

    // Mais de um elemento
    Nodo* atual = cabeca;
    while (atual->obterProximo() != cauda) {
        atual = atual->obterProximo();
    }

    delete cauda;
    cauda = atual;
    cauda->definirProximo(nullptr);
}


bool Lista::estaPresente(std :: string descricao) {// Verifica se o item existe na lista

    Nodo* atual = cabeca;

    while (atual != nullptr) {

        if (atual->obterDescricao() == descricao){ 
            return true;
        }else{
        atual = atual->obterProximo();
        }
    }

    return false;//Caso não ache na lista
}

void Lista::exibirLista() {//Exibe lista completa

    if (cabeca == nullptr) {//Se a lista estiver vazia
        std :: cout << "\nA lista está vazia!\n";
        return;

    }else{

        Nodo* atual = cabeca;

        std :: cout << "\n=== LISTA DE COMPRAS ===\n";

        while (atual != nullptr) {

            std :: cout << "Descrição: " << atual->obterDescricao() << " | Quantidade: " << atual->obterQuantidade() << " | Prioridade: " << atual->obterPrioridade() <<"\n\n";

            atual = atual->obterProximo();

        }
    }
}

int Lista::tamanhoLista() {//Retorna o tamanho da lista
    int i = 0;
    Nodo* atual = cabeca;

    while (atual != nullptr) {
        i++;
        atual = atual->obterProximo();
    }

    return i;
}
