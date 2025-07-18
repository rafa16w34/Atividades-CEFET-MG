#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;

    FILE *teste;
    teste = fopen("numeros.txt","w");

    printf("\nDigite 10 numeros:\n");

    for (int i = 0; i<10; i++){

        scanf("%d",&n);
        fprintf(teste,"%d\n",n);

    }

    fclose(teste);

    return 0;
}