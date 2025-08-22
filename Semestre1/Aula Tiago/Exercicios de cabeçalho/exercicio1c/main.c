#include <stdio.h>
#include <stdlib.h>
#include "area.h"

int main(){

    int a,b,r;
    float pi;

    printf("Quais os valores dos lados dos retangulos:\n");
    scanf("%d %d", &a, &b);

    printf("\nQual o valor de pi voce gostaria de usar?\n");
    scanf("%f", &pi);

    printf("\nQual o valor do raio da circuferencia?\n");
    scanf("%d", &r);

    r= r*r;

    printf("\nArea retangulo: %d \nArea da circuferencia: %f",retangulo(a,b),circulo(pi,r));

    return 0;
}