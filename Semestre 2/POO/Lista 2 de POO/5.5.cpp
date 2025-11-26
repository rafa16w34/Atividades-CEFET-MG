#include <iostream>
#include <string>

using namespace std;

int main(){

    float dividendo, divisor,resultado;

    cout << "\nDigite qual será o dividendo:";
    cin >> dividendo;

    cout << "\nDigite qual será o divisor:";
    cin >> divisor;

    try{
        if (divisor == 0) {
            throw runtime_error("Não é possível dividir por zero!");
        }

        resultado = dividendo / divisor; 

        cout << "\nRESULTADO = " << resultado << "\n";

    }catch (const exception& e) {

        cout << "\nMATH ERROR: " << e.what() << "\n";

    }

    return 0;
}