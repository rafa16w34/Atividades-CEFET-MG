#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
	long long int x,resultado = 0;
	printf("Digite um numero com 12 digitos\n");	//112223330001
	scanf("%lld",&x);
	
	if ((x < 100000000000 || x > 999999999999)){
	printf("\nNumero invalido");
	}else{
	//100.000.000
		
	//585771140001
	resultado += (2* (x%10));
	resultado += (3* (x/10 %10));
	resultado += (4* (x/100 %10));
	resultado += (5* (x/1000 %10));
	resultado += (6* (x/10000 %10));
	resultado += (7* (x/100000 %10));
	resultado += (8* (x/1000000 %10));
	resultado += (9* (x/10000000 %10));
	resultado += (2* (x/100000000 %10));
	resultado += (3* (x/1000000000 %10));
	resultado += (4* (x/10000000000 %10));
	resultado += (5* (x/100000000000 %10));

	printf("\nA soma dos produtos eh:%lld\n",resultado);
	
	//Letra B
	
	if (resultado%11 < 2){
		
		printf("\nA dezena do numero verificador eh 0\n");
		x *= 10;
	}else{
		printf("\nA dezena do numero verificador eh:%lld\n",(11-(resultado%11)));
		x = x * 10 + (11-(resultado%11));
	}
	printf("\nO CNPJ eh:%lld\n",x);
	
	//Letra C
	resultado = 0;
	
	resultado += (2* (x%10));
	resultado += (3* (x/10 %10));
	resultado += (4* (x/100 %10));
	resultado += (5* (x/1000 %10));
	resultado += (6* (x/10000 %10));
	resultado += (7* (x/100000 %10));
	resultado += (8* (x/1000000 %10));
	resultado += (9* (x/10000000 %10));
	resultado += (2* (x/100000000 %10));
	resultado += (3* (x/1000000000 %10));
	resultado += (4* (x/10000000000 %10));
	resultado += (5* (x/100000000000 %10));
	resultado += (6* (x/1000000000000 %10));
	
	printf("\nA soma dos produtos eh:%lld\n",resultado);
		
	//Letra D	
		
	if (resultado%11 < 2){
		
		printf("\nA dezena do numero verificador eh 0\n");
		x *= 10;
	}else{
		printf("\nA dezena do numero verificador eh:%lld\n",(11-(resultado%11)));
		x = x * 10 + (11-(resultado%11));
	}	
	
	
	printf("\nO CNPJ eh:%lld\n",x); //11222333000181 erro
	}
	
	return 0;
	
	}
	
