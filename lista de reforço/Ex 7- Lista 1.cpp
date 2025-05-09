#include <stdio.h>
#include <stdlib.h>

int main(){
	double n=0.0;
	printf("Quantos coelhos?\n");
	scanf("%lf",&n);
	
	double resultado = ((n*0.7)/18)+10;
	
	printf("\nCusto:%.2lf",resultado);
	
	return 0;
	
}
