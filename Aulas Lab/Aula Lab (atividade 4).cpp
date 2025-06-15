#include <stdio.h>
#include <stdlib.h>
#define MAX 50

int main(){
	int vetor[MAX],pos=0,neg=0,i=0;
	
	printf("Defina %d numeros para o vetor:\n",MAX);
	
	do{
		scanf("%d",&vetor[i]);
		if(vetor[i]>0){
			pos++;
		}else{
			neg++;
		}
		i++;
	}while(i<MAX);
	
	printf("\nO total de numeros positivos eh:%d\nO total de numeros negativos eh:%d",pos,neg);
	
	return 0;
}
