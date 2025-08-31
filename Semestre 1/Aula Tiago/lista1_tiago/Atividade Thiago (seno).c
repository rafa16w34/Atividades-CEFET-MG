#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (){
	double x, sen=0,j=1;
	int n,i,expoente;

	//usuario interations
	printf("Voce gostaria de calcular o seno de qual numero?\n");
	scanf("%lf",&x);
	
	printf("\nQuantos termos gostaria que fossem usados?\n(Quanto maior o numero de termos, mais exato eh o resultado)\n");
	scanf("%d",&n);
	
	//calculo radiano
	x = x * (M_PI/180);
	printf ("\nRadianos:%lf",x); 
	
	
	
	
	
// Calcular seno usando a s�rie de Taylor
    for (i = 0; i < n; i++) {
        expoente = 2 * i + 1;

        // Calcular fatorial de (2i + 1)
        double fatorial = 1.0;
        for (int j = 1; j <= expoente; j++) {
            fatorial *= j;
        }

        // Calcular termo e somar ao seno
        double termo = pow(-1, i) * pow(x, expoente) / fatorial;
        sen += termo;
    }
	
	
	
	
	
	
	
	
	printf ("\nTeste:%lf",sen); 
	
	//diferenca entre o meu e o math
	printf ("\nDiferenca entre os calculos:%lf", ((sin(x))) - sen);
	
	//taylor
	
	
	return 0;
}

