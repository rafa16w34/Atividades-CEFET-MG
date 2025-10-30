//Código imperativo em C++

#include <iostream>
using namespace std;

int main() {
    int n, fat = 1;

    cout << "Digite um numero para calcular o fatorial: ";
    cin >> n;

    for (int i = n; i > 1; i--) {
        fat *= i;
    }

    cout << "Fatorial de " << n << " = " << fat << endl;

    return 0;
}

//Código Orientado a Objetos

#include <iostream>
using namespace std;

class Fatorial {
private:
    int numero;
    int resultado;
public:
    Fatorial(int n) {
        numero = n;
        resultado = 1;
    }

    void calcular() {
        resultado = 1;
        for (int i = numero; i > 1; i--) {
            resultado *= i;
        }
    }

    void mostrar() {
        cout << "Fatorial de " << numero << " = " << resultado << endl;
    }
};

int main() {
    int n;
    cout << "Digite um numero para calcular o fatorial: ";
    cin >> n;

    Fatorial fat(n);   // instância do objeto
    fat.calcular();
    fat.mostrar();

    return 0;
}

