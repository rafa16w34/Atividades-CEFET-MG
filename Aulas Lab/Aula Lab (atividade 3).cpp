#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main(){
	int vetor1[MAX],vetor2[MAX],vetor3[MAX], i = 0;
	
	printf("Defina os valores do vetor 1:\n");
	
	while(i<10){
		scanf("%d",&vetor1[i]);
		i++;
	}
	
	printf("\nDefina os valores do vetor 2:\n");
	
	i=0;
	while(i<10){
		scanf("%d",&vetor2[i]);
		i++;
	}
	
	printf("\n");
	
	i=0;
	do{
		vetor3[i] = vetor1[i] * vetor2[i];
		printf("O valor de %d * %d eh ingual a %d\n",vetor1[i],vetor2[i],vetor3[i]);
		i++;
	}while(i<10);
	
	return 0;
}
