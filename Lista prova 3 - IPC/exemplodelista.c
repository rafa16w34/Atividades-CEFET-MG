#include <stdio.h>
#include <stdlib.h>

typedef struct no{

    int n;
    struct no *proximo;

}Nodo;


void InserirInicio(Nodo **lista, int valor){

    Nodo *novo = malloc(sizeof(Nodo));

    if(novo){

        novo-> n = valor;
        novo->proximo = *lista;
        *lista = novo;

    }else{

        printf("\nErro de alocacao\n");
    }

}

void InserirFim(Nodo **lista, int valor){

    Nodo *novo = malloc(sizeof(Nodo));

    if(novo){

        if(*lista){

            Nodo *aux = *lista;

            while(aux->proximo){

                aux = aux->proximo;

            }

            novo->n = valor;
            novo->proximo = NULL;
            aux->proximo = novo;

        }else{

            *lista = novo;

        }

    }else{

        printf("\nErro de alocacao\n");

    }
}


void InserirMeio(Nodo **lista,int valor, int anterior){

    Nodo *novo = malloc(sizeof(Nodo));

    if (novo){
        
        novo->n = valor;

        if(*lista){

            Nodo *aux = *lista;

            while((aux->n != anterior)&&(aux->proximo)){

                aux = aux->proximo;

            }


        }else{

            novo->proximo = NULL;
            *lista = novo;

        }

    }else{

        printf("\nErro\n");

    }
    

}


int main(){

    Nodo *lista = NULL;

    int opcao,valor;

    do{
        printf("\n1-inserir inicio\n2-inserir no final\n3-inserir no meio\n4-imprimir");
        scanf("%d", &opcao);

        switch(opcao){

            case 1:
                break;

            case 2:
                break;

            case 3:
                break;

            case 4:
                break;
        }

    }while(opcao == 0);

    return 0;
}

