#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int main(){

    char s[MAX];
    int x,i=0;

    printf("\nDigite a sua string:\n");
    fgets(s,MAX,stdin);

    x = strlen(s) - 1;

    char *n;

     n = &s[i];

    for(; i<x; i++){

        printf("\n n:%c\n",*n);

        n++;

    }

    return 0;
}