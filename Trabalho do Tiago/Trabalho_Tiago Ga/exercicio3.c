#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

void verificar_palindromo( char s[MAX]){

    int y = 0,j = 0;
    char limpo[MAX];

    
    for (int i = 0; s[i] != '\0'; i++) {
        if (isalnum(s[i])) { // verifica se é letra ou número
            limpo[j++] = tolower(s[i]);
        }
    }
    limpo[j] = '\0';
    
    int x = strlen(limpo) -1;

    int k = x;

    

    for (int i = 0; i < k; i++){

        if (limpo[i] == limpo[k]){

            y++;

        }

        k--;

    }

    if (y == k){

        printf("\n\ntrue\n\n");
    }else{

        printf("\n\nfalse\n\n");

    }

    printf("\nlimpo:");
    puts(limpo);

}

int main(){

    char s[MAX];

    printf("Digite um palindromo:\n");
    fgets(s,MAX,stdin);

    puts (s);

    s[strcspn(s, "\n")] = '\0';

    verificar_palindromo(s);

    return 0;
}