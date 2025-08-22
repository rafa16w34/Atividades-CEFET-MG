#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
#include "biblioteca2.h"

int main(){

    printf("A soma de 50 e 60 eh: %d\n",somar(50,60));

    printf("A subtracao de 60 e 40 eh:%d\n",subtrair(60,40));

    printf("A multiplicacao de 60 e 40 eh:%d\n",multiplicar(60,40));

    printf("A divisao de 60 e 40 eh:%d\n",dividir(60,2));

    return 0;

}