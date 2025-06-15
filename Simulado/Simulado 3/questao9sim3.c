#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main(){
    int v[MAX],somap=0;

    printf("Digite dez valores:\n");

    for(int i=0;i<MAX;i++){

        scanf("%d",&v[i]);

    }

    for(int i =MAX-1;i>=0;i--){

        printf("\nvalor na posicao %d eh:%d",i,v[i]);

        if(v[i]%2==0){

            somap+=v[i];

        }

    }

    printf("\nA soma dos numeros pares eh:%d",somap);

    return 0;
}