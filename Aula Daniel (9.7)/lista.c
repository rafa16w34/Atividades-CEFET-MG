#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void criarLista(struct ListaSimplesEnc *pList) { 
    
    pList->prim = NULL;

}

void mostrarLista(struct ListaSimplesEnc *pList) {

    struct Nodo *p;


    for (p = pList->prim; p != NULL; p = p->prox){

        printf("Matricula: %d | Notas: %d, %d, %d, %d | Media: %lf\n",
            p->info.matricula,
            p->info.n1,
            p->info.n2,
            p->info.n3,
            p->info.n4,
            p->info.media);

    }
    printf("\n");
}

void inserirIni(struct ListaSimplesEnc *pList, dados v) {
    struct Nodo *novo;
    novo = (struct Nodo*)malloc(sizeof(struct Nodo));
    novo->info = v;
    novo->prox = pList->prim;
    pList->prim = novo;
}

void removerIni(struct ListaSimplesEnc *pList){
    
    struct Nodo *pAux = pList->prim;
    pList->prim = pList->prim->prox;
    free(pAux);

}

int estaVazia(struct ListaSimplesEnc *pList) {

    return (pList->prim == NULL);

}