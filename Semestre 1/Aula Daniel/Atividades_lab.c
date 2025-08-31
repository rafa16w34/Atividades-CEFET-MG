#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define MAX 10
#define MAX1 15
#define MAX2 50

void atividade1(){

	int vetor[MAX],vetor2[MAX],vetor3[MAX+10],aux=0;
	
	printf("\nDigite 10 valores\n");
	
	for (int i = 0; i < 10; i ++){
		scanf("%d",&vetor[i]);
	}

	printf("\n\nDigite mais 10 valores\n");
	
	for (int i = 0; i < 10; i ++){
		scanf("%d",&vetor2[i]);
	}
	
	printf("\nJuntando as duas respostas..\n");

	for (int x=0;x<10;x++ ){//nesse ele junta os dois vetores em 1
		
		vetor3[x] = vetor[x];
		vetor3[x+10]=vetor2[x];
		
		
	}

	printf("\nVetor formado:\n");

	for(int y=0; y<20 ;y++){
		
		printf("\nO valor na posicao %d eh: %d\n",y+1,vetor3[y]);
		
	}		

	printf("\nVetor invertido:\n");
	
	for (int i = 0; i < 20; i++){
		
		for(int j = 0; j <20 ; j++){
			
			if (vetor3[j] < vetor3[j+1]){
				
				aux = 0;
				aux = vetor3[j];
				vetor3[j] = vetor3[j+1];
				vetor3[j+1] = aux;
			
			}
		}
	}

		for(int y=0; y<20 ;y++){
		
		printf("\nO valor na posicao %d eh: %d\n",y+1,vetor3[y]);
		
	}	
	
	
	
}

void atividade2(){

    int vetor[MAX1],maior=0,menor=0,posicao=0,posicao1=0;
	
	printf("Escolha 15 valores:\n");
	
	for(int i = 0; i<15;i ++){
		scanf("%d",&vetor[i]);
		
		if(i > 0){
		
			if (vetor[i-1]<vetor[i]){
				maior = vetor[i];
				posicao = i;
			}else{
				menor = vetor[i];
				posicao1 = i;
			}	
		
	}}
	
	printf("\nO maior valor se encontra na posicao %d e eh: %d\nO menor valor se encontra na posicao %d e eh %d",(posicao+1),maior,(posicao1 +1),menor);
	
}

void atividade3(){
    	int vetor1[MAX],vetor2[MAX],vetor3[MAX], i = 0;
	
	printf("Defina os valores do vetor 1:\n");
	
	while(i<10){
		scanf("%d",&vetor1[i]);
		i++;
	}
	
	printf("\nDefina os valores do vetor 2:\n");
	
	i=0;
	while(i<10){
		scanf("%d",&vetor2[i]);
		i++;
	}
	
	printf("\n");
	
	i=0;
	do{
		vetor3[i] = vetor1[i] * vetor2[i];
		printf("O valor de %d * %d eh ingual a %d\n",vetor1[i],vetor2[i],vetor3[i]);
		i++;
	}while(i<10);
	
}

void atividade4(){
    int vetor[MAX2],pos=0,neg=0,i=0;
	
	printf("Defina %d numeros para o vetor:\n",MAX2);
	
	do{
		scanf("%d",&vetor[i]);
		if(vetor[i]>0){
			pos++;
		}else{
			neg++;
		}
		i++;
	}while(i<MAX2);
	
	printf("\nO total de numeros positivos eh:%d\nO total de numeros negativos eh:%d",pos,neg);
	
}

void atividade5(){
    int vetor[MAX],vetor1[MAX];
	
	printf("Defina %d valores para o vetor:\n",MAX);
	
	for(int i = 0; i<10; i++){
		
		scanf("%d",&vetor[i]);
		
		if (vetor[i] > 0){
			vetor1[i] = vetor[i];
		}else if (vetor[i] <= 0){
			vetor1[i] = 1;//simboliza um valor nulo
		}
		
	}
	
	for(int i=0;i<10;i++){
		printf("O vetor B eh ingual a: %d\n",vetor1[i]);
	}
	
}

int tri(int x, int y, int z){
	
	if ((x == y) && (y == z)){
		
		return 0;
		
	} else if((x != y) && (y != z)){
	
		return 1;
	
	}else if(((x == y) && (y != z)) || (x != y) && (y == z) || (x != y) && (x == z) ){
		
		return 2;
		
	}
	
}

void traingulos(){

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
}

int reajuste(int s){
	
	if (s < 3000){
		
		return ( s + (s*0.2));
		
	}else if ((s >= 3000) && (s <= 8000)){
		
		return ( s + (s*0.15));
		
	}else if (s > 8000){
		
		return ( s + (s*0.1));
	}
}

void reajuste_salarial(){

    int n = 0, s = 0;
	
	printf("De quantas pessoas voce gostaria de calcular o reajuste salarial?\n");
	scanf("%d",&n);
	
	while(n>0){
		
		printf("\nQual o salario da pessoa %d ?\n",n);
		scanf("%d",&s);
		
		printf("\nO reajuste salarial da pessoa %d eh: R$%d\n",n,reajuste(s));
		n--;
	}
	

}

void vetores(){
	
	int n[MAX],m=2,y=0,i=0,x=0;
	
	printf("Defina o valor para as 5 posicoes do vetor:\n");
	
	for(;i<5;i++){
		
		scanf("%d",&n[i]);
		
	}
	
	/*for(int a=0;a<5;a++){
		
		for(int b=0;b<5;b++){
			
			if (n[b]<n[b+1]){
				
				x = n[b];
				n[b]=n[b+1];
				n[b+1]=x;
			}
			
		}
	}*/

	
	while (i < 10) {
		n[i] = n[y] * m;
		m++;
		i++;
		y++;
	}
	
	for(int a=0;a<10;a++){
		
		for(int b=0;b<10;b++){
			
			if (n[b]<n[b+1]){
				
				x = n[b];
				n[b]=n[b+1];
				n[b+1]=x;
			}
			
		}
	}
	
	i = 0;
	
	while(i<10){
		printf("\nO valor armazenado na posicao %d eh: %d",(i+1),n[i]);
		i++;
	}
	

}

void jogo_velha(){

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
}

void mega_sena(){

    int num[6], sort[6],pontos = 0;

    printf("Digite os 6 numeros que voce gostaria de apostar:\n");

    for(int i = 0; i<6;i++){
    scanf("%d",&num[i]);
    }

    srand(time(NULL));

  
    for (int i = 0; i < 6; i++) {
        sort[i] = ( (rand() % 60) + 1);
    }
    
    for(int i = 0; i<6; i++){
        for(int j = 0;j<6;j++){
            if (num[i] == sort[j]){
                pontos += 1;
            }
        }
    }

    if (pontos == 1){
        printf("\nPerdeu, mas ganhou 1 pontos");
    }
    else if (pontos == 2){
        printf("\nPerdeu, mas goanhou 2 pontos");
    }else if (pontos == 3){
        printf("\nTerno");
    }else if(pontos == 4){
        printf("\nQuadra");
    }else if(pontos == 5){
        printf("\nQuina");
    }else if(pontos == 6){
        printf("\nSena");
    }

    printf("\n Numeros escolhidos:\n");

    for(int i = 0; i<6; i++){
        printf("|%d|",num[i]);
    }

    printf("\n\n Numeros sorteados:\n");

    for(int i = 0; i<6; i++){
        printf("|%d|",sort[i]);
    }

}

void menu(int *A,int *B){
	
	printf("\nDigite os valores de A e B, sendo que estes devem ser pares.\n");
	scanf("%d %d",A,B);
	
}

void questao1(){
    int A = 0,B= 0, soma = 0,maior,menor,cubo;
	
	menu(&A,&B);	

	while ((A !=0) && (B != 0)){
		if ((A%2 == 0) && (B%2 == 0)){

		if (A > B){
		maior = A;
		menor = B;
		}else{
		maior = B;
		menor = A;
		}

	printf("\nCubos dos numeros pares de %d ate %d:\n", maior, menor);

	while(maior>=menor){
		cubo = pow(maior,3);
		printf("\ncubo:%d",cubo);
		soma += cubo;
		maior -= 2;
	}
	printf("\n\nsoma:%d",soma);
	menu(&A,&B);
	
}else{
	printf("\nOs numeros digitados nao sao pares");
	menu(&A,&B);
}}


}

void questao2(){

	double x = 0.0, resultado = 0.0, e = 0.0, num = 2.0;

	printf("Defina um valor para x\n");
	scanf("%lf",&x);

	resultado = exp(x);//calcula o exponencial natural do numero que foi associado a x




	//Calculo sem o uso do math.h 

	e = 1+x; //e vale o valor que vem apos o valor digitado pelo usuário


	while (resultado > e){
		
		e += (pow(x,num))/(tgamma(num));
        num ++;
		
}
	
	printf("\nO valor pelo meu calculo eh:%.4lf",e);
	
	printf("\n\nO resultado pela biblioteca eh:%lf\nO resultado pelos meus calculos eh:%lf\nA diferenca entre os resultados eh:%lf",resultado,e,(resultado - e));
	

}

void questao3(){

	long long int x = 0,resultado = 0 ;
	printf("Digite um numero com 9 digitos\n");
	scanf("%lld",&x);
	
	if ((x < 99999999) || (x > 1000000000)){
	printf("\nNumero invalido");
	}else{
	//100.000.000
		
	resultado += (2* (x%10));
	resultado += (3* (x/10 %10)); 
	resultado += (4* (x/100 %10));
	resultado += (5* (x/1000 %10));
	resultado += (6* (x/10000 %10));
	resultado += (7* (x/100000 %10));
	resultado += (8* (x/1000000 %10));
	resultado += (9* (x/10000000 %10));
	resultado += (10* (x/100000000 %10));

	printf("\nA soma dos produtos eh:%lld\n",resultado);
	
	//Letra B
	
	if (resultado%11 < 2){
		
		printf("\nA dezena do numero verificador eh 0\n");
		x *= 10;
	}else{
		printf("\nA dezena do numero verificador eh:%lld\n",(11-(resultado%11)));
		x = x * 10 + (11-(resultado%11));
	}
	printf("\nO CPF eh:%lld\n",x);
	
	//Letra C
	resultado = 0;
	
	resultado += (2* (x%10));
	resultado += (3* (x/10 %10)); 
	resultado += (4* (x/100 %10));
	resultado += (5* (x/1000 %10));
	resultado += (6* (x/10000 %10));
	resultado += (7* (x/100000 %10));
	resultado += (8* (x/1000000 %10));
	resultado += (9* (x/10000000 %10));
	resultado += (10* (x/100000000 %10));
	resultado += (11* (x/1000000000 %10));
	
	printf("\nA soma dos produtos eh:%lld\n",resultado);
		
	//Letra D	
	
	
	if (resultado%11 < 2){
		printf("\nA dezena do numero verificador eh 0\n");
		x *= 10;
	}else{
		printf("\nA dezena do numero verificador eh:%lld\n",(11-(resultado%11)));
		x = (x*10)+ (11-(resultado%11));
	}	
	
	
	printf("\nO CPF eh:%lld\n",x);
	}

}

void questao4(){

long long int x,resultado = 0;
	printf("Digite um numero com 12 digitos\n");	//112223330001
	scanf("%lld",&x);
	
	if ((x < 100000000000 || x > 999999999999)){
	printf("\nNumero invalido");
	}else{
	//100.000.000
		
	//585771140001
	resultado += (2* (x%10));
	resultado += (3* (x/10 %10));
	resultado += (4* (x/100 %10));
	resultado += (5* (x/1000 %10));
	resultado += (6* (x/10000 %10));
	resultado += (7* (x/100000 %10));
	resultado += (8* (x/1000000 %10));
	resultado += (9* (x/10000000 %10));
	resultado += (2* (x/100000000 %10));
	resultado += (3* (x/1000000000 %10));
	resultado += (4* (x/10000000000 %10));
	resultado += (5* (x/100000000000 %10));

	printf("\nA soma dos produtos eh:%lld\n",resultado);
	
	//Letra B
	
	if (resultado%11 < 2){
		
		printf("\nA dezena do numero verificador eh 0\n");
		x *= 10;
	}else{
		printf("\nA dezena do numero verificador eh:%lld\n",(11-(resultado%11)));
		x = x * 10 + (11-(resultado%11));
	}
	printf("\nO CNPJ eh:%lld\n",x);
	
	//Letra C
	resultado = 0;
	
	resultado += (2* (x%10));
	resultado += (3* (x/10 %10));
	resultado += (4* (x/100 %10));
	resultado += (5* (x/1000 %10));
	resultado += (6* (x/10000 %10));
	resultado += (7* (x/100000 %10));
	resultado += (8* (x/1000000 %10));
	resultado += (9* (x/10000000 %10));
	resultado += (2* (x/100000000 %10));
	resultado += (3* (x/1000000000 %10));
	resultado += (4* (x/10000000000 %10));
	resultado += (5* (x/100000000000 %10));
	resultado += (6* (x/1000000000000 %10));
	
	printf("\nA soma dos produtos eh:%lld\n",resultado);
		
	//Letra D	
		
	if (resultado%11 < 2){
		
		printf("\nA dezena do numero verificador eh 0\n");
		x *= 10;
	}else{
		printf("\nA dezena do numero verificador eh:%lld\n",(11-(resultado%11)));
		x = x * 10 + (11-(resultado%11));
	}	
	
	
	printf("\nO CNPJ eh:%lld\n",x); //11222333000181 erro
	}
	

}

void lista1(){

    int s = 5;
    
    while (s!= 0){

        printf("\nEscolha qual das questoes gostaria de ver (1,2,3 ou 4)ou digite 0 para voltar para o menu:\n");
        scanf("%d",s);

        switch(s){

            case 1:
			questao1();
			break;

            case 2:
			questao2();
			break;

            case 3:
			questao3();
			break;

            case 4:
			questao4();
			break;

            case 0:
            printf("\nRetornando ao menu..\n");
            break;

            default:
            printf("\nDigite um valor aceito\n");
            break;
        }
    }

}


int main(){

    int q = 999;

    printf("\nOla tudo bem, esses sao os codigos que eu tenho salvo no meu computador, os quais fiz nas aulas \nde laboratorio de programacao no primeiro semestre\n");
    
    while (q!=0){

        printf("\nDigite um valor, para um dos itens abaixo:\n");
        printf("\n1- Atividade 1\n2- Atividade 2\n3- Atividade 3\n4- Atividade 4\n5- Atividade 5\n6- Resajuste Salarial\n7- Traiangulos\n8- Vetores\n9- Jogo da Velha\n10- Mega Sena\n0- Sair\n");
        scanf("%d",&q);

        switch(q){

            case 1:
            atividade1();
            break;

            case 2:
            atividade2();
            break;

            case 3:
            atividade3();
            break;

            case 4:
            atividade4();
            break;

            case 5:
            atividade5();
            break;

            case 6://reajuste salarial (first e remake)
            reajuste_salarial();
            break;

            case 7://traingulos (first e remake e do while e for)
            traingulos();
            break;

            case 8://vetores (first e remake)
            vetores();
            break;

            case 9://jogo da velha
            jogo_velha();
            break;

            case 10://mega sena
            mega_sena();
            break;

            case 11://lista 1
            lista1();
            break;

            case 12:// aula do dia 9/7/25
            aula();
            break;

            case 0:
            printf("\nA gente se ve!\n");
            break;

            default:
            printf("\nDigite um valor aceito\n");

        }
    }

    return 0;
}