#include <stdio.h>
#include <stdlib.h>

int main(){
	int x=0,y=0,z=0;
	printf("Digite sua idade com os anos, meses e dias ja vividos ate hoje:\n");
	scanf("%d %d %d",&x,&y,&z);
	
	x *= 365;
	y *= 30;
	z += x+y;
	
	printf("\nSua idade em dias eh:%d",z);
	
	return 0;
}
