#include <stdio.h>
#include <stdlib.h>
#define MAX 6

int main(){

    int v[MAX],maior = 0,pmaior = 0, menor = 0, pmenor = 0;

    printf("Digite seis numeros:\n");

    for(int i=0; i<MAX; i++){

    scanf("%d",&v[i]);

        if (v[i] > maior){

            maior = v[i];
            pmaior = i;

        }

    }

    menor = v[0];

    for(int i = 0; i<MAX; i++){

        if(v[i]<menor){

            menor = v[i];
            pmenor = i;

        }

    }

    printf("\nO maior numero digitado foi %d na posicao %d.\nO menor numero digitado for %d na posicao %d",maior,pmaior+1,menor,pmenor+1);
    
    return 0;
}