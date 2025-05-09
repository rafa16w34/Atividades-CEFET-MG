#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	double resultado = 0.0;
	
	for(double i = 0.0; i<=8.0 ; i++){
		
		resultado += ((pow(5,i))/(9-pow(i,2)));
		
	}
	
	printf("O somatorio eh igual a:%lf",resultado);
	return 0;
}
