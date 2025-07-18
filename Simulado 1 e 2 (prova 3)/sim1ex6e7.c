#include <stdio.h>
#include <stdlib.h>

void funcao(int a){
//void funcao(int *a){

    a = a + 1;
    //*a = *a + 1;

    printf("\nO valor de a dentro da funcao eh:%d\n",a);

}

int main(){

    int a = 0;

    printf("\nO valor de a eh:%d\n",a);

    funcao(a);
    //funcao(&a);

    printf("\nO novo valor de a eh:%d",a);

    return 0;
}

//No primeiro caso, sem usar os ponteiros, o valor foi alterado somente na funcao, no main nao houve mudanca, mas no segundo caso, com o ponteiro, ai sim o valor foi alterado para o main tambem.