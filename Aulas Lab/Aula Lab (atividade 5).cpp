#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main(){
	int vetor[MAX],vetor1[MAX];
	
	printf("Defina %d valores para o vetor:\n",MAX);
	
	for(int i = 0; i<10; i++){
		
		scanf("%d",&vetor[i]);
		
		if (vetor[i] > 0){
			vetor1[i] = vetor[i];
		}else if (vetor[i] <= 0){
			vetor1[i] = 1;//simboliza um valor nulo
		}
		
	}
	
	for(int i=0;i<10;i++){
		printf("O vetor B eh ingual a: %d\n",vetor1[i]);
	}
	
	return 0;
}
