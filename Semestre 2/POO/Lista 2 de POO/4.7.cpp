#include <iostream>
#include <string>
#include <queue>
#include <limits> // para não ler o \n no getline (limpar buffer)

using namespace std;

int main(){

    int opcao = 99;

    queue<string> cadastro;

    string nome;

    while (opcao != 0) {

        cout << "\nDigite uma das opções:\n"
             << "1- Entrar na fila\n"
             << "2- Próximo a ser atendido\n"
             << "3- Ser atendido\n"
             << "0- Sair do programa\n-> ";

        cin >> opcao;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // limpa buffer

        switch(opcao){

            case 1:
                cout << "\nDigite seu nome: ";
                getline(cin, nome);

                cadastro.push(nome);

                cout << "\nRegistro adicionado à fila!\n";
                break;

            case 2:
                if (!cadastro.empty()) {
                    cout << "\nPrimeiro da fila: " << cadastro.front() << endl;
                } else {
                    cout << "\nFila vazia!\n";
                }
                break;

            case 3:
                if (!cadastro.empty()) {
                    cout << "\nAtendendo: " << cadastro.front() << endl;
                    cadastro.pop();
                } else {
                    cout << "\nFila vazia! Ninguém para atender.\n";
                }
                break;

            case 0:
                cout << "\nEncerrando programa...\n";
                break;

            default:
                cout << "\nOpção inválida!\n";
        }
    }

    return 0;
}
