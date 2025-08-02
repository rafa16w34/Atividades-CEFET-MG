#ifndef LISTA_H
#define LISTA_H

struct Nodo {
    int info;
    struct Nodo *prox;
};

    struct ListaSimplesEnc {
    struct Nodo *prim;
};

void criarLista(struct ListaSimplesEnc *pList);
void mostrarLista(struct ListaSimplesEnc *pList);
void inserirIni(struct ListaSimplesEnc *pList, int v);
void ordenar(struct ListaSimplesEnc *pList, int nodo);
void removerIni(struct ListaSimplesEnc *pList);
int estaVazia(struct ListaSimplesEnc *pList);

#endif