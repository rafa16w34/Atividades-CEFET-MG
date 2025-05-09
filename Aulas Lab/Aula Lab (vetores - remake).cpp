#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main(){
	
	int n[MAX],m=2,y=0,i=0,x=0;
	
	printf("Defina o valor para as 5 posicoes do vetor:\n");
	
	for(;i<5;i++){
		
		scanf("%d",&n[i]);
		
	}
	
	for(int a=0;a<5;a++){
		
		for(int b=0;b<5;b++){
			
			if (n[b]<n[b+1]){
				
				x = n[b];
				n[b]=n[b+1];
				n[b+1]=x;
			}
			
		}
	}

	
	while (i <= 10) {
		n[i] = n[y] * m;
		m++;
		i++;
		y++;
	}
	
	i = 0;
	
	while(i<10){
		printf("\nO valor armazenado na posicao %d eh: %d",(i+1),n[i]);
		i++;
	}
	
	free(n);
	
	return 0;
	
}
