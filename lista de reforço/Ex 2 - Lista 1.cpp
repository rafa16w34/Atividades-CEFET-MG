#include <stdio.h>
#include <stdlib.h>

int main(){
	double A=0,B=0;
	printf("Defina um valor de dois inteiros:\n");
	scanf("%lf %lf",&A,&B);
	
	printf("\nA+B= %lf\n",(A+B));
	printf("\nA-B= %lf\n",(A-B));
	printf("\nA*B= %lf\n",(A*B));
	
	if(B!=0){
		printf("\nA/B= %lf\n",(A/B));
	}else{
		printf("\nB deve ser diferente de 0\n",B);
	}
}
