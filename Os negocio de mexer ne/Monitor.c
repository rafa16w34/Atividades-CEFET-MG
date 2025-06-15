#include<stdlib.h>
#include<stdio.h>

#define LIN 3
#define COL 3

int main(){
	int mat[LIN][COL];
	int num;
	for(int i=0;i<LIN;i++){
		for(int j=0;j<COL;j++){
			printf("DIGITE O NUMERO DA MATRIZ NA POSICAO %d %d", i,j);
			scanf("%d",&num);
			mat[i][j] = num;
		}
	}
	
	//mat[0][1] = 5;
	
	for(int i=0;i<LIN;i++){
		for(int j=0;j<COL;j++){
			if(mat[i][j]%2==0){
				printf("TEM PAR\n");
			}
		}
	}
	
	return 0;
}
