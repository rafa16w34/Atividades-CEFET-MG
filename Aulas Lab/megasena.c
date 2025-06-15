#include "megasena.h"





void sortearNumeros(int sort[6]){
    
    srand(time(NULL));

    for (int i = 0; i < 6; i++) {
        sort[i] = ( (rand() % 60) + 1);
    }
}
    
int contarAcertos(int num[6], int sort[6]){

    int pontos = 0;

    for(int i = 0; i<6; i++){
        for(int j = 0;j<6;j++){
            if (num[i] == sort[j]){
                pontos += 1;
            }
        }
    }

    return pontos;

}

void exibirResultados(int pontos){
    if (pontos == 1){
        printf("\nPerdeu, mas ganhou 1 pontos");
    }
    else if (pontos == 2){
        printf("\nPerdeu, mas ganhou 2 pontos");
    }else if (pontos == 3){
        printf("\nTerno");
    }else if(pontos == 4){
        printf("\nQuadra");
    }else if(pontos == 5){
        printf("\nQuina");
    }else if(pontos == 6){
        printf("\nSena");
    }
}