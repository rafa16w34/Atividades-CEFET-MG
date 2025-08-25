#include <stdio.h>
#include <stdlib.h>

void simulado1_1(){

    int x = 0,y = 0;
	double z = 0.0;
	printf("Qual o numero do produto?\n");
	scanf("%d",&x);
	
	printf("\nQuantos produtos foram adquiridos?\n");
	scanf("%d",&y);
		
	if (x == 1100){
			
		z = y * 7.0;
		printf("\nO valor pago nos %d produtos foram: R$%lf",y,z);
		
	}else if (x == 1200){
		
		z = y * 8.5;
		printf("\nO valor pago nos %d produtos foram: R$%lf",z);
		
	}else if (x ==1300){
		
		z = y * 9.2;
		printf("\nO valor pago nos %d produtos foram: R$%lf",z);
		
	}else if (x == 1400){
		
		z = y * 5.8;
		printf("\nO valor pago nos %d produtos foram: R$%lf",z);
		
	}else if (x == 1500){
		
		z = y * 4.9;
		printf("\nO valor pago nos %d produtos foram: R$%lf",z);
		
	}else{
		
		printf("\nValor invalido!");
	}
	


}

void simulado1_2(){

    double resultado = 0.0;
	
	for(double i = 0.0; i<=8.0 ; i++){
		
		resultado += ((pow(5,i))/(9-pow(i,2)));
		
	}
	
	printf("O somatorio eh igual a:%lf",resultado);

}

void simulado3_1(){}

void simulado3_2(){}

void simulado3_3(){}

int main(){

    int q = 0;

    printf("\nEscolha um dos simulados:\n1- Simulado prova 1 (28/04/25)\n2- Simulado prova 1 (29/04/25)\n3- Simulado 1 prova 3\n4- Simulado 2 prova 3\n5- Simulado 3\n0- Sair\n");
    scanf("%d",&q);

    while (q!= 0){
        switch(q){

            case 1:
            break;

            case 2:
            break;

            case 3:
            break;

            case 4:
            break;

            case 5:
            break;

            case 0:
            printf("\nA gente se ve!\n");
            break;

            default:
            printf("\nSelecione um caractere aceito\n");
            break;
        
        }
    }

    return 0;
}