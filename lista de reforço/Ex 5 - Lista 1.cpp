#include <stdio.h>
#include <stdlib.h>

int main(){
	double b=0.0,b1=0.0,h=0.0;
	printf("Defina os valores das duas bases e a altura respectivamente:\n");
	scanf("%lf %lf %lf",&b,&b1,&h);
	
	double area = ((b+b1)*h)/2;
	
	printf("A area do trapezio eh:%.2lf",area);
}
