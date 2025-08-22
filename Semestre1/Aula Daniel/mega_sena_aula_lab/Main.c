#include "megasena.h"

int main(){

    srand(time(NULL));
    int num[6], sort[6],pontos = 0;

    printf("Digite os 6 numeros que voce gostaria de apostar:\n");

    for(int i = 0; i<6;i++){
    scanf("%d",&num[i]);
    }

    sortearNumeros( sort);

    contarAcertos(num, sort);

    exibirResultado(pontos);


    printf("\n Numeros escolhidos:\n");

    for(int i = 0; i<6; i++){
        printf("|%d|",num[i]);
    }

    printf("\n\n Numeros sorteados:\n");

    for(int i = 0; i<6; i++){
        printf("|%d|",sort[i]);
    }


    return 0;
}