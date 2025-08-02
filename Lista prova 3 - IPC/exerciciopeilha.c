#include <stdio.h>
#include <stdlib.h>

typedef struct no{//pilha que lê um inteiro

    int n;
    struct no *proximo;

}No;

void empilhar(No **pilha, int valor){//empilhar

    No *novo = malloc(sizeof(No));

    if(novo){

        novo->n = valor;
        novo->proximo = *pilha;
        *pilha = novo;

    }else{

        printf("\nErro\n");

    }

}

void desempilhar(No **pilha){//desempilhar

    if(*pilha){

        No *aux = *pilha;
        
        if (aux->proximo){

            *pilha = aux->proximo;
            free(aux);
            aux = NULL;
            

        }else{

            *pilha = NULL;
            free(aux);

        }
        

    }else{

        printf("\nLista vazia\n");

    }


}

void topo(No *pilha){//mostrar topo

    No *aux = pilha;

    if(aux){

        printf("\ntopo:%d\n",aux->n);


    }else{

        printf("\nLista vazia\n");

    }
}

void Vazia(No *pilha){

    if (pilha == NULL){

        printf("\nA pilha ta vazia\n");

    }else{

        printf("\nA pilha nao esta vazia\n");

    }

}

int main(){

    int valor,opcao;
    No *pilha = NULL;

    while(opcao!=0){
        printf("\n1-Empilhar\n2-Desempilhar\n3-Mostrar topo\n4-Verificar se esta vazia\n");
        scanf(" %d", &opcao);

        switch(opcao){

            case 1:
                printf("\nDigite o valor que gostaria de empilhar\n");
                scanf(" %d",&valor);

                empilhar(&pilha,valor);

                break;

            case 2:

                desempilhar(&pilha);

                break;

            case 3:

                topo(pilha);

                break;

            case 4:

                Vazia(pilha);

                break;

        }

    }

    return 0;

}