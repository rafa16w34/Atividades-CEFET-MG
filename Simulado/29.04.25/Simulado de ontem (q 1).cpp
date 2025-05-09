#include <stdio.h>
#include <stdlib.h>

int main(){
	int x = 0,y = 0;
	double z = 0.0;
	printf("Qual o numero do produto?\n");
	scanf("%d",&x);
	
	printf("\nQuantos produtos foram adquiridos?\n");
	scanf("%d",&y);
		
	if (x == 1100){
			
		z = y * 7.0;
		printf("\nO valor pago nos %d produtos foram: R$%lf",y,z);
		
	}else if (x == 1200){
		
		z = y * 8.5;
		printf("\nO valor pago nos %d produtos foram: R$%lf",z);
		
	}else if (x ==1300){
		
		z = y * 9.2;
		printf("\nO valor pago nos %d produtos foram: R$%lf",z);
		
	}else if (x == 1400){
		
		z = y * 5.8;
		printf("\nO valor pago nos %d produtos foram: R$%lf",z);
		
	}else if (x == 1500){
		
		z = y * 4.9;
		printf("\nO valor pago nos %d produtos foram: R$%lf",z);
		
	}else{
		
		printf("\nValor invalido!");
	}
	
	return 0;
}
