#include <stdio.h>
#include <stdlib.h>

int main(){
	int n = 0, exp =0,n1 =0;
	
	printf("Escreva o numero que sera exponenciado e o valor do expoente, respectivamente:\n");
	scanf("%d %d",&n, &exp);
	n1 = n;
	
	while (exp > 1){
		printf("\n%d",n);
		n *= n1;
		printf("* %d =",n1);
		exp--;
		printf("%d\n",n);
	}
	
	printf("\no resultado eh:%d",n);
	return 0;
}
