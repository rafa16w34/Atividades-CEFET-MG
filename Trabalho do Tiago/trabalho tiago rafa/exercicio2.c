#include <stdio.h>
#include <stdlib.h>

void busca_fibonacci(int n){

int v[n];

    v[0] = 0;
    v[1] = 1;
    v[2] = 1;

    for(int i = 3; i< n; i++){

        v[i] = v[i-2] + v[i-1];

    }

    int x = 0;

    printf("\nQual numero voce gostaria de procurar:\n");
    scanf("%d",&x);

    int meio = n/2;

    if (v[meio] == x){

        printf("\nIndice: %d", meio);

    }else if (v[meio] > x){
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

    }else if (v[meio] < x){ 

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

    printf("Digite o valor de n:\n");
    scanf("%d",&n);

    busca_fibonacci(n);

    
    
    return 0;
}