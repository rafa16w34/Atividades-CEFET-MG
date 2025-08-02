#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "trabalho.h"
#define MAX 100




void inicializarFilas(Fila *alta, Fila *media, Fila *baixa) {//Inicializa as filas de prioridade apontando para null, ou seja estão vazias

    alta->inicio = NULL;
    media->inicio = NULL;
    baixa->inicio = NULL;
    

}




void empilharFuncao(Funcao **pilha, char nome[], int id) {//empilha a função, recebe o nome e o id da função.
   
    Funcao *novo = (Funcao *)malloc(sizeof(Funcao));//aloca a mémoria para a função

    if (novo){

        strcpy(novo->nome, nome);       //copia o nome da função
        novo->id = id;                  //define o id
        novo->prox = *pilha;            //aponta para o antigo topo
        *pilha = novo;                  //faz com que o novo seja o topo
    
    }else{

        printf("\nErro ao alocar memoria ...\n"); //caso ocorra erro no malloc
   
    }

}

void desempilhar(Funcao **pilha,int n) {//Funcao que serve para desempilhar as funções de maneira inversa ao que foi inserido, para ser mais coerente com o que um processo realmente executaria. REcebe a pilha de funções e um inteiro n que serve para verificar se a função esta sendo usada na funcao de executar ou para cancelar o processo

    Funcao *aux = NULL;//cria uma pilha auxiliar onde o ponteiro aponta para o NULL

    // Inverte a pilha original (último vira primeiro)

    while (*pilha) {//Enquanto a pilha nao for NULL

        Funcao *temp = *pilha; //cria uma funcao temporaria para nao alterar a pilha original e salvar o topo original
        *pilha = temp->prox; // move o ponteiro da pilha original para o próximo nó

        temp->prox = aux;  //conecta o no da funcao temporaria ao auxiliar
        aux = temp; //atualiza o topo da pilha auxiliar
    }

    //Ira desempilhar a pilha agora na ordem correta
    while (aux) {
        Funcao *temp = aux;// usa o topo da pilha auxiliar

        if (n == 0){//caso n seja 0, significa que a função foi chamada na executação de um processo

            printf("Executando funcao: %s (id %d)\n", temp->nome, temp->id);

        }else if (n == 1){//caso n seja 1, significa que a função foi chamada no cancelamento de um processo 

            printf("Cancelando funcao: %s (id %d)\n", temp->nome, temp->id);

        }
        aux = temp->prox; //avanca na pilha auxiliar
        free(temp); //libera a memoria do no temporario
    }
}


void criarProcesso(Fila *alta, Fila *media, Fila *baixa, int *pid) {//faz com que o usuario crie um processo e possa dizer a prioridade dele, alem de selecionar o id dele (o id e gerado pelo proprio computador para evitar eventuais erros de repeticao que o usuario poderia causar)
    
    Processo *novo = (Processo *)malloc(sizeof(Processo));//aloca o processo na memoria

    
    if (novo){//Para evitar erro de alocação dinamica

        //PROCESSO:
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        int b;//evitar problema de buffer com o \n
        while ((b = getchar()) != '\n' && b != EOF);

        printf("Nome do processo: ");//usuario digita o nome do processo
        fgets(novo->nome,MAX, stdin);
        novo->nome[strcspn(novo->nome, "\n")] = '\0';

        printf("Prioridade (1: alta, 2: media, 3: baixa): ");
        scanf("%d", &novo->prioridade);//usuario escolhe a prioridade:  1 - alta, 2 - media, 3 - baixa

        novo->pid = *pid;//gera um pid para o processo
        (*pid)++;//aumenta o pid para o proximo processo que for criado

        strcpy(novo->estado, "Pronto");
        novo->pilhaFuncoes = NULL;
        novo->prox = NULL;


        //FUNÇÕES:
        //////////////////////////////////////////////////////////////////////////////////////////////////////////////
        //Funcoes para o processo
        int n;
        printf("Quantas funcoes empilhar?");//número de chamada de funções
        scanf("%d", &n);
    
        int c;//evitar problema de buffer com o \n
        while ((c = getchar()) != '\n' && c != EOF);//impedir que o fgets do for leia o \n
    
        //Cria as funções do processo
        for (int i = 0; i < n; i++) {//enquanto i for menor do que o numero de funcoes que o usuario gostaria de criar
            
            char nfuncao[MAX];

            printf("\tNome da funcao %d: ", i + 1);//pede o nome da função pra o usuário
            fgets(nfuncao, MAX, stdin);
            nfuncao[strcspn(nfuncao, "\n")] = '\0';


            printf("\tID da funcao %d: %d\n", i + 1,i);//id da função é feito baseado no i do for
        

            empilharFuncao(&(novo->pilhaFuncoes), nfuncao, i);//coloca a função na pilha

        }
        
        //FILA DE PRIORIDADES:
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Inserir na fila correta de prioridades
        Fila *destino;

        switch (novo->prioridade) {//usado para qual que o usuario digitar
            
            case 1: //alta prioridade
                destino = alta; 
                break;
            
            case 2: //prioridade media
                destino = media; 
                break;
            
            case 3: //prioridade baixa
                destino = baixa; 
                break;

            default://caso digite outro numero ira dar erro
                printf("\nErro na prioridade, cancelando processo...\n");
                free(novo);
                return;
            
        }

        if (destino->inicio){//verifica se a fila de prioridade esta vazia

            Processo *p = destino->inicio;//cria um ponteiro que aponta para o inicio

            while(p->prox){

                p = p->prox;//navega pela fila ate o final

            }

            novo->prox = NULL;//o proximo do novo processo sera null, e o novo processo sera o ultimo de sua respectiva fila
            p->prox = novo;

        }else{//caso o a fila esteja vazia, o novo processo sera colocado no inicio e o proximo elemento depois dele sera o NULL

            destino->inicio = novo;
            novo->prox = NULL;

        }   
        
        printf("Processo %s (PID %d) criado com sucesso!\n", novo->nome, novo->pid);//exibe uma mensagem 

    }else{//para evitar erro do malloc

        printf("\nErro ao alocar memoria..\n");

    }
}

void executarProcesso(Fila *alta, Fila *media, Fila *baixa, Finalizados *finalizados) {// função que serve para executar um processo, recebe as filas de prioridade e a fila de finalizados
    
    Fila *filaExec = NULL; //inicializa uma fila temporaria
    
    if (alta->inicio){//verifica se existe algum processo pronto na fila de alta prioridade
    
        filaExec = alta;
    
    }else if (media->inicio){//caso não exista um processo na de maior prioridade, então verifica se existe algum processo na fila de prioridade media
    
        filaExec = media;
    
    }else if (baixa->inicio){//caso não tenha um processo em nenhuma das outras duas filas, então verifica se existe algum processo na fila baixa prioridade
    
        filaExec = baixa;
    
    }


    if (filaExec == NULL) {// dessa forma, caso todas as filas estivessem vazias, então irá dizer que não existe nenhum processo pronto para ser executado

        printf("Nenhum processo disponivel para execucao.\n");
        return;

    }

    Processo *exec = filaExec->inicio;//seleciona o processo no topo da fila para ser executado
    filaExec->inicio = exec->prox;

    strcpy(exec->estado, "Executando");//Retira o processo de maior prioridade da fila e marca como 'Executando'
    printf("Executando processo %s (PID %d)\n", exec->nome, exec->pid);//printa o nome e o id do processo que esta sendo executado

    int n = 0;//define o n igual a 0 para que a funcão de desempilhar entenda que um processo esta sendo executado

    desempilhar(&(exec->pilhaFuncoes),n);//chama a função de desempilhar levando o endereço da pilha de funções do processo


    strcpy(exec->estado, "Finalizado");//muda o estado do processo para finalizado

    exec->prox = finalizados->inicio;//move o processo executado para o topo da lista encadeada de finalizados
    finalizados->inicio = exec;

    printf("Processo finalizado e movido para a lista de finalizados.\n");//Printa que o processo foi movido para a lista de finalizados

}

void mostrarFila(Fila *fila){//Usado para printar as filas de prioridade, recebe a fila que sera printada

    Processo *p = fila->inicio;//cria um ponteiro que aponta para o inicio da fila de prioridade
    
    if (p == NULL){//caso ela seja vazia, era mostrar a mensagem : "[vazia]"
     
        printf("  [vazia]\n");
    
    }

    while (p) {//caso não seja vazia, ira navegar pela fila printando cada processo, mostrando o pid o nome e o estado do processo
    
        printf("  PID %d - %s (%s)\n", p->pid, p->nome, p->estado);
        p = p->prox;//aponta para o proximo processo para que não fique preso em um loop infinito
    
    }

}

void mostrarEstado(Fila *alta, Fila *media, Fila *baixa, Finalizados *finalizados) {//mostra o estado das filas de prioridade e das filas de finalizados, mostrando separadamente os processos nas respectivas filas, mostrando o nome, o pid, e se ele esta pronto para ser executado
    
    printf("\n\t--- ESTADO ATUAL DO SISTEMA ---\n");//Printa o titulo da exibição
    printf("\n\t--- Alta Prioridade: ---\n");
    mostrarFila(alta);//chama a função mostrar fila, printando a fila de alta prioridade
    printf("\n\t--- Media Prioridade: ---\n");
    mostrarFila(media);//chama a função mostrar fila, printando a fila de media prioridade
    printf("\n\t--- Baixa Prioridade: ---\n");
    mostrarFila(baixa);//chama a função mostrar fila, printando a fila de baixa prioridade

    printf("Processos Finalizados:\n");//printa o titulo da exibição

    Processo *p = finalizados->inicio;//ponteiro do tipo processo para navegar na lista dos processos finalizados

    if (!p){//caso nenhum processo tenha sido finalizado
        printf("  [nenhum processo finalizado ainda]\n");
    }

    while (p) {//enquanto não for Null ele ira printar o processo finlizado, mostrando nome e o id
        printf("  PID %d - %s\n", p->pid, p->nome);
        p = p->prox;//vai para o proximo para evitar um loop infinito
    }

    printf("---------------------------------\n");//simples detalhe para organização

}

void cancelarDeFila(Fila *fila, int pid, int *removido) {//cancela um processo de sua respectiva fila de prioridade usando o id do processo, recebe a fila, o id e o removido (uma variavel controle para saber se o processo ja foi removido). 
    
    Processo *x = NULL, *p = fila->inicio;// x serve para não perdemos os itens na fila anteriores, caso queiramos excluir um item que esteja no meio. o p começa no inicio e sera usado para percorrer a fila encadeada no while. 
    
    while ((p) && (p->pid != pid)) {//Percorre a lista ate achar o pid que foi indicado ou até chegar no final
        x = p;//x guarda o processo anterio
        p = p->prox; // p vai navegando
    }
    if (p) {//Se o p não é NULL, significa que ele achou o id fornecido
        if (x){//Se o x não é NULL então o processo procurado não está no inicio da lista, então vamos pular para o proximo
            x->prox = p->prox;
        }else{//Se o x é NULL então quer dizer que o processo procurado é o primeiro da lista. Então atualizamos o inicio da fila
            fila->inicio = p->prox;
        }
        
        int n = 1;//n recebe o valor de 1 para que a função desempilhar saiba que estamos cancelando as funções
        desempilhar(&(p->pilhaFuncoes),n);//chamo a função desempilhar, que recebe a pilha de funções do processo que queremos cancelar e o n definido na outra linha
        free(p);//liberamos a memoria do processo
        *removido = 1;//removido recebe o valor de 1 para que tenhamos o controle se o processo foi ou não removido
    }

}

void cancelarProcesso(Fila *alta, Fila *media, Fila *baixa, int pid) { //Função usada para cancelar o processo, recebe as filas de prioridade e o pid do processo que sera cancelado

    int removido = 0;//Essa variavel removido serve para controle, para saber se o processo foi removido ou não na função "cancelardefila"
    cancelarDeFila(alta, pid, &removido);//chama a função cancelarDeFila que recebe a fila, o id e a variavel controle removido
    cancelarDeFila(media, pid, &removido);
    cancelarDeFila(baixa, pid, &removido);

    if (removido) {//se a função cancelarDeFila retornar 1 quer dizer que o processo foi removido, então ira mostrar a mensagem que o processo foi removido e o id do processo cancelado
        printf("Processo PID %d cancelado com sucesso.\n", pid);
    } else {//caso não tenha sido possivel cancelar o processo, sera exibido que o processo não foi encontrado e o id desse processo inexistente
        printf("Processo PID %d não encontrado nas filas.\n", pid);
    }

}

void liberarFuncoes(Funcao *pilha) {//Serve para liberar uma pilha de funções de algum processo, quando o programa for finalizado, recebe a pilha de função

    while (pilha) {//Enquanto a pilha não for igual a NULL

        printf("\nLIBERANDO MEMORIA DA FUNCAO %d\n",pilha->id);//Printa qual função está tendo sua memória liberada 

        Funcao *aux = pilha;//cria um no auxiliar para armazenar o topo
        pilha = pilha->prox;//move o topo da pilha para o proxima no
        free(aux);//libera o topo anterior, que tinha sido armazenado no nó auxiliar
    }
}


void liberarFila(Fila *fila) {//Serve para liberar a memoria ocupada pela fila de prioridade, que armazena os processo. Recebe a fila

    Processo *p = fila->inicio;//cria um nó que aponta para o inicio da fila

    while (p) {//enquanto não se chegar ao final da fila

        printf("\nLIBERANDO MEMORIA DO PROCESSO %d\n", p->pid);//exibe de qual processo a memoria esta sendo liberada

        Processo *aux = p;//cria um nó auxiliar que recebe o valor de p, o qual, é o valor do inicio da fila
        p = p->prox;// p recebe o proximo valor que vem depois dele
        liberarFuncoes(aux->pilhaFuncoes);//chama a função liberar funções, para liberar as funções daquele processo, caso ele tenha
        free(aux);//libera a memoria do nó auxiliar
    }

    fila->inicio = NULL;//a fila agora está vazia
}


void liberarFinalizados(Finalizados *finalizados) {//Serve para liberar a memoria da lista de finalizados, recebe a lista de finalizados

    Processo *p = finalizados->inicio;//cria um nó que recebe o inicio da lista de finalizados

    while (p) {//enquanto não se chegar ao final da lista..

        printf("\nLIBERANDO MEMORIA DO PROCESSO FINALIZADO %d\n",p->pid);//printa qual dos processos finalizados está tendo sua memória finalizada

        Processo *aux = p;//um nó auxiliar recebe o valor de p, ou seja, o inicio da lista
        p = p->prox;//p recebe o valor do proximo no
        liberarFuncoes(aux->pilhaFuncoes);//chama a função liberar funções, que libera a memoria das funcoes do processo finalizado caso tenha
        free(aux);//libera o nó auxiliar
    }

    finalizados->inicio = NULL;//a lista esta vazia agora
}
