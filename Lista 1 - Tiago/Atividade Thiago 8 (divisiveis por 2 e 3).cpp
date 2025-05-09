#include <stdio.h>
#include <stdlib.h>

int main(){
	int x=0, y=0, w=0, z=0;
	printf("Defina o valor de w, x, y e z\n");
	scanf("%d %d %d %d",&w,&x,&y,&z);


if ((x%6==0) || (w%6==0) || (y%6==0) || (z%6==0)){
	
	printf("\nOs numeros divisiveis por 3 e 2 sao:");
	
	if(w%6==0) {
	printf("\n%d",w);
	}
	if(x%6==0) {
	printf("\n%d",x);
	}
	if(y%6==0) {
	printf("\n%d",y);
	}
	if(z%6==0) {
	printf("\n%d",z);
	}
	
	
}else{
	printf("\nOs numeros escolhidos (%d,%d,%d,%d) nao sao divisiveis por 3 e 2.",w,x,y,z);
}
return 0;
}
