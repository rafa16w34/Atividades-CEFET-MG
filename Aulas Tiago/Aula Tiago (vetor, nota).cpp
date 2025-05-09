#include <stdio.h>
#include <stdlib.h>
#define ALU 3

int main(){
	float nota[ALU],media;
	int i = 0;
	for(; i < ALU; i++){
		printf("Escreva a nota do aluno %d\n", (i+1));
		scanf("%f",&nota[i]);
		media+=nota[i];
		
	}
	media = media/ALU;
	
	i--;
	
	while(i >= 0){
		printf("\nA nota do aluno %d eh:%f\n\n",(i+1),nota[i]);
		i--;
	}
	printf("\nA media da nota dos alunos eh:%f",media);
	
	free(nota);
	
	return 0;
}
