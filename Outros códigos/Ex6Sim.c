#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

void matrix (){
	
	char x[MAX];
	
	printf("Digite uma frase:\n");
	fgets(x,MAX,stdin);
	
	for (int i = 0; i<MAX; i++){
		
		if (x[i] == ' '){
			x[i] = '-';
		}
		
	}
	
	puts(x);	
	
	
}


int main(){
	
	char x[MAX];

	matrix();
	
	return 0;
}
