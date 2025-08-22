#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    float *v; //um vetor com n floats
    //v[0] + v[1] + ... /n
    //v[] * n

    printf("Quantos espacos de vetor vc quer?\n");
    scanf("%d",&n);

    v = (float*) malloc(n*sizeof(float));

    printf("\nDigite os %d de floats do vetor:\n", n);

    float media = 0;

    for(int i =0;i<n;i++){

        scanf("%f", &v[i]);
        media += v[i];

    }

    printf("\nsoma: %f\n",media);

    media = media/n;

    printf("\nmedia: %f\n",media);

    free(v);

    return 0;
}