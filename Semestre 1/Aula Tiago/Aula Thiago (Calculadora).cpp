#include <stdio.h>
#include <stdlib.h>
int main(){
	int x,y;
	char a;
	printf("Digite o valor de x e y\n");
	scanf("%d %d", &x, &y);
	printf("\nDigite + para somar, - para subtrair, * para multiplicar e / para dividir\n");
	scanf(" %c",&a);
	
	//calculadora
	if(a == '+'){
		printf("\nA soma eh:%d", x+y);
	}else if(a == '-'){
		printf("\nO resto eh:%d", x-y);
	}else if(a == '*'){
		printf("\nO produto eh:%d", x*y);
	}else if(a == '/'){
		if (y != 0){
		printf("\nO quociente eh:%d", x/y);
		}else{
		printf("\nNao podemos dividir por 0");
		}	
	}
	
	return 0;
	
}

