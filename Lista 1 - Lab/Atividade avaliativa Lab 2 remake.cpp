#include <stdio.h>
#include <stdlib.h>
#include <math.h>




int main(){
	double x = 0.0 ,e= 0.0,resultado = 0.0,ex = 2.0;
	
	printf("Digite um valor para x\n");
	scanf("%lf",&x);
	
	resultado = exp(x);
	
	e += 1 + x;
	printf("\nteste de e:%lf\n\n",e);
	
	while(resultado > e){
		
		e += (pow(x,ex))/(tgamma(ex));
		ex ++;
		
		printf("\nteste de e:%lf\n\n",e);
		printf("\nteste de fat:%lf",tgamma(ex));
		
	}
	
	printf("\nO resultado pela biblioteca eh:%lf\nO resultado pelos meus calculos eh:%lf\nA diferenca entre os resultados eh:%lf",resultado,e,(resultado - e));
}
