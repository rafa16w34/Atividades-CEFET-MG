#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main(){

    int i =0;

    printf("Quantas linhas tem o arquivo?\n");
    scanf("%d",&i);

    FILE *file;
    file = fopen("teste.txt", "r");

    char x[MAX];

    for (int j =i; j >0;j--){
    fgets(x,MAX,file);
    printf("\nx:%s",x);
    }

    fclose(file);


    return 0;
}