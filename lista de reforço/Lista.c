#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void exercicioum(int n){

    printf("\nQuestao %d\n",n);

    int x,y,z;

	printf("\nDigite as seguintes informacoes:\nNumero de funcionario;\nHoras trabalhadas por dia\nQuanto voce ganha por hora trabalhada\n");
	scanf("%d %d %d",&x,&y,&z);
	
	int resultado = y*z;
	
	printf("\nO total que voce recebera por suas horas trabalhadas sera:%d\n",resultado);
	
}

void exerciciodois(int n){

    printf("\nQuestao %d\n",n);

    double A = 0.0, B = 0.0;

	printf("\nDefina um valor de dois inteiros:\n");
	scanf("%lf %lf",&A,&B);
	
	printf("\nA+B= %.2lf\nA-B= %.2lf\nA*B= %.2lf\n",(A+B),(A-B),(A*B));

	if(B!=0){
		printf("\nA/B= %.2lf\n",(A/B));
	}else{
		printf("\nB deve ser diferente de 0\n");
	}

}

void exerciciotres(int n){

    printf("\nQuestao %d\n",n);

    int a = 0 ,a1 = 0,a2 = 0 ,b = 0,b1 = 0 ,b2 = 0;
	double i = 0.0;
    

	printf("\nDigite a seguir:\nQual o numero do produto 1?\nQual a quantidade vendida do produto 1?\nQual o valor unitario do produto 1?\n");
	scanf("%d %d %d",&a,&a1,&a2);
	
	printf("\nDigite a seguir:\nQual o numero do produto 2?\nQual a quantidade vendida do produto 2?\nQual o valor unitario do produto 2?\n");
	scanf("%d %d %d",&b,&b1,&b2);
	
	printf("\n\nQual o valor do IPI aplicado sobre os produtos 1 e 2?\n");
	scanf("%lf",&i);
	
	i = i/100;
	
	double resultado = (((a1*a2)*i) + ((b1*b2)*i));

	printf("\n\nO valor total sera: R$%.2lf\n",resultado);
	

}

void exercicioquatro(int n){

    printf("\nQuestao %d\n",n);

    double a = 0.0, b= 0.0, c=0.0,m = 0.0, dp = 0.0;
	
	printf("\nDefina os valores de a, b e c, respectivamente:\n");
	scanf("%lf %lf %lf",&a,&b,&c);
	
	m = (a+b+c)/3.0;
	
	dp = sqrt(  (pow((a-m),2) + pow((b-m),2) + pow((c-m),2))/2  );
	
	printf("\nA media dos valores obtidos eh:%.2lf\n\nO desvio padrao dos valores obtidos eh:%.2lf\n",m,dp);
	


}

void exerciciocinco(int n){

    printf("\nQuestao %d\n",n);

    double b=0.0,b1=0.0,h=0.0;

	printf("\nDefina os valores das duas bases e a altura respectivamente:\n");
	scanf("%lf %lf %lf",&b,&b1,&h);
	
	double area = ((b+b1)*h)/2;
	
	printf("\nA area do trapezio eh:%.2lf\n",area);

}

void exercicioseis(int n){

    printf("\nQuestao %d\n",n);

    double a=0.0, b=0.0, c=0.0, h=0.0, m=0.0;

	printf("\nDefina o valor dos lados a,b,c e a altura, repectivamente:\n");
	scanf("%lf %lf %lf %lf",&a,&b,&c,&h);
	
	if( (a<(b+c)) && (b<(a+c)) && (c<(a+b)) ){
		
		if (a>b && a>c && a!=b && a!= c){
			m=a;
		}else if(b>a && b>c && b!=a && b!=c){
			m=b;
		}else if (c>a && c>b && c!=a && c!=b){
			m=c;
		}
		
		
		if (a==b && b==c){
			printf("\nO valor da area eh:%.2lf\n",((pow(m,2)*sqrt(3))/4));
		}else{
			printf("\nO valor da area eh:%.2lf\n",((m*h)/2));
		}
		
	}else{
		printf("\nO triangulo nao existe\n");
	}
	

}

void exerciciosete(int n){

    printf("\nQuestao %d\n",n);

    double x = 0.0;

	printf("\nQuantos coelhos?\n");
	scanf("%lf",&x);
	
	double resultado = ((x*0.7)/18)+10;
	
	printf("\nCusto:%.2lf\n",resultado);
	

}

void exerciciooito(int n){

    printf("\nQuestao %d\n",n);

    //E = MET * PESO * TEMPO/60
    //TEMPO = minutos
    //Peso= kg
    //MET= ciclismo ou corrida = 7   e   natacao = 8
    //peso,tempo que pedala,corre e nada

    double p = 0.0, t = 0.0, t1 = 0.0, t2 = 0.0;

	printf("\nDigite o seu peso em kg, o tempo em minutos de pedalada, de corrida e nado em uma semana:\n");
	scanf("%lf %lf %lf %lf",&p,&t,&t1,&t2);
	
	double resultado = (7) * p * (t/60);
	resultado +=  (7) * p * (t1 /60);
	resultado +=  (8) * p * (t2 /60);
	
	printf("\nA quantidade de calorias perdidas eh:%.2lf\n",resultado);
	

}

void exercicionove(int n){

    printf("\nQuestao %d\n",n);

    int x=0,y=0,z=0;
	printf("\nDigite sua idade com os anos, meses e dias ja vividos ate hoje:\n");
	scanf("%d %d %d",&x,&y,&z);
	
	x *= 365;
	y *= 30;
	z += x+y;
	
	printf("\nSua idade em dias eh:%d\n",z);
	

}

void exerciciodez(int n){

    printf("\nQuestao %d\n",n);

    int a1,b1,a2,b2,x = -100,y1,y2;
	printf("\nDefina os coeficientes da linha 1 (a1 e b1) e da linha 2 (a2 e b2), respectivamente:\n");
	scanf("%d %d %d %d",&a1,&b1,&a2,&b2);
	
	while (y1 != y2){
		
		x++;
		
		if (x!=0){
		y1 = (a1*x) +b1;
		y2 = (a2*x) +b2;
		}
	
	}
	
	printf("\nA intercessao ocorre em (%d,%d)\n",x,y1);

}

int main(){

    int x=0,op;

do{

    printf("\nMENU:\nDigite qual exercicio voce gostaria de ver: (de 1 a 10):\n(Digite 0 para sair)\n");
    scanf("%d",&op);

    switch (op){
    case 1:
        exercicioum(op);
        break;

    case 2:
        exerciciodois(op);
        break;

    case 3:
        exerciciotres(op);
        break;

    case 4:
        exercicioquatro(op);
        break;

    case 5:
        exerciciocinco(op);
        break;

    case 6:
        exercicioseis(op);
        break;

    case 7:
        exerciciosete(op);
        break;

    case 8:
        exerciciooito(op);
        break;

    case 9:
        exercicionove(op);
        break;

    case 10:
        exerciciodez(op);
        break;

    case 0:
        x=1;
        break;
    
    default:
        printf("\nDigite um numero entre 1 e 10\n");
        break;
    }



}while(x==0);

return 0;





}