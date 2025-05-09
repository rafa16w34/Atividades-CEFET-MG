#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
	double x,resultado,e,numfat,num = 2;
	printf("Defina um valor para x\n");
	scanf("%lf",&x);

	resultado = exp(x);
	printf("\nO valor pela biblioteca eh:%lf",resultado);

	e = 1+x; 
	printf("\n\n\nTeste:%lf",e);
	

	
	while (resultado >= e){
		
	numfat = 1;
	
	for (int i = 1; num>=i ;i++){
	
	numfat *= i ;
}
	
	e += (pow(x,num)/numfat);//equacao
	num += 1;
	printf("\nTeste do e:%lf",e);
}
	
	printf("\nO valor pelo meu calculo eh:%.4lf",e);
	
	
	
return 0;
}
