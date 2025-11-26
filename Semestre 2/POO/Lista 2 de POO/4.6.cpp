#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {

    string palavra;
    cout << "\nDigite a palavra que você gostaria de verificar: ";
    getline(cin, palavra);

    stack<char> pilha;

    //Preenche a pilha com cada caractere
    for (char c : palavra) {
        pilha.push(c);
    }

    bool ePalindromo = true;//Varíavel de controle

   
    for (int i = 0; i < palavra.size(); i++) {
        if (palavra[i] != pilha.top()) {//verifica a posição i com o topo
            ePalindromo = false;
            break;
        }
        pilha.pop();  //retira o topo atual para que não repita a mesma coisa
    }

    if (ePalindromo) {
        cout << "\nÉ um palíndromo!\n";
    } else {
        cout << "\nNão é um palíndromo!\n";
    }

    return 0;
}
