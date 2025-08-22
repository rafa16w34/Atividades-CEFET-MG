#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main(){

    char nome[MAX], etnia[MAX], trabaio[MAX];
    int idade;

    printf("Digite o seu nome, idade, etnia e trabalho:\n");
    scanf("%s %d %s %s", nome, &idade, etnia, trabaio);

    FILE *arquivo;
    fopen("teste.bin","w");

    fprintf(, "%s %d %s %s", nome, idade, etnia, trabaio);

    fclose(arquivo);

    return 0;
}