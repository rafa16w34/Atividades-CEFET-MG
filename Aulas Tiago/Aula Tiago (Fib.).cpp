#include <stdio.h>
#include <stdlib.h>

int main(){
		
	int f=0, i=1, n=0, n1=1, resultado;
	
	printf("Quantos termos da sequencia de fibbonachi voce gostaria de ver?\n");
	scanf("%d",&f);
		
	while(f>=i){
	
	resultado = n + n1;
	n = n1;
	n1 = resultado;
	
	printf("\nResultado:%d",resultado);
	
	i++;
	
	}
		
	return 0;
		
}
	
	
	
	/* 
	
	
	   0+1 = 1   (definido)
	   1+1 = 2   (definido)
       1+2 = 3   
	   2+3 = 5   
       3+5 = 8
       
       
	*/
