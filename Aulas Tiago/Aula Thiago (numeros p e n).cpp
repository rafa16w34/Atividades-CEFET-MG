#include <stdio.h>
#include <stdlib.h>

int main(){
	int p = 0, n = 0, x =1;
	printf("Digite os numeros desejados, para parar digite 0\n");
	scanf("%d", &x);
	
	while (x != 0){
		if (x >0){
			p++;
		}else if(x<0){
			n++;
		}
	scanf("%d", &x);
	}
	
	printf("\nDentre os numeros digitados, continham %d positvos, %d negativos e 1 zero",p,n);
	return 0; 
}
