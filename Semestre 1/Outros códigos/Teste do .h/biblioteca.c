#include "biblioteca.h"
#include "biblioteca2.h"

int somar (int a, int b){

    return a + b;

}

int subtrair(int a, int b){

    return a - b;

}

int multiplicar(int a,int b){

    return a * b;

}

int dividir(int a, int b){

    if (b!=0){

        return(a/b);

    }else{

        return 0;

    }

}