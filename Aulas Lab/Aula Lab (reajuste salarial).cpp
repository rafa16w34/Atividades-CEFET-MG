#include <stdio.h>
#include <stdlib.h>

int menu(int sal){
	if (sal < 3000){
		
		return (sal * 0.2);
		
	}else if((sal>3000) && (sal<5000)){
		
		return (sal * 0.15);
		
	}else if(sal>8000){
		
		return (sal * 0.1);
		
	}
	
}

int main(){
	int n = 1, sal=0;
	printf("Digite o numero de pessoas que querem calcular o reajuste salarial:\n");
	scanf("%d",&n);
	
	while(n>0){
		printf("\nO seu salario eh:\n");
		scanf("%d",&sal);
		
		printf("o salario do mano eh:%d",sal);
	
		
		printf("\nO reajuste eh:%d\n",menu(sal));
		n--;
	}
	
	return 0;
}
