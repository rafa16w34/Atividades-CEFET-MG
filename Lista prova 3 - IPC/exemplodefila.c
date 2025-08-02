#include <stdio.h>
#include <stdlib.h>

typedef struct no{

    int d;
    struct no *prox;

}Nodo;


void Inserir(Nodo **fila, int n){

    Nodo *aux ,*novo = malloc(sizeof(Nodo));

    if (novo){

        novo->d = n;
        novo->prox =NULL;
        
        if(*fila == NULL){

            *fila = novo;

        }else{

            aux = *fila;

      while(aux->prox){

                aux = aux->prox;

            }

            aux->prox = novo;

        }

    }else{

        printf("\nErro\n");

    }

}

void InserirPrioridade(Nodo **fila, int n){

    Nodo *aux ,*novo = malloc(sizeof(Nodo));

    if (novo){

        novo->d = n;
        novo->prox =NULL;
        
        if(*fila == NULL){

            *fila = novo;

        }else{

            if (n>59) {

                //Prioridade

            }else{

                aux = *fila;

                while(aux->prox){
                    aux = aux->prox;
                }
                
                aux->prox = novo;
            }
        }

    }else{
       printf("\nErro\n");
    }
}

Nodo* remover(Nodo **fila){

    Nodo *remover = NULL;

    if(*fila != NULL){

        remover = *fila;
        *fila = remover->prox;
        free(remover);

    }else{

        printf("\nfila vazia\n");

    }

    return remover;

}


void imprimir(Nodo *fila){

    printf("\nInicio:\n");

    while(fila){

        printf("\t%d\n",fila->d);
        fila = fila->prox;

    }

    printf("FIM\n");

}

int main(){

    Nodo *fila = NULL;

    int n;

    char a;

    do{
    printf("\n0-sair\n1-inserir\n2-remover\n3-imprimir\n");
    scanf(" %c",&a);

    switch(a){

        case '0':
            break;

        case '1':
            printf("\nDigite o valor que gostaria de inserir:\n");
            scanf("%d",&n);
            Inserir(&fila,n);
            break;

        case '2':
            remover(&fila);
            break;

        case '3':
            imprimir(fila);
            break;

        default:
            printf("\nNada haver irmao presta atencao po\n");
    }

}while(a != '0');

return 0;

}