#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void menu (int *a, int *b){
	printf("Defina dois valores para a e b");
	scanf("%d %d",a,b);
}

int main(){
int a = 0, b = 0, soma = 0, maior = 1, menor = 0;

menu(&a,&b);

if ((a!= 0) && (b!=0)){
if (a < b){
	menor = a;
	maior = b;
}else{
	menor = b;
	maior = a;
}

printf("\nO calculo foi feito entre %d e %d",maior,menor);
	
while(maior > menor){
	
	if (maior%2 == 0){
		soma += pow(maior,3);
	}
		maior--;
}

printf("\nA soma eh igual a:%d",soma);

menu(&a,&b);
}
	
	
return 0;
}
