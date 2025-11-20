#ifndef NODO_HPP
#define NODO_HPP

#include "Produto.hpp"

class Nodo {

private:
    Produto* produto;   // dado armazenado
    Nodo* proximo;      // ponteiro para o próximo nó

public:

    // Construtor
    Nodo(Produto* p)
        : produto(p), proximo(nullptr) {}

    // Getters
    Produto* getProduto() const { return produto; }
    Nodo* getProximo() const { return proximo; }

    // Setter do próximo nó
    void setProximo(Nodo* n) { proximo = n; }
};

#endif
