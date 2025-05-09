#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	double x = 0.0, numfat = 1.0, i = 0.0, sen = 0.0;
	int n = 0, expoente = 0;

	printf("Voce gostaria de calcular o seno de qual numero?\n");
	scanf("%lf",&x);
	
	printf("\nQuantos termos gostaria que fossem usados?\n");
	scanf("%d",&n);
	
	x *= (M_PI/180);
	printf ("\nValor digitado em radianos:\n%lf\n",x); 
	
	
	for (i = 0; i < n; i++){
	
		expoente = i *2 + 1;
	
		int fat = expoente;
	
		do{
		
			numfat *= fat;
			fat --;
		
		}while(fat > 0);
	
		sen += pow(-1,i) * pow(x,expoente)/ numfat;
	
	 
	}
	printf("\nO valor do seno calculado com %d termos eh:\n%lf\n",n,sen);
	
	printf ("\nA diferenca entre os calculos do seno %lf da biblioteca math.h e o seno %lf calculado com %d termos  eh:\n%lf",(sin(x)),(sen),(n),((sin(x)) - (sen)));
	
	return 0;
}

