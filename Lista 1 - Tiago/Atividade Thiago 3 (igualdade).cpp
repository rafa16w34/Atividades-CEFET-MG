#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
	double n = 0,i = 1,eq = 0,ig = 0;


	printf("Defina um numero n de termos\n");
	scanf("%lf" ,&n );

	eq = (n * (n+1) * (2*n+1))/6;



	while (n >= i){
	
		ig += pow(i,2);

		i++;

	
	}
	
	if (eq == ig){
		printf("\nA igualdade esta correta");
	}else{
		printf("\nA igualdade esta errada");
	}
	
	return 0;	
}
