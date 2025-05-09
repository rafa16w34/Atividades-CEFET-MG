#include <stdio.h>
#include <stdlib.h>

int MDC (int a, int b){
	
	if( b != 0){
		return MDC (b, a%b);
	}else{
		return a;
	}
}

int main(){
	int a,b;
	printf("Defina dois valores para que se possa calcular o MDC:\n");
	scanf("%d %d",&a,&b);

	MDC(a,b);

	printf("\nO valor do MDC de %d e %d eh: %d",a,b,MDC(a,b));

	return 0;	
}
