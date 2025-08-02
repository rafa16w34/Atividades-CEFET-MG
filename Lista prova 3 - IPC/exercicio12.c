#include <stdio.h>
#include <stdlib.h>

typedef struct no{

    int n;
    struct no *proximo;

}No;

void InserirInicio(int x,No **inicio){

    No *novo = malloc(sizeof(No));
    

    if(novo){

        novo->n = x;
        novo->proximo = *inicio;
        *inicio = novo;

    }else{

        printf("\nErro\n");

    }

}


void InserirFim(No **inicio,int x){

    No *novo = malloc(sizeof(No));

    if (novo){

        novo->n = x;
        novo->proximo = NULL;

        if(*inicio == NULL){

            *inicio = novo;
        }else{

            No *aux;
            aux = *inicio;

            while(aux){

                aux = aux->proximo;

            }

            aux->proximo = novo;
        }

    }else{
        printf("\nErro\n");
    }

}

void Removerinicio (No **inicio){

    if(*inicio){

        No *novo = *inicio;

        if (novo->proximo){

            *inicio = novo->proximo;
            free(novo);

        }else{

            *inicio = NULL;
            free(novo);

        }

    }else{
        
        printf("\nlista vazia\n");

    }

}

void RemoverFim (No **inicio){

    if(*inicio){

        No *aux = *inicio;

        if(aux->proximo == NULL){

            *inicio = NULL;
            free(aux);
            return;

        }
    
        while(aux->proximo->proximo){

            aux = aux->proximo;

        }
  
        free(aux->proximo);

        aux->proximo = NULL;

    }else{

        printf("\nLista vazia\n");

    }
}

int Contar(No *fila){

    int n = 0;

    No *aux = fila;

    while(aux){

        aux = aux->proximo;
        n++;
    }

    return n;

}

int main(){

    int x;
    No *inicio = NULL;

    printf("Digite o valor de x");

    InserirInicio(x, &inicio);


    return 0;
}