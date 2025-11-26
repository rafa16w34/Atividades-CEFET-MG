#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main() {

    string nome;
    int idade;
    string cpf;

    cout << "\nCADASTRO:\nDigite seu nome:\n-> ";
    getline(cin, nome);

    //habilitar as exceções para o cin
    cin.exceptions(ios::failbit | ios::badbit);

    try {

        cout << "\nDigite sua idade:\n-> ";
        cin >> idade;

        // limpar ENTER após cin
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\nDigite seu CPF:\n-> ";
        getline(cin, cpf);

    }
    catch (exception& e) {
        cout << "\nERRO ao ler os dados!\n";
        cout << "Mensagem: " << e.what() << "\n";
        return 1;
    }

    cout << "\nCadastro concluído!\n";
    cout << "Nome: " << nome << "\n";
    cout << "Idade: " << idade << "\n";
    cout << "CPF: " << cpf << "\n";

    return 0;
}
