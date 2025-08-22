#include <stdio.h>
#include <stdlib.h>

//A diferença entre uma variavel global e uma local eh que, a global pode ser citada em qualquer lugar e precisa ser criada so uma vez, enquanto que a local deve ser criada na funcao e no main

int idade;

void calcular_idade(int ano){

    idade = 2025 - ano;

}

int main(){

    int ano = 0;

    printf("Digite o ano de nascimento:\n");
    scanf("%d",&ano);

    calcular_idade(ano);

    printf("\nidade:%d",idade);

    return 0;
}

