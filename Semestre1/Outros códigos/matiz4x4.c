#include <stdio.h>
#include <stdlib.h>
#define LIN 4
#define COL 4

int main(){

    int m[LIN][COL], n =0, f=1;

    // diagonal principal: [0,0] [1,1] [2,2] [3,3] [4,4]

    //acima da diagonal p:       [0,1] [0,2] [0,3] [0,4]
    //acima da diagonal p:             [1,2] [1,3] [1,4]
    //acima da diagonal p:                   [2,3] [2,4]
    //acima da diagonal p:                         [3,4]

    for (int i = 0; i<=LIN; i++){
        for (int j = 0; j<=COL; j++){

            if (j > i){

                n++;

            }


        }

    }

    printf("O numero de itens acima da diagonal principal sao: %d\n", n);


    //diagonal secundaria: [0,4] [1,3] [2,2] [3,1] [4,0]

    //acima da diagonal s: [0,0] [0,1] [0,2] [0,3]
    //acima da diagonal s: [1,0] [1,1] [1,2]
    //acima da diagonal s: [2,0] [2,1]    
    //acima da diagonal s: [3,0]

    //abaixo da diagonal s:                         [1,4]
    //abaixo da diagonal s:                   [2,3] [2,4]
    //abaixo da diagonal s:             [3,2] [3,3] [3,4]    
    //abaixo da diagonal s:       [4,1] [4,2] [4,3] [4,4]

    n =0;


   for (int i = 1; i<=LIN; i++){
        for (int j = 0; j<=COL; j++){

            if (j > COL - f){

                n++;

            }


        }

        f++;

    }

    printf("\nO numero de itens abaixo da diagonal secundaria sao: %d", n);


    return 0;
}