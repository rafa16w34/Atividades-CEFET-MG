#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void criarLista(struct ListaSimplesEnc *pList) {
pList->prim = NULL;
}

void mostrarLista(struct ListaSimplesEnc *pList) {
struct Nodo *p;

for (p = pList->prim; p != NULL; p = p->prox){
printf("%d\t", p->info);
}

printf("\n");
}




void inserirIni(struct ListaSimplesEnc *pList, int v) {
struct Nodo *novo;
novo = (struct Nodo*)malloc(sizeof(struct Nodo));

novo->info = v;


novo->prox = pList->prim;
pList->prim = novo;



}




void removerIni(struct ListaSimplesEnc *pList) {

    if(pList->prim != NULL){

        struct Nodo *pAux = pList->prim;
        pList->prim = pList->prim->prox;
        free(pAux);

    }else{

        printf("\nLista vazia\n");

    }
}







int estaVazia(struct ListaSimplesEnc *pList) {
return (pList->prim == NULL);
}



void ordenar(struct ListaSimplesEnc *pList, int nodo) {//PRECISAMOS ORDERNAR ESSA BUDEGA VEIA


if(pList->prim != NULL){//se o primeiro não for nulo

    for(int i = 0; i<nodo; i++){

        for(int j = 0; j<nodo; j++){

            if (pList->prim < pList->prim->prox){

                struct Nodo *paux = pList->prim;
                pList->prim = pList->prim->prox;
                pList->prim->prox = paux;
                

            }


        }


    }

}
}