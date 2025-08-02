#include <stdio.h>
#include <stdlib.h>

typedef struct no{

    int n;
    struct no *proximo;

}Nodo;

void Inserir(Nodo **fila,int valor){

    Nodo *novo = malloc(sizeof(Nodo));

    if(novo){

    novo->n = valor;
    novo->proximo = NULL;

    if(*fila == NULL){

            *fila = novo;

        }else{

            Nodo *aux = *fila;

            while(aux->proximo != NULL){

                aux = aux->proximo;
                

            }

            aux->proximo = novo;



        }

    }else{

        printf("\nErro de alocacao\n");

    }
}


void Remover (Nodo **fila){

    if (*fila == NULL){

        printf("\nFila vazia\n");

    }else{

        Nodo *remover = *fila;

        if(remover->proximo == NULL){

            *fila = NULL;
            free(remover);

        }else{

            *fila = remover->proximo;
            free(remover);
            remover = NULL;
         }
    }
}

void Imprimir(Nodo *lista){

    Nodo *aux = lista;

    if(aux){

        printf("\nInicio\n");

        while(aux){

            printf("\n%d\n",aux->n);
            aux = aux->proximo;

        }


        printf("\nFim\n");

    }
    
}

int Contar(Nodo *fila){

    Nodo *aux = fila;

}

int main(){

    int valor = 0;

    Nodo *fila = NULL;

    return 0;
}