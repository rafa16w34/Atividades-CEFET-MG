#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 6
#define MAX1 100
#define LIN 5
#define COL 4
#define MAX2 10
#define LIN1 3
#define COL1 3

typedef struct livro{

    char titulo[MAX];
    char autor[MAX];
    int ano;

}book;

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

void sim1questao3e4(){

	book book[3];

    for(int i = 0; i<3; i++){

        printf("\nDigite o nome do livro:\n");
        fgets(book[i].titulo,MAX1,stdin);

        printf("\nDigite o nome do autor:\n");
        fgets(book[i].autor,MAX1,stdin);
        
        printf("\nDigite o ano de publicacao:\n");
        scanf("%d",&book[i].ano);
        while (getchar() != '\n');

        
        
    }

    for(int i = 0; i<3; i++){

        printf("Nome do livro:%s\nNome do autor:%s\nAno de publications:%d\n\n",book[i].titulo,book[i].autor,book[i].ano);

    }

}

int idade;//Variavel global da questao 5 do simulado 1 da prova 3

void calcular_idade(int ano){

    idade = 2025 - ano;

}

void sim1questao5(){

//A diferença entre uma variavel global e uma local eh que, a global pode ser citada em qualquer lugar e precisa ser criada so uma vez, enquanto que a local deve ser criada na funcao e no main

	int ano = 0;

    printf("Digite o ano de nascimento:\n");
    scanf("%d",&ano);

    calcular_idade(ano);

    printf("\nidade:%d",idade);


}

void funcao(int a){
//void funcao(int *a){

    a = a + 1;
    //*a = *a + 1;

    printf("\nO valor de a dentro da funcao eh:%d\n",a);

}

void sim1questao6e7(){

	int a = 0;

    printf("\nO valor de a eh:%d\n",a);

    funcao(a);
    //funcao(&a);

    printf("\nO novo valor de a eh:%d",a);

//No primeiro caso, sem usar os ponteiros, o valor foi alterado somente na funcao, no main nao houve mudanca, mas no segundo caso, com o ponteiro, ai sim o valor foi alterado para o main tambem.
}

void sim1questao8(){

	int n;
    float *v; //um vetor com n floats
    //v[0] + v[1] + ... /n
    //v[] * n

    printf("Quantos espacos de vetor vc quer?\n");
    scanf("%d",&n);

    v = (float*) malloc(n*sizeof(float));

    printf("\nDigite os %d de floats do vetor:\n", n);

    float media = 0;

    for(int i =0;i<n;i++){

        scanf("%f", &v[i]);
        media += v[i];

    }

    printf("\nsoma: %f\n",media);

    media = media/n;

    printf("\nmedia: %f\n",media);

    free(v);


}

void sim1questao9(){

 float *vet;

    vet = (float*)malloc(MAX2*sizeof(float*));


    printf("\nDigite os 10 floats do vetor:\n");

    for(int i =0;i<MAX2;i++){

        scanf("%f", &vet[i]);

    }

    printf("\nO quinto elemento eh:%f\n",vet[4]);


    free(vet);

}

void sim1questao10(){

 int **m;

    m = (int **)malloc(3*sizeof(int));

    for(int i = 0;i<3;i++){

        m[i] = (int*)malloc(3*sizeof(int*));

    }

    for(int i =0;i<LIN1;i++){
        for(int j = 0; j<COL1; j++){

            m[i][j] = i * j;

        }
    }

    printf("\n\n\nMatriz:\n\n");

    for(int i =0;i<LIN1;i++){
        for(int j = 0; j<COL1; j++){

            printf("|%d|",m[i][j]);

            if(j == 2){

                printf("\n");
                
            }

        }
    }
    

    free(m);


}

void simulado3_1(){
	int q = 99;

	printf("\nEscolha uma das questoes do simulado:\n1- Questao 1\n2- Questao 2\n3- Questao 3 e 4\n4- Questao 5\n5- Questao 6 e 7\n6- Questao 8\n7- Questao 9\n8- Questao 10\n0- Sair\n");

	while(q!=99){

		switch(q){

			case 1:
			printf("\nR: Os arquivos .h sao importantes para que seja possivel um desenvolvimento idependente e uma maior organização do código, já que não e necessário alterar o 'main.c'; Costuma-se ser usado para criar declarações de funções, structs, constantes, etc.\n");
			break;

			case 2:
			printf("\nR: Servem para não ocorrer problemas de inclusão múltipla. O primeiro (#ifndef) serve para não criar duas bibliotecas, verificando se a que voce ira criar ja foi definida antes; o segundo (#define) serve para definir constantes e o terceiro (#endif) serve para fechar a biblioteca, guardando a inclusao.\n");
			break;
			
			case 3:
			sim1questao3e4();
			break;

			case 4:
			sim1questao5();
			break;

			case 5:
			sim1questao6e7();
			break;

			case 6:
			sim1questao8();
			break;

			case 7:
			sim1questao9();
			break;

			case 8:
			sim1questao10();
			break;

			case 0:
			printf("\nA gente se ve\n");
			break;

			default:
			printf("\nDigite uma opcao valida\n");
			break;

		}

	}

}

void simulado3_2(){

	int q =99;

	printf("\nSelecione uma das questoes:\n1- Questao 1\n2- Questao 2,3 e 4\n\n");

}

void sim3questao4(){

	int v[MAX],maior = 0,pmaior = 0, menor = 0, pmenor = 0;

    printf("Digite seis numeros:\n");

    for(int i=0; i<MAX; i++){

    scanf("%d",&v[i]);

        if (v[i] > maior){

            maior = v[i];
            pmaior = i;

        }

    }

    menor = v[0];

    for(int i = 0; i<MAX; i++){

        if(v[i]<menor){

            menor = v[i];
            pmenor = i;

        }

    }

    printf("\nO maior numero digitado foi %d na posicao %d.\nO menor numero digitado for %d na posicao %d",maior,pmaior+1,menor,pmenor+1);
 


}

void vogais (){

    char s[MAX1];
    int vogal=0;

    for(int i =0;i<MAX1;i++){

        s[i] = ' ';

    }


    printf("Digite uma frase:\n");
    fgets(s,MAX1,stdin);

    for(int i =0;i<MAX1;i++){

        if((s[i]=='a') || (s[i]=='e') || (s[i]=='i') || (s[i]=='o') || (s[i]=='u')){

            vogal++;

        }

    }

    printf("\nO numero de vogais digitadas eh:%d",vogal);

}

void sim3questao5(){

	vogais();	

}

void matrix(){

    int m[LIN][COL],soma=0,media=0;

    printf("Escreva os valores que serao colocados dentro da matriz:\n");

    for(int i=0;i<LIN;i++){

        for(int j=0;j<COL;j++){

            scanf("%d",&m[i][j]);

        }
        

    }
    

    for(int i=0;i<LIN;i++){

        soma=0;

        for(int j =0;j<COL;j++){

            soma += m[i][j];

        }

        printf("\nA soma dos elementos da linha %d eh: %d\n",i+1,soma);

    }


    for(int i=0;i<COL;i++){

        media=0;

        for(int j =0;j<LIN;j++){

            media += m[j][i];

        }

        printf("\nA soma eh:%d\n",media);

        media = media/LIN;

        printf("\nA media dos elementos da coluna %d eh: %d\n",i+1,media);

    }


}

void sim3questao8(){

	matrix();

}

void sim3questao9(){

int v[MAX2],somap=0;

    printf("Digite dez valores:\n");

    for(int i=0;i<MAX2;i++){

        scanf("%d",&v[i]);

    }

    for(int i =MAX2-1;i>=0;i--){

        printf("\nvalor na posicao %d eh:%d",i,v[i]);

        if(v[i]%2==0){

            somap+=v[i];

        }

    }

    printf("\nA soma dos numeros pares eh:%d",somap);


}

void string(){

    char s[MAX1];
    int space =1;

    printf("Escreva o que quiser:\n");
    fgets(s,MAX1,stdin);

    for(int i =0;i<MAX1;i++){

        if(s[i] == ' '){

            space++;

        }

    }

    printf("A quantidade de palavras digitadas eh:%d",space);

}

void sim3questao10(){

	string();

}

void simulado3_3(){

	int q = 99;

	printf("\nDigite qual questao voce gostaria de ver:\n4- Questao 4\n5- Questao 5\n8- Questao 8\n9- Questao 9\n10- Questao 10\n0- Sair\n");
	while(q!= 0){
		switch(q){

			case 4:
			sim3questao4();
			break;

			case 5:
			sim3questao5();
			break;

			case 8:
			sim3questao8();
			break;

			case 9:
			sim3questao9();
			break;

			case 10:
			sim3questao10();
			break;

			case 0:
			printf("\nA gente se ve!\n");
			break;

			default:
			printf("\nDigite uma opcao valida!\n");
			break;
		}
	}

}

int main(){

    int q = 99;

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