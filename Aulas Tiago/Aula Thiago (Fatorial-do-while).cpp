#include <stdio.h>
#include <stdlib.h>


int main(){
int fat = 1,x = 0,x1=0;
printf("Escolha um numero para calcular o fatorial:\n");
scanf("%d", &x);

x1 = x;

do{
	x *= fat;
	fat ++;
	
}while(fat < x1);

printf("\nO valor do fatorial eh:%d ", x);	


return 0;
}
