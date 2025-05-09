#include <stdio.h>
#include <stdlib.h>

int main(){
	int a1,b1,a2,b2,x = -100,y1,y2;
	printf("Defina os coeficientes da linha 1 (a1 e b1) e da linha 2 (a2 e b2), respectivamente:\n");
	scanf("%d %d %d %d",&a1,&b1,&a2,&b2);
	
	while (y1 != y2){
		
		x++;
		
		if (x!=0){
		y1 = (a1*x) +b1;
		y2 = (a2*x) +b2;
		}
	
	}
	
	printf("\nA intercessao ocorre em (%d,%d)",x,y1);
	
	return 0;
	
}
