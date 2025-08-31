#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

void verificar_palindromo( char s[MAX]){

    int y = 0;
   
    
    for (int i = 0; i <MAX; i++) {//Esse for serve para tratar os ' ' da string
        for(int h = 0; h < MAX; h++){ 
            
            if (s[h] == ' '){
                
                s[h] = s[h+1] ; 
                s[h+1] = ' ';
                
            } 
            
        }
    }

    
    int x = strlen(s) -1;//Conta todas as letras da string e tira o \0

    int k = x;//Salva esse numero na variavel k, ja que o x vai ser usado como uma referencia no for

    for (int i = 0; i < x; i++){//Verifica se o ultimo caractere e o primeiro, sao iguais, caso sejam 

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


}

int main(){

    char s[MAX];//Tamanho da String definido anteriormente no define

    printf("Digite um palindromo:\n");//O usuario ira digitar um palindromo para verificar
    fgets(s,MAX,stdin);


    for (int i = 0; i<MAX; i++){//Esse for ira verificar a string toda
        switch (s[i]){
            case ',': case '.': case ';': case ':':case '!':case '-': s[i] = ' '; break;//Caso encontre alguma pontuação ira trocar por ' ', que sera tratado posteriormente
            case 'A': s[i] = 'a'; break;//Ira trocar as letras maiusculas pela sua respectiva minuscula
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

    s[strcspn(s, "\n")] = '\0';//vai retirar o \n da string

    verificar_palindromo(s);

    return 0;
}