#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void vogais (){

    char s[MAX];
    int vogal=0;

    for(int i =0;i<MAX;i++){

        s[i] = ' ';

    }


    printf("Digite uma frase:\n");
    fgets(s,MAX,stdin);

    for(int i =0;i<MAX;i++){

        if((s[i]=='a') || (s[i]=='e') || (s[i]=='i') || (s[i]=='o') || (s[i]=='u')){

            vogal++;

        }

    }

    printf("\nO numero de vogais digitadas eh:%d",vogal);

}


int main(){

    

    vogais();

    

    return 0;
}