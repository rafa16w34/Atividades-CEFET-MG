#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#define N 2

typedef struct Produto{

    char nome [MAX];
    float preco;
    int quantidade;

}product;

int main(){

    product abc[N];

    for (int i = 0; i<N; i++ ){

    printf("Digite o nome do produto:\n");
    fgets(abc[i].nome,MAX,stdin);

    printf("Digite o preco do produto:\n");
    scanf("%f",&abc[i].preco);

    printf("Digite a quantidade do produto:\n");
    scanf("%d",&abc[i].quantidade);

    while(getchar() != '\n');
    }


    for(int i =0; i<N; i++){

        printf("\nProduto %d:", i);
        printf("\nNome:%s\nPreco:%f\nQuantidade:%d\n\n",abc[i].nome,abc[i].preco,abc[i].quantidade);
        printf("\nTotal em estoque do produto %d: %f",i,abc[i].preco*abc[i].quantidade);

    }
    



    return 0;
}