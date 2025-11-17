#include "Nodo.hpp"
#include <string>

Nodo::Nodo(std :: string descricao, int quantidade, int prioridade) {
    this->descricao = descricao;
    this->quantidade = quantidade;
    this->prioridade = prioridade;
    this->proximo = nullptr;
}

std :: string Nodo::obterDescricao() {
    return descricao;
}

int Nodo::obterQuantidade() {
    return quantidade;
}

int Nodo::obterPrioridade() {
    return prioridade;
}

Nodo* Nodo::obterProximo() {
    return proximo;
}

void Nodo::definirProximo(Nodo* proximo) {
    this->proximo = proximo;
}
