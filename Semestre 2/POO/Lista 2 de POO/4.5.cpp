#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main(){

    vector<int> vetor; //Cria o vetor de inteiros

    for(int i = 0; i <10; i++){

        vetor.push_back(i);//Preenche o vetor de 0-9

    }

    cout << "\nO tamanho é:" << vetor.size() << "\n";//printa o tamanho do vetor

    cout << "\nRemovendo o número:" << vetor.back() << "\n";

    vetor.pop_back();//remove o último número do vetor

    cout << "\nO tamanho agora é:" << vetor.size() << "\n";//printa o tamanho novo do vetor

    cout << "\nO primeiro termo do vetor é:" << vetor.front() << "\n";//printa qual o primeiro termo do vetor

    vetor.erase(vetor.begin()); //Apaga o primeiro termo

    cout << "\nO primeiro termo do vetor agora é:" << vetor.front() << "\n";//printa qual o primeiro termo do vetor

    vetor.erase(vetor.begin()+2);//Apaga o termo 3

    cout << "\nO tamanho é:" << vetor.size() << "\n";//printa o tamanho do vetor

    return 0;
}