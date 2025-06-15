#include <stdio.h>
#include <stdlib.h>
#define MAX 15

int main(){
	int vetor[MAX],maior=0,menor=0,posicao=0,posicao1=0;
	
	printf("Escolha 15 valores:\n");
	
	for(int i = 0; i<15;i ++){
		scanf("%d",&vetor[i]);
		
		if(i > 0){
		
			if (vetor[i-1]<vetor[i]){
				maior = vetor[i];
				posicao = i;
			}else{
				menor = vetor[i];
				posicao1 = i;
			}	
		
	}}
	
	printf("\nO maior valor se encontra na posicao %d e eh: %d\nO menor valor se encontra na posicao %d e eh %d",(posicao+1),maior,(posicao1 +1),menor);
	
	return 0;
}
