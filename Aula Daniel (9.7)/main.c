#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#define MAX 5



int main(){

    dados trem[MAX];

    struct ListaSimplesEnc minhaLista, minhaLista1;
    
    criarLista(&minhaLista);
    criarLista(&minhaLista1);

    for(int i = 0; i<MAX ; i++){

        printf("\nDigite o numero da matricula do aluno %d:\n",i+1);
        scanf("%d",&trem[i].matricula);

        printf("\nDigite a nota do primeiro bim. do aluno %d:\n",i+1);
        scanf("%d",&trem[i].n1);

        printf("\nDigite a nota do segundo bim. do aluno %d:\n",i+1);
        scanf("%d",&trem[i].n2);

        printf("\nDigite a nota do terceiro bim. do aluno %d:\n",i+1);
        scanf("%d",&trem[i].n3);

        printf("\nDigite a nota do quarto bim. do aluno %d:\n",i+1);
        scanf("%d",&trem[i].n4);

        trem[i].media = (trem[i].n1 + trem[i].n2 + trem[i].n3 + trem[i].n4 )/4; 

    }

    for(int i = 0; i<MAX; i++){

        inserirIni(&minhaLista, trem[i]);

    }


    //imprimir a lista estática
    if (estaVazia(&minhaLista)) {
    
        printf("Lista vazia\n");
    
    } else {
        
        printf("\n\nLista estatica:\n");
        mostrarLista(&minhaLista);
    
    }

    //ordenar antes de inserir na lista dinamica

    for(int i =0; i<MAX-1; i++){
        for(int j = 0; j<MAX-1; j++){

            if (trem[j].media>trem[j+1].media){

                dados n = trem[j];
                trem[j] = trem[j+1];
                trem[j+1] = n;

            }

        }
    }

    for(int i = 0; i<MAX; i++){

        inserirIni(&minhaLista1, trem[i]);

    }

    if (estaVazia(&minhaLista1)) {
    
        printf("Lista vazia\n");
    
    } else {
        
        printf("\n\nLista dinamica:\n");
        mostrarLista(&minhaLista1);
    
    }
    
    return 0;
}