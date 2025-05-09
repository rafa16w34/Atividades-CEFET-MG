#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	double a=0.0,b=0.0,c=0.0,h=0.0,m=0.0;
	printf("Defina o valor dos lados a,b,c e a altura, repectivamente:\n");
	scanf("%lf %lf %lf %lf",&a,&b,&c,&h);
	
	if( (a<(b+c)) && (b<(a+c)) && (c<(a+b)) ){
		
		if (a>b && a>c && a!=b && a!= c){
			m=a;
		}else if(b>a && b>c && b!=a && b!=c){
			m=b;
		}else if (c>a && c>b && c!=a && c!=b){
			m=c;
		}
		
		
		if (a==b && b==c){
			printf("\nO valor da area eh:%.2lf",((pow(m,2)*sqrt(3))/4));
		}else{
			printf("\nO valor da area eh:%.2lf",((m*h)/2));
		}
		
	}else{
		printf("\nO triangulo nao existe");
	}
	
	return 0;
}
