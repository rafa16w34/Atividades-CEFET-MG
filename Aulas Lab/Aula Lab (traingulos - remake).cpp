#include <stdio.h>
#include <stdlib.h>

int tri(int x, int y, int z){
	
	if ((x == y) && (y == z)){
		
		return 0;
		
	} else if((x != y) && (y != z)){
	
		return 1;
	
	}else if(((x == y) && (y != z)) || (x != y) && (y == z) || (x != y) && (x == z) ){
		
		return 2;
		
	}
	
}

int main(){
	
	int x = 0,y = 0,z = 0,n = 1, w = 4;
	
	printf("Digite o valor dos lados x,y,z respectivamente:\n");
	scanf("%d %d %d",&x,&y,&z);
	
	printf("\nQuantos triangulos gostaria de fornecer?\n");
	scanf("%d",&n);
	
	printf("\nGostaria de usar while(0), do while(1) ou for(2)?\n");
	scanf("%d",&w);
	
	if (w == 0){
		
		while(n>0){
		
			printf("\nO triangulo fornecido eh:%d",tri(x,y,z));
			printf("\n\nIndice:\n0-Equilatero\n1-Escaleno\n2-Isoceles\n");
			n--;
		
			if (n>0){
		
				printf("Digite o valor dos lados x,y,z respectivamente:\n");
				scanf("%d %d %d",&x,&y,&z);
		
			}
		}
		
		if (n==0){
				printf("\nResultado encontrado a partir da funcao while");
		}
		
	}else if(w == 1){
		
		do{
			printf("\nO triangulo fornecido eh:%d",tri(x,y,z));
			printf("\n\nIndice\n0-Equilatero\n1-Escaleno\n2-Isoceles\n\n\n");
			n--;
			
			if(n>0){
				printf("Digite o valor dos lados x,y,z respectivamente:\n");
				scanf("%d %d %d",&x,&y,&z);
			}
			
		}while(n>0);
		
		if (n==0){
				printf("\nResultado encontrado a partir da funcao do while");
			}
		
	}else if(w == 2){
		
		for( ; n > 0 ; n--){
			
			printf("\nO triangulo fornecido eh:%d",tri(x,y,z));
			printf("\n\nIndice\n0-Equilatero\n1-Escaleno\n2-Isoceles\n\n\n");
			
			if(n>1){
				printf("Digite o valor dos lados x,y,z respectivamente:\n");
				scanf("%d %d %d",&x,&y,&z);
			}
			
			
		}
		
		if (n==0){
				printf("\nResultado encontrado a partir da funcao for");
		}
		
	}
	return 0;
}
