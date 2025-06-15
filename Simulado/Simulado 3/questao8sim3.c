#include <stdio.h>
#include <stdlib.h>
#define LIN 5
#define COL 4

void matrix(){

    int m[LIN][COL],soma=0,media=0;

    printf("Escreva os valores que serao colocados dentro da matriz:\n");

    for(int i=0;i<LIN;i++){

        for(int j=0;j<COL;j++){

            scanf("%d",&m[i][j]);

        }
        

    }
    

    for(int i=0;i<LIN;i++){

        soma=0;

        for(int j =0;j<COL;j++){

            soma += m[i][j];

        }

        printf("\nA soma dos elementos da linha %d eh: %d\n",i+1,soma);

    }


    for(int i=0;i<COL;i++){

        media=0;

        for(int j =0;j<LIN;j++){

            media += m[j][i];

        }

        printf("\nA soma eh:%d\n",media);

        media = media/LIN;

        printf("\nA media dos elementos da coluna %d eh: %d\n",i+1,media);

    }


}


int main(){

    matrix();

    return 0;
}