#ifndef LISTA_HPP
#define LISTA_HPP

#include "Nodo.hpp"
#include <string>

class Lista{

    private:
        Nodo* cabeca;
        Nodo* cauda;

    public:
        void adicionarLista(std :: string descricao, int quantidade, int prioridade,bool inicioLista);
        void removerUlltimo();
        bool estaPresente(std :: string descricao);
        void exibirLista();
        int tamanhoLista();


};

#endif

