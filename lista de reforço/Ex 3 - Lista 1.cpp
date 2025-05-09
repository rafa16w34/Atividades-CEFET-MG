#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a = 0 ,a1 = 0,a2 = 0 ,b = 0,b1 = 0 ,b2 = 0 ;
	double i= 0.0;
	
	printf("Qual o numero do produto 1?\n");
	scanf("%d",&a);
	
	printf("\nQual a quantidade vendida do produto 1?\n");
	scanf("%d",&a1);
	
	printf("\nQual o valor unitario do produto 1?\n");
	scanf("%d",&a2);
	
/////////////////////////////////////////////////////////////////////////////////
	
	printf("\n\nQual o numero do produto 2?\n");
	scanf("%d",&b);
	
	printf("\nQual a quantidade vendida do produto 2?\n");
	scanf("%d",&b1);
	
	printf("\nQual o valor unitario do produto 2?\n");
	scanf("%d",&b2);
	
	
/////////////////////////////////////////////////////////////////////////////////

	printf("\n\nQual o valor do IPI aplicado sobre os produtos 1 e 2?\n");
	scanf("%lf",&i);
	
	i = i/100;
	
	double resultado = (((a1*a2)*i) + ((b1*b2)*i));
	printf("\n\nO valor total sera: R$%lf",resultado);
	
	return 0;

}
