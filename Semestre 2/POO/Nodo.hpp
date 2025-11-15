#ifndef NODO_HPP
#define NODO_HPP

#include <string>

class Nodo{

    private:

        std :: string descricao;
        int quantidade;
        int prioridade;
        Nodo* proximo;

    public:

        Nodo( std :: string descricao, int quantidade, int prioridade);;
        std:: string obterDescricao();
        int obterQuantidade();
        int obterPrioridade();
        Nodo* obterProximo();
        void definirProximo(Nodo* proximo);


};

#endif