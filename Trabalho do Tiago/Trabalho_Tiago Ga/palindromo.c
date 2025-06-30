#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define MAX 100

bool verificar_palindromo(const char *str1){
    int i = 0, j;
    j = strlen(str1) - 1;
    if (str1)

    while(i<j){
        if (str1[i] != str1[j] ){
            return false;//não é um palindromo
        }
        i++;
        j--;
    }
    return true; //é um palindromo
}

int main(){
    char string1[MAX];

    printf("Escreva uma palavra:\n");
    scanf("%s", &string1);

    

    verificar_palindromo(string1);

    return 0;
}