#include <stdio.h>
#include <stdlib.h>

int main(){
	int x,y,z;
	printf("Qual o seu numero de funcionario?\n");
	scanf("%d",&x);
	
	printf("\nQuantas horas voce trabalha por dia?\n");
	scanf("%d",&y);
	
	printf("\nQuanto voce ganha por hora trabalhada?\n");
	scanf("%d",&z);
	
	int resultado = y*z;
	
	printf("\nO total que voce recebera por suas horas trabalhadas sera:%d",resultado);
	
	return 0;
}
