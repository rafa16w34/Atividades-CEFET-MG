#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main(){

    char nome[MAX];
    FILE *alunos;
    alunos = fopen("alunos.txt","w");

    for (int i = 0; i<3; i++){

        printf("\nDigite o nome do aluno %d\n",i+1);
        fgets(nome,MAX,stdin);
        fputs(nome,alunos);

    }

    fclose(alunos);

    alunos = fopen("alunos.txt","r");

    for (int i = 0; i<3; i++){

        fgets(nome,MAX,alunos);
        printf("\nNome do aluno: %s",nome);
    
    }

    fclose(alunos);

    return 0;
}