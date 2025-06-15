#include <stdio.h>
#include <stdlib.h>
#define LIN 5
#define COL 4

int main(){
	int m[LIN][COL];
	double media = 0, mediam = 0;
	
	//Usuario escolhe o valor de cada posicao da matriz
	for(int i=0; i<LIN; i++){
		for(int j=0; j<COL; j++){
			
			printf("Escreva qual o valor da posicao %d %d:\n",i+1,j+1);
			scanf("%d",&m[i][j]);
			
		}
	}	
	
	//Calculo da media das linhas
	for(int i=0; i<LIN; i++){
		
		for(int j=0; j<COL; j++){
			
			mediam += m[i][j];
			
		}
		
		printf("\nA soma da linha %d eh: %lf",i+1,mediam);
		
		mediam = mediam/COL;
		
		printf("\nA media das linhas %d eh: %lf\n",(i+1),mediam);
		mediam = 0;
		
	}	
	
	
	//Calculo da media das colunas
	for(int i=0; i<COL; i++){
		
		
		for(int j=0; j<LIN; j++){
			
			media += m[j][i];
			
		}
		
		printf("\nA soma da coluna %d eh: %lf",(i+1),media);
		
		media = media/LIN;
		
		printf("\nA media das colunas %d eh: %lf\n",(i+1),media);
		media = 0;
		
	}
	
	
	
	for (int i = 0 ; i < LIN; i++) {
		for(int j = 0; j < COL; j++) {
			printf(" %d ", m[i][j]);
		}
		
		printf("\n");
	}
	
	return 0;
}
