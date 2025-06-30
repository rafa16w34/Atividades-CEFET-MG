#include <stdio.h>
#include <stdlib.h>

// Gera os n primeiros números de Fibonacci e armazena em um vetor
void gera_fibonacci(long *fib, int n){//long *fib: Ponteiro para o vetor onde armazenaremos a sequência
    if (n >= 1){
        fib[0] = 0; // Primeiro termo é 0
    }if (n >= 2){
        fib[1] = 1; // Segundo termo é 1
    }
    for (int i = 2; i < n; i++){
        fib[i] = fib[i - 1] + fib[i - 2]; // Cada termo subsequente é a soma dos dois anteriores
    }
}

// Busca binária que retorna o ÍNDICE se encontrar, ou -1 se não encontrar
int busca_binaria(long *vetor, int tamanho, long x){
    /*
    - long *vetor: Vetor ordenado onde buscar
    - int tamanho: Tamanho do vetor
    - long x: Valor a ser buscado

    Funcionamento:
    - Divide repetidamente o vetor pela metade;
    - Compara o elemento do meio com x;
    - Ajusta os limites da busca com base na comparação;
    - Retorna o índice se encontrar, ou -1 se não encontrar;
    */
    int inicio = 0, fim = tamanho - 1, meio = 0;

    while (inicio <= fim){
        meio = inicio + (fim - inicio) / 2;

        if (vetor[meio] == x){
            return meio; // Retorna o índice onde está o número. Encontrou - retorna o índice
        }else if (vetor[meio] < x){
            inicio = meio + 1; // Busca na metade direita
        }else{
            fim = meio - 1; // Busca na metade esquerda(inicio)
        }
    }

    return -1; // Não encontrou
}

// Função principal
void busca_fibonacci(int n, long x){
    /*
    Coordena todo o processo:
    - Valida a entrada
    - Aloca memória para o vetor
    - Gera a sequência
    - Mostra a sequência
    - Realiza a busca
    - Mostra o resultado
    - Libera a memória alocada
    */
    if (n <= 0){// Verifica entrada inválida
        printf("Numero invalido de termos!\n");
        return;
    }

    long *fib = (long *)malloc(n * sizeof(long)); // Aloca memória para o vetor
    
    if (fib == NULL){
        printf("Erro de alocasao de memoria!\n");
        return;
    }

    gera_fibonacci(fib, n); // Gera a sequência

    // Exibe a sequência
    printf("Sequencia de Fibonacci com %d termos:\n", n);
    for (int i = 0; i < n; i++){
        printf("%ld ", fib[i]);
    }
    printf("\n");

    int indice = busca_binaria(fib, n, x); // Realiza a busca

    // Mostra resultado
    if (indice != -1){
        printf("%ld esta presente na posisao %d.\n", x, indice+1);
    }else{
        printf("%ld nao esta presente.\n", x);
    }
    free(fib); // Libera memória
}

int main(){
    int N;
    long x;

    printf("Digite o numero de termos da sequencia (N): ");
    scanf("%d", &N);

    printf("Digite o numero a ser buscado (x): ");
    scanf("%ld", &x);

    if (N < 0){
        printf("Numero invalido de termos!\n");
        return 1;
    }

    busca_fibonacci(N, x);

    return 0;
}