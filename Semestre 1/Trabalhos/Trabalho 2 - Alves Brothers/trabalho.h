#ifndef TRABALHO_H
#define TRABALHO_H

#define MAX 100//definição usada para definir o tamanho das strings com mais facilidade

// Pilha de funções chamadas por um processo
typedef struct funcao{

    char nome[MAX];         // Nome da função
    int id;                 // Id da função
    struct funcao *prox;    // Ponteiro para a próxima função na pilha

}Funcao;

// Processo
typedef struct processo {

    char nome[MAX];         // Nome do processo
    int pid;                // Id do processo
    int prioridade;         // 1 = alta, 2 = média, 3 = baixa
    char estado[MAX];       // "Pronto", "Executando", "Finalizado"
    Funcao *pilhaFuncoes;   // Cria um ponteiro chamado pilha de função, do tipo função, definido no struct anterior
    struct processo *prox;  // Ponteiro para o próximo processo na pilha

} Processo;

// Fila de processos por prioridade
typedef struct fila{

    Processo *inicio;       

} Fila;


// Lista de processos finalizados
typedef struct executados {

    Processo *inicio;       

} Finalizados;

// Funções básicas (só os protótipos, a lógica vai no .c)
void inicializarFilas(Fila *alta, Fila *media, Fila *baixa);                            //Função de iniciar as filas de prioridades
void criarProcesso(Fila *alta, Fila *media, Fila *baixa, int *pid);                     //Função de criar Processo
void executarProcesso(Fila *alta, Fila *media, Fila *baixa, Finalizados *finalizados);  //Função que executa Processo
void mostrarEstado(Fila *alta, Fila *media, Fila *baixa, Finalizados *finalizados);     //Função que mostra os estados dos processos
void cancelarProcesso(Fila *alta, Fila *media, Fila *baixa, int pid);                   //Função de cancelar processos
void empilharFuncao(Funcao **pilha, char nome[], int id);                               //Empilha as funções dos processos
void desempilharInvertido(Funcao **pilha, int n);                                       //Desempilha e printa as funções

void liberarFila(Fila *fila);                                                           //Função que libera a memoria das filas de prioridade
void liberarFinalizados(Finalizados *finalizados);                                      //Função que libera a memoria da fila de finalizados
void liberarFuncoes(Funcao *pilha);                                                     //Função que libera a memoria da pilha de funções
#endif