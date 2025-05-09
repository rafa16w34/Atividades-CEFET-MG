//E = MET * PESO * TEMPO/60
//TEMPO = minutos
//Peso= kg
//MET= ciclismo ou corrida = 7   e   natacao = 8
//peso,tempo que pedala,corre e nada

#include <stdio.h>
#include <stdlib.h>

int main(){
	double p=0.0,t=0.0,t1=0.0,t2=0.0;
	printf("Digite o seu peso em kg, o tempo em minutos de pedalada, de corrida e nado em uma semana:\n");
	scanf("%lf %lf %lf %lf",&p,&t,&t1,&t2);
	
	double resultado = (7) * p * (t/60);
	resultado +=  (7) * p * (t1 /60);
	resultado +=  (8) * p * (t2 /60);
	
	printf("\nA quantidade de calorias perdidas eh:%.2lf",resultado);
	
	return 0;
}
