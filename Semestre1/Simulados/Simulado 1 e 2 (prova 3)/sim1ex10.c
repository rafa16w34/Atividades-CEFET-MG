#include <stdio.h>
#include <stdlib.h>
#define LIN 3
#define COL 3

int main(){

    int **m;

    m = (int **)malloc(3*sizeof(int));

    for(int i = 0;i<3;i++){

        m[i] = (int*)malloc(3*sizeof(int*));

    }

    for(int i =0;i<LIN;i++){
        for(int j = 0; j<COL; j++){

            m[i][j] = i * j;

        }
    }

    printf("\n\n\nMatriz:\n\n");

    for(int i =0;i<LIN;i++){
        for(int j = 0; j<COL; j++){

            printf("|%d|",m[i][j]);

            if(j == 2){

                printf("\n");
                
            }

        }
    }
    

    free(m);

    return 0;
}