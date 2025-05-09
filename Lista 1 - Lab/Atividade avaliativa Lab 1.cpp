#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void menu(int *A,int *B){
	
	printf("\nDigite os valores de A e B, sendo que estes devem ser pares.\n");
	scanf("%d %d",A,B);
	
}
int main(){
	int A = 0,B= 0, soma,maior,menor,cubo;
	
	menu(&A,&B);
	

while ((A !=0) && (B != 0)){
	if ((A%2 == 0) && (B%2 == 0)){

	if (A > B){
	maior = A;
	menor = B;
	}else{
	maior = B;
	menor = A;
	}

	printf("\nCubos dos numeros pares de %d ate %d:\n", maior, menor);

	while(maior>=menor){
		cubo = pow(maior,3);
		printf("\ncubo:%d",cubo);
		soma += cubo;
		maior -= 2;
	}
	printf("\n\nsoma:%d",soma);
	menu(&A,&B);
	
}else{
	printf("\nOs numeros digitados nao sao pares");
	menu(&A,&B);
}}


	return 0;
}
