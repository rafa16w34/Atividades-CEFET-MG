//Exercicio 1
//1-crie uma funcao, a qual retorna int, para classificar um triangulo de acordo com os dados abaixo:

//retorno 0 -> 3 lados iguais -> equilatero
//retorno 1 -> 3 lados diferentes -> escaleno
//retorno 2 -> 2 lados iguais apenas -> isóceles

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int menu(int x, int y, int z){
	if ((x == y) && (y==z)){
		return 0;
	}else if((x!= y) && (y!=z) && (x!= z)){
		return 1;
	}else if(((x==y) && (y != z) || ((x!=y) && (y == z)) || ((x == z) && (z != y)))){
		return 2;
	}
}

int main(){
	
int x=1 ,y=1 ,z=1;

while ((x > 0) && (y > 0) && (z > 0)){
	
	printf("Defina o valor dos lados(x,y,z) do triangulo:\n");
	scanf("%d %d %d",&x,&y,&z);
	
	if((x <= 0) || (y <= 0) || (z <= 0)){
		printf("\nfuncao feita com while");
		break;
	}
	
	printf("\nO triangulo eh:%d\n",menu(x,y,z));
}

return 0;
}
