#include <stdio.h>
#include <stdlib.h>

long exp(int x,int y){
	if (y == 0){
		return 1;
	}else if (y == 1){
		return x;
	}else{
		return x * exp(x, y-1);
	}
}

int main(){
	int x = 0,y=0;
	printf("Escreva o numero que sera exponenciado e o valor do expoente, respectivamente:\n");
	scanf("%d %d",&x, &y);
	
	
	printf("O valor da potenciacao eh:%ld",exp(x,y));
}
