#include <stdio.h>
#include <stdlib.h>

int reajuste(int s){
	
	if (s < 3000){
		
		return ( s + (s*0.2));
		
	}else if ((s >= 3000) && (s <= 8000)){
		
		return ( s + (s*0.15));
		
	}else if (s > 8000){
		
		return ( s + (s*0.1));
	}
}

int main(){
	int n = 0, s = 0;
	
	printf("De quantas pessoas voce gostaria de calcular o reajuste salarial?\n");
	scanf("%d",&n);
	
	while(n>0){
		
		printf("\nQual o salario da pessoa %d ?\n",n);
		scanf("%d",&s);
		
		printf("\nO reajuste salarial da pessoa %d eh: R$%d\n",n,reajuste(s));
		n--;
	}
	
	return 0;
}
