#include <stdio.h>
#include <stdlib.h>

void busca_fibonacci(int n){

int v[n];//ja definiu as primeiras posições do fibonacci

    v[0] = 0;
    v[1] = 1;
    v[2] = 1;

    for(int i = 3; i< n; i++){//preenche as outras posições de fib. com o n definido pelo usuario

        v[i] = v[i-2] + v[i-1];

    }

    int x = 0;

    printf("\nQual numero voce gostaria de procurar:\n");//pede o numero da sequencia que voce quer saber a posicao
    scanf("%d",&x);

    int meio = n/2;//define qual sera o meio

    if (v[meio] == x){

        printf("\nIndice: %d", meio); // o meio é o numero que procuravamos

    }else if (v[meio] > x){ //o meio é maior que o numero que procuramos, entao precisamos analisar os numero que vem antes de meio.

        int i = 1;

        while(v[meio - i] != x){

            i++;

            if (i>n){
                break;
            }

        }

        if((v[meio-i]) == x){
            printf("\nIndice: %d", meio - i);
        }else{
             printf("\nIndice: -1");
        }

    }else if (v[meio] < x){ //caso o meio seja menor que o numero que procuramos, devemos analisar no que vem depois do meio

        int i = 1;

        while(v[meio + i] != x){

            i++;

            if (i>n){
                break;
            }

        }

           if((v[meio+i]) == x){
            printf("\nIndice: %d", meio + i);
        }else{
             printf("\nIndice: -1");
        }


    }




}

int main(){

    int n;

    printf("Digite o valor de n:\n");//pede pra digitar o valor maximo para a sequencia
    scanf("%d",&n);

    busca_fibonacci(n);

    
    
    return 0;
}