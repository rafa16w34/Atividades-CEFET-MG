//soma dos digitos de um numero de forma recursiva
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int soma(int soma,int n){
	
	if (n > 0){
		return abs(n%10);
	}else{
		return (soma += n);
	}
	
}

int main(){
	int n = 0,soma = 0;
	
	printf("Digite um valor para calcular a soma dos algarismos\n");
	scanf("%d",&n);
	
	printf("\no valor da soma eh:%d",soma);
	
	return 0;
}
