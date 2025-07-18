#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main(){

    float *vet;

    vet = (float*)malloc(MAX*sizeof(float*));


    printf("\nDigite os 10 floats do vetor:\n");

    for(int i =0;i<MAX;i++){

        scanf("%f", &vet[i]);

    }

    printf("\nO quinto elemento eh:%f\n",vet[4]);


    free(vet);

    return 0;
}