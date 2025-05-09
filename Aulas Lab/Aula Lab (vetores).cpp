#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main(){
	
	int valor[MAX],i=0,m=2,v=0;
	
	printf("Defina os 5 valores:\n");
	
	for (;i<5;i++){
		
		scanf("%d",&valor[i]);
		
	}
	
	for(int p = 0;p < 5;p++){
	
	for(int d = 0;d < 5; d++){
	
	if (valor[d]<valor[d+1]){
		int temp = valor[d];
		valor[d] = valor[d+1];
		valor[d+1] = temp;
	}
	
}}
	
	
	for(; i<10 ;i++){
		
		valor[i] = valor[v] * m;
		m++;
		v++;
		
	}
	
	i--;
	
	while(i>=0){
		printf("\nO valor registrado no indice %d do vetor eh:%d\n",(i+1),valor[i]);
		i--;
	}
	
	free(valor);

	return 0;
}
