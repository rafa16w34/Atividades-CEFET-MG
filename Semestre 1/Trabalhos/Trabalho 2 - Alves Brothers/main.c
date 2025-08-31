#include <stdio.h>
#include <stdlib.h>
#include "trabalho.h"//biblioteca criada com o arquivo cabeçalho

int main(){

    // Inicialização
    Fila alta, media, baixa;//cria as filas de prioridade no main
    Finalizados finalizados;//lista de finalizados

    int pid = 1 ,idc = 0;//inicializa o pid(id do processo) como 1 e idc(id do processo que sera cancelado) como 0


    inicializarFilas(&alta, &media, &baixa);//chama a funcao de inicializar as listas de prioridade
    finalizados.inicio = NULL;//aponta o inicio da lista de finalizados para NULL

    char op;//variavel de caractere para salvar a opcao do usuario no menu
    int k = 1;//Variavel controle para fechar o loop menu


    while (k != 0){//enquanto a variavel controle inteira k não for 0, o loop vai se repetir

        printf("\n=== MENU ===\n\n1 - Criar novo processo\n2 - Executar processo\n3 - Mostrar estado atual\n4 - Cancelar processo (por PID)\n0 - Sair\n\nOpcao? ");
        scanf(" %c", &op);//printa o menu e depois salva a opcao do usuario na variavel op

        switch (op){//os cases são com base da opção do usuario

        case '1'://ao digitar 1, voce cria um processo
            criarProcesso(&alta, &media, &baixa, &pid);//chama a funcao criar processo,recebe o endereço das listas de prioridade e do pid
            break;

        case '2'://ao digitar 2 voce executa um processo, com base na ordem de prioridade
            executarProcesso(&alta, &media, &baixa, &finalizados);//chama a funcao executar processo, recebe o endereço das listas de prioridade e da finalidades
            break;

        case '3'://ao digitar 3, voce mostra o estado das listas de prioridade e de finalizados
            mostrarEstado(&alta, &media, &baixa, &finalizados);//chama a funcao mostrar estado, recebe o endereço das listas de prioridade e da de finalizados
            break;

        case '4'://ao digitar 4, ele cancela um dos processos criados, caso não seja finalizado, por meio do pid
            printf("Informe o PID do processo a cancelar: ");
            scanf("%d", &idc);//pede e salva o pid do processo que ele quer cancelar e salva na variavel idc
            cancelarProcesso(&alta, &media, &baixa, idc);//chama a funcao cancelar processo que recebe o endereço das listas de prioridade e o id do processo que sera cancelado
            break;

        case '0'://ao se digitar 0, a variavel controle ira valer zero, ou seja, o loop ira acabar e ira liberar a memoria utilizada nas filas de prioridade de de finalizados
            k = 0;
            liberarFila(&alta);
            liberarFila(&media);
            liberarFila(&baixa);
            liberarFinalizados(&finalizados);
            break;

        default://caso digite qualquer outro caractere diferente dos informados no menu sera exibido a mensagem "opcao invalida"
            printf("Opcao invalida!\n");
            break;
        }
    }

    return 0;//finaliza o programa
}