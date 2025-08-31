#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct aluno{

    char nome [MAX];
    int matricula;
    int ponto;

}dados;

int main(){

    dados name[MAX];
    dados numeros ;
    dados pontuations;

    printf("Digite o nome do aluno:\n");
    scanf("%s", &name[0].nome);

    printf("\nDigite o numero da matricula:\n");
    scanf("%d", &numeros.matricula);

    printf("\nDigite a nota do aluno:\n");
    scanf("%d", &pontuations.ponto);


    ////////////////////////////////////////////////////////////

    FILE *lista;

    lista = fopen("lista.txt","w");

    fprintf(lista, "\nNome = %s", name[0].nome);
    fprintf(lista, "\nMatricula = %d", numeros.matricula);
    fprintf(lista, "\nNota = %d", pontuations.ponto);

    fclose(lista);


    return 0;
}