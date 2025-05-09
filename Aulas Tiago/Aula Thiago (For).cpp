#include <stdio.h>
#include <stdlib.h>
int main(){
	int x,y,z;
	printf("Defina valores para x e y\n");
	scanf("%d %d", &x,&y);
	printf("\n1-somar,2-subtrair,0-sair\n");
	scanf("%d",&z);
	
	for(;z == 1;){//somar
	printf("\nA soma de x e y eh:%d", (x+y));
	printf("\n\nDefina valores para x e y\n");
	scanf("%d %d", &x,&y);
	printf("\n1-somar,2-subtrair,0-sair\n");
	scanf("%d",&z);}
	
	for(;z==2;){//subtrair
	printf("\nA diferenca de x e y eh:%d", (x-y));
	printf("\n\nDefina valores para x e y\n");
	scanf("%d %d", &x,&y);
	printf("\n1-somar,2-subtrair,0-sair\n");
	scanf("%d",&z);}
	
	for(;z==0;){
		return 0;
	}
	
	}


