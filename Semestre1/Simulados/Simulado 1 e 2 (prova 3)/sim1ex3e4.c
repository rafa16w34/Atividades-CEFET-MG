#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct livro{

    char titulo[MAX];
    char autor[MAX];
    int ano;

}book;

int main(){

    book book[3];

    for(int i = 0; i<3; i++){

        printf("\nDigite o nome do livro:\n");
        fgets(book[i].titulo,MAX,stdin);

        printf("\nDigite o nome do autor:\n");
        fgets(book[i].autor,MAX,stdin);
        
        printf("\nDigite o ano de publicacao:\n");
        scanf("%d",&book[i].ano);
        while (getchar() != '\n');

        
        
    }

    for(int i = 0; i<3; i++){

        printf("Nome do livro:%s\nNome do autor:%s\nAno de publications:%d\n\n",book[i].titulo,book[i].autor,book[i].ano);

    }

    return 0;
}