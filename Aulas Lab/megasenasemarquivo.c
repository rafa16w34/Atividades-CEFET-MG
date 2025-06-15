#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int num[6], sort[6],pontos = 0;

    printf("Digite os 6 numeros que voce gostaria de apostar:\n");

    for(int i = 0; i<6;i++){
    scanf("%d",&num[i]);
    }

    srand(time(NULL));

  
    for (int i = 0; i < 6; i++) {
        sort[i] = ( (rand() % 60) + 1);
    }
    
    for(int i = 0; i<6; i++){
        for(int j = 0;j<6;j++){
            if (num[i] == sort[j]){
                pontos += 1;
            }
        }
    }

    if (pontos == 1){
        printf("\nPerdeu, mas ganhou 1 pontos");
    }
    else if (pontos == 2){
        printf("\nPerdeu, mas goanhou 2 pontos");
    }else if (pontos == 3){
        printf("\nTerno");
    }else if(pontos == 4){
        printf("\nQuadra");
    }else if(pontos == 5){
        printf("\nQuina");
    }else if(pontos == 6){
        printf("\nSena");
    }

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