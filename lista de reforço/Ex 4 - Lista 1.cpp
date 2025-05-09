#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	double a = 0.0, b= 0.0, c=0.0,m = 0.0, dp = 0.0;
	
	printf("Defina os valores de a,b e c, respectivamente:\n");
	scanf("%lf %lf %lf",&a,&b,&c);
	
	m = (a+b+c)/3.0;
	
	dp = sqrt(  (pow((a-m),2) + pow((b-m),2) + pow((c-m),2))/2  );
	
	printf("\nA media dos valores obtidos eh:%.2lf\n\nO desvio padrao dos valores obtidos eh:%.2lf",m,dp);
	
	return 0;
}
