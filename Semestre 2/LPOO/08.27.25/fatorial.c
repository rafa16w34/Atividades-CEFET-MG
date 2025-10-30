//Código Imperativo

#include <stdio.h>
#include <stdlib.h>

int main(){

    int n = 0, fat = 1;

    printf("\nGostaria de fazer fatorial de qual numero?\n");
    scanf("%d",&n);

    while (n-1 != 0){

        fat *= n;
        n--;


    }

    printf("\n%d\n",fat);

    return 0;

}