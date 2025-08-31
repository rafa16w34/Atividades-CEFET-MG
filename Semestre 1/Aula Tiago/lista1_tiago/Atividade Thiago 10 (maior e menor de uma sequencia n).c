#include <stdio.h>
#include <stdlib.h>

int main(){
	int n = 0,x =0,x1=0,x2=999,x3=0;
	printf("Quantos numeros gostaria de fornecer?\n");
	scanf("%d",&n);
	
	printf("\nDigite os %d numeros:\n",n);
	
	while (n > 0){
	scanf("%d",&x);
	
	if (x<x2){
		
		x2 = x;
	}
	
	if (x>x1){
		x1 = x;
	}
	
	n--;
	}
	
	printf("\nO maior valor digitado foi %d e o menor foi %d",x1,x2);
	
	return 0;
}
