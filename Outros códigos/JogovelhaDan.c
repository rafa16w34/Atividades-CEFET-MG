#include <stdio.h>
#include <stdlib.h>

int main(){
	char matriz[3][3] = {{' ', ' ', ' '},{' ', ' ', ' '},{' ', ' ', ' '}}, atual = 'x';
	int linha = 0, coluna = 0, vencedor = -1;
	
	while(vencedor == -1){
		
		printf("Informe a linha/coluna:\n");
		scanf("%d %d", &linha, &coluna);
		
		if ((linha < 3) && (coluna < 3)){

		matriz[linha][coluna] = atual;
		
		for (int i = 0 ; i < 3; i++) {
			for(int j = 0; j < 3; j++) {
				printf("|%c|", matriz[i][j]);
			}
		
			printf("\n");
		}

		if (atual == 'x'){
			atual ='o';
			printf("\nPlayer 2:\n");
			
		}else{
			atual = 'x';
			printf("\nPlayer 1:\n");
		}

		//horizontal
	
		if ((matriz[0][0] == matriz [0][1]) && (matriz[0][0] == matriz[0][2]) && (matriz[0][0] != ' ')){
		
			printf ("\nVoce venceu eh!!\n");
			break;
		
		}
		else if((matriz[1][0] == matriz [1][1]) && (matriz[1][0] == matriz[1][2]) && (matriz[1][0] != ' ')){
		
			printf ("\nVoce venceu eh!!\n");
			break;
		}
		else if((matriz[2][0] == matriz [2][1]) && (matriz[2][0] == matriz[2][2]) && (matriz[2][0] != ' ')){
		
			printf ("\nVoce venceu eh!!\n");
			break;
		}
	
		//vertical

		else if((matriz[0][0] == matriz [1][0]) && (matriz[0][0] == matriz[2][0]) && (matriz[0][0] != ' ')){
		
			printf ("\nVoce venceu eh!!\n");
			break;
		}
		else if((matriz[0][1] == matriz [1][1]) && (matriz[0][1] == matriz[2][1]) && (matriz[0][1] != ' ')){
		
			printf ("\nVoce venceu eh!!\n");
			break;
		}
		else if((matriz[0][2] == matriz [1][2]) && (matriz[0][2] == matriz[2][2]) && (matriz[0][2] != ' ')){
		
			printf ("\nVoce venceu eh!!\n");
			break;
		}
	
		//diagonal
	
		else if((matriz[0][0] == matriz [1][1]) && (matriz[0][0] == matriz[2][2]) && (matriz[0][0] != ' ')){
		

			printf ("\nVoce venceu eh!!\n");
			break;
		}
		else if((matriz[0][2] == matriz [1][1]) && (matriz[0][2] == matriz[2][0]) && (matriz[0][2] != ' ')){
			

			printf ("\nVoce venceu eh!!\n");
			break;
		}

		}else{
			printf("\nDigite uma coordenada valida!\n");
		}
	}
	

		for (int i = 0 ; i < 3; i++) {
			for(int j = 0; j < 3; j++) {
				printf("|%c|", matriz[i][j]);
			}
		
			printf("\n");
		}
	
	
	return 0;
	
}



//horizontal
	
	/*for (int i = 0; i<3;i++){
			
		if (matriz[i][j] != ' '){
			
			
			int j = 0;
			
			if ((matriz[i][j] == matriz[i][j+1]) && (matriz [i][j] == matriz [i][j+2])){
				
				vencedor = atual;
				
			}
			
		}
	}

		//vertical		
	/*	for (int i = 0; i<3;i++){
			
			int j = 0;
			
		if (matriz[j][i] != ' '){
			
			
			if ((matriz[j][i] == matriz[j+1][i]) && (matriz [j][i] == matriz [j+2][i])){
				
				vencedor = atual;
				
			}
			
		}
	}*/