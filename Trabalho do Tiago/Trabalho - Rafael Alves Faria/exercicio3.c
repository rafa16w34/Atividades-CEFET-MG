#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

void verificar_palindromo( char s[MAX]){

    int y = 0;
   
    
    for (int i = 0; i <MAX; i++) {
        for(int h = 0; h < MAX; h++){ 
            
            if (s[h] == ' '){
                
                s[h] = s[h+1] ; 
                s[h+1] = ' ';
                
            } 
            
            
        }
    }

    puts(s);
    
    int x = strlen(s) -1;

    int k = x;

    for (int i = 0; i < x; i++){

        if (s[i] == s[k]){

            y++;

        }

        k--;

    }

    if (y == x){

        printf("\n\ntrue\n\n");
    }else{

        printf("\n\nfalse\n\n");

    }

    puts(s);

}

int main(){

    char s[MAX];

    printf("Digite um palindromo:\n");
    fgets(s,MAX,stdin);


    for (int i = 0; i<MAX; i++){
        switch (s[i]){
            case ',': case '.': case ';': case ':':case '!':case '-': s[i] = ' '; break;
            case 'A': s[i] = 'a'; break;
            case 'B': s[i] = 'b'; break;
            case 'C': s[i] = 'c'; break;
            case 'D': s[i] = 'd'; break;
            case 'E': s[i] = 'e'; break;
            case 'F': s[i] = 'f'; break;
            case 'G': s[i] = 'g'; break;
            case 'H': s[i] = 'h'; break;
            case 'I': s[i] = 'i'; break;
            case 'J': s[i] = 'j'; break;
            case 'K': s[i] = 'k'; break;
            case 'L': s[i] = 'l'; break;
            case 'M': s[i] = 'm'; break;
            case 'N': s[i] = 'n'; break;
            case 'O': s[i] = 'o'; break;
            case 'P': s[i] = 'p'; break;
            case 'Q': s[i] = 'q'; break;
            case 'R': s[i] = 'r'; break;
            case 'S': s[i] = 's'; break;
            case 'T': s[i] = 't'; break;
            case 'U': s[i] = 'u'; break;
            case 'V': s[i] = 'v'; break;
            case 'W': s[i] = 'w'; break;
            case 'X': s[i] = 'x'; break;
            case 'Y': s[i] = 'y'; break;
            case 'Z': s[i] = 'z'; break;
            default: break;
        }
    }

    puts(s);

    s[strcspn(s, "\n")] = '\0';

    verificar_palindromo(s);

    return 0;
}