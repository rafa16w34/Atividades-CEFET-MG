#ifndef LISTA_H
#define LISTA_H

typedef struct aluno{

    int matricula,n1,n2,n3,n4;
    double media;

}dados;


struct Nodo {

    dados info;
    struct Nodo *prox;

};


struct ListaSimplesEnc {
    
    struct Nodo *prim;

};

void criarLista(struct ListaSimplesEnc *pList);

void mostrarLista(struct ListaSimplesEnc *pList);

void inserirIni(struct ListaSimplesEnc *pList, dados v);

void removerIni(struct ListaSimplesEnc *pList);

int estaVazia(struct ListaSimplesEnc *pList);


#endif