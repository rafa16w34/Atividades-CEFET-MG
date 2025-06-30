#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN 4
#define COL 4

int fuga_humana (char m[LIN][COL], int p, int p1) {
    
    if (p < 0 || p >= LIN || p1 < 0 || p1 >= COL){
        return 0;
    }

    
    if (m[p][p1] == 'Z'){
        return 1;
    }

   
    if (m[p][p1] != ' ' && m[p][p1] != 'H'){
        return 0;
    }

    
    char temp = m[p][p1];
    
    if (temp == ' '){
    m[p][p1] = '*';
    }

    
    if (fuga_humana(m, p-1, p1) || fuga_humana(m, p+1, p1) || fuga_humana(m, p, p1-1) || fuga_humana(m, p, p1+1)) {
        
        return 1;
        
    }


    m[p][p1] = temp;
    return 0;
}


int main(){
    char m[LIN][COL];
    int robo = COL;
    
    srand(time(NULL));


    
     for (int i = 0; i < LIN; i++){

        for (int j = 0; j < COL; j++){

            m[i][j] =' ';

        }
    }

   
    for (int i = 0; i < robo;){

            int x = rand() % LIN;
            int y = rand() % COL;

        if (m[x][y] == ' '){

            m[x][y] = 'R';
            i++;

        }
    }


        int p = rand() % LIN;
        int p1 = rand() % COL;
    
    while(1){


        if (m[p][p1] == ' '){

             m[p][p1] = 'H';
             break;

        }
    }
   

    while(1){
        int x = rand() % LIN;
        int y = rand() % COL;

        if (m[x][y] == ' '){

             m[x][y] = 'Z';
             break;

        }
    }

    
    for (int i = 0; i < LIN; i++){

        for (int j = 0; j < COL; j++){

            printf("%c ", m[i][j]);

        }

        printf("\n");

    }

    m[p][p1] = ' ';

    if (fuga_humana(m,p,p1) == 1){
        
        m[p][p1] = 'H';
        printf("Caminho encontrado\n\n\n\n\n");
    }else{

        printf("Caminho nao encontrado\n\n\n\n\n\n\n");

    }
    
    
    for (int i = 0; i < LIN; i++){

        for (int j = 0; j < COL; j++){

            printf("%c ", m[i][j]);

        }

        printf("\n");

    }

    return 0;


}