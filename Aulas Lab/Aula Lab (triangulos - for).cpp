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
	
int x=1 ,y=1 ,z=1,n = 0;

printf("Quantos triangulos voce gostaria de ver?\n");
scanf("%d",&n);

for(n>=0; ;n--){
	
	if( n == 0){
		printf("\nfuncao feita com for");
		return 0;		
	}
	
	printf("Defina o valor dos lados(x,y,z) do triangulo:\n");
	scanf("%d %d %d",&x,&y,&z);
	
	printf("\nO triangulo eh:%d\n",menu(x,y,z));
	
}
}
