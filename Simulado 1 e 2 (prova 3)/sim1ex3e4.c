#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct livro{

    char titulo[MAX];
    char autor[MAX];
    int ano;

}book;

int main(){

    book t[MAX],a[MAX],y;

    for(int i = 0; i<3; i++){

        printf("Digite o nome do livro:\n");
        fgets(t[MAX].titulo,MAX,stdin);

        printf("\nDigite o nome do autor:\n");
        fgets(a[MAX].autor,MAX,stdin);
        
        printf("\nDigite o ano de publicacao:\n");
        scanf("%d",&y.ano);

        printf("Nome do livro:%s\nNome do autor:%s\nAno de publications:%d\n\n",t[MAX].titulo,a[MAX].autor,y.ano);
    }

    return 0;
}