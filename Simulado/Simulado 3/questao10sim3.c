#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void string(){

    char s[MAX];
    int space =1;

    printf("Escreva o que quiser:\n");
    fgets(s,MAX,stdin);

    for(int i =0;i<MAX;i++){

        if(s[i] == ' '){

            space++;

        }

    }

    printf("A quantidade de palavras digitadas eh:%d",space);

}

int main(){

    string();

    return 0;
}