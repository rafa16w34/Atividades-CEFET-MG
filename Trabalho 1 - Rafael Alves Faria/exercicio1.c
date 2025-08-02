#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN 4
#define COL 4

int fuga_humana (char m[LIN][COL], int p, int p1) {
    
    if (p < 0 || p >= LIN || p1 < 0 || p1 >= COL){//Isso impede que saia da matriz
        return 0;
    }

    
    if (m[p][p1] == 'Z'){//Isso faz com que, se a saida e o humano ficarem na mesma posição, então, vai retornar "true"
        return 1;
    }

   
    if (m[p][p1] != ' ' && m[p][p1] != 'H'){//Se a posição for diferente do ' ' e de H, e também de Z que foi definido anteriormente, então retorna 0
        return 0;
    }

    
    char temp = m[p][p1];//Salva a posição como char tem p
    
    if (temp == ' '){//Preenche os temp que são ' ' com *, ou seja, vai criando o caminho
    m[p][p1] = '*';
    }

    
    if (fuga_humana(m, p-1, p1) || fuga_humana(m, p+1, p1) || fuga_humana(m, p, p1-1) || fuga_humana(m, p, p1+1)) {
        //Isso faz com que o código se repita nas posições ao redor,procurando a saida, se for true, ira retornar true
        return 1;
        
    }

    m[p][p1] = temp;//Faz com que apague asteriscos desnecessarios
    return 0;
}

int main(){
    char m[LIN][COL]; //Tamanho da matriz definido no Define
    int robo = 50; // Numero de robos igual ao de colunas para que, os robos fiquem proporcionais a qualquer tamanho

    printf("Caminho nao encontrado\n\n\n\n\n\n\n");
    
    srand(time(NULL));//Necessario para deixar o "spawn" de robos na matriz, aleatorio
   
    for (int i = 0; i < LIN; i++){//Preenche a matriz com ' '

        for (int j = 0; j < COL; j++){

            m[i][j] =' ';

        }
    }

   
    for (int i = 0; i < robo;){//Preenche a matriz com os robos, em posições aleatórias

            int x = rand() % LIN;
            int y = rand() % COL;

        if (m[x][y] == ' '){

            m[x][y] = 'R';
            i++;

        }
    }


    int  p = rand() % LIN;
    int p1 = rand() % COL;//Preenche a matriz com o humano em uma posição aleatória (dessa vez as posições p e p1 foram definidas fora do while, pois iremos usa-las mais tarde)
        
    while(1){

        
        

        if (m[p][p1] == ' '){

             m[p][p1] = 'H';
             break;

        }
    }
   

    while(1){//Preenche a matriz com a saida em uma posição aleatória
        int x = rand() % LIN;
        int y = rand() % COL;

        if (m[x][y] == ' '){

             m[x][y] = 'Z';
             break;

        }
    }

    
    for (int i = 0; i < LIN; i++){//Printa a matriz

        for (int j = 0; j < COL; j++){

            printf("%c", m[i][j]);

        }

        printf("\n");

    }

    m[p][p1] = ' ';//A posição do humano se torna ' ', para que posssamos analisar

    if (fuga_humana(m,p,p1) == 1){//Se retornar "true" então o caminho foi encontrado, e a posição do humano passa a ser 'H'
        
        m[p][p1] = 'H';
        printf("Caminho encontrado\n\n\n\n\n");

    }else{//Se retornar "false" então o caminho não foi encontrado

        printf("Caminho nao encontrado\n\n\n\n\n\n\n");

    }
    
    
    for (int i = 0; i < LIN; i++){//Printa a matriz de novo, agora com o caminho

        for (int j = 0; j < COL; j++){

            printf("%c ", m[i][j]);

        }

        printf("\n");

    }

    return 0;


}