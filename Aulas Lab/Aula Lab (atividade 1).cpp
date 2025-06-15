#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main(){
	int vetor[MAX],vetor2[MAX],vetor3[MAX+10],aux=0;
	
	printf("Digite 10 valores\n");
	
	for (int i = 0; i < 10; i ++){
		scanf("%d",&vetor[i]);
	}

	printf("\n\nDigite mais 10 valores\n");
	
	for (int i = 0; i < 10; i ++){
		scanf("%d",&vetor2[i]);
	}
	
	
	for (int x=0;x<10;x++ ){
		
		vetor3[x] = vetor[x];
		vetor3[x+10]=vetor2[x];
		
		
	}

	
		for(int y=0; y<20 ;y++){
		
		printf("\nO valor na posicao %d eh: %d\n",y+1,vetor3[y]);
		
	}		

	
	
	for (int i = 0; i < 20; i++){
		
		for(int j = 0; j <20 ; j++){
			
			if (vetor3[j] < vetor3[j+1]){
				
				aux = 0;
				aux = vetor3[j];
				vetor3[j] = vetor3[j+1];
				vetor3[j+1] = aux;
			
			}
		}
	}
	

		for(int y=0; y<20 ;y++){
		
		printf("\nO valor na posicao %d eh: %d",y+1,vetor3[y]);
		
	}	
	
	
	return 0;
}
