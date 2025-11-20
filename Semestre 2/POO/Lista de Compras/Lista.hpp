#ifndef LISTA_HPP
#define LISTA_HPP

#include "Nodo.hpp"

class Lista {
private:
    Nodo* cabeca;
    Nodo* cauda;

public:

    void adicionarLista(Produto* p);
    bool adicionarQuantidade(std :: string id_procurado);
    
    void exibirLista();

    float CarrinhoDeCompras();
    
};

#endif
