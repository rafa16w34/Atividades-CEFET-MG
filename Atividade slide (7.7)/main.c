#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main() {

struct ListaSimplesEnc minhaLista;
int v, op, nodo = 0;
criarLista(&minhaLista);

while (1) {
printf("1 - Inserir elemento no inicio\n");
printf("2 - Inserir elemento em ordem (so se a lista estiver ordenada)\n");
printf("3 - Remover elemento no inicio\n");
printf("4 - Remover elemento\n");
printf("5 - Mostrar lista\n");
printf("6 - Sair\n");
printf("Opcao? ");

scanf("%d", &op);

switch (op) {

case 1: // inserir elemento no inicio
printf("Valor? ");
scanf("%d", &v);
inserirIni(&minhaLista, v);
nodo++;
printf("\n%d\n",nodo);
break;


case 2: // inserir elemento ordenado
printf("Valor? ");
scanf("%d", &v);
// TODO

inserirIni(&minhaLista, v);
ordenar(&minhaLista,nodo);

break;


case 3: // remover o primeiro

removerIni(&minhaLista);
nodo--;
printf("\n%d\n",nodo);

break;


case 4: // remover determinado elemento
// TODO
break;


case 5: // mostrar lista
if (estaVazia(&minhaLista)) {
printf("Lista vazia\n");
} else {
mostrarLista(&minhaLista);
}
break;


case 6: // abandonar o programa
exit(0);
}


}

return 0;
}