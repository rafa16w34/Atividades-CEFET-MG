#include <iostream>
using namespace std;

class Pessoa{

private:

string nome;
int idade;
string cpf;
    
//Construtores:
public:

Pessoa(){
    nome = "";
    idade = 0;
    cpf = ""; 
}

Pessoa (string n,int i ,string c){
    nome = n;
    idade = i;
    cpf = c;
}

//Getters
string getNome(){return nome; }
int getIdade(){ return idade; }
string getCPF(){return cpf;}

//Setters
void setNome(string n){ nome = n;}
void setIdade(int i ){ idade = i;}
void setCpf(string c){cpf = c; }

void imprimirDados(){
    cout << "Nome:" << nome << endl;
    cout << "Idade:" << idade << endl;
    cout << "Cpf:" << cpf << endl;
};

};


int main(){
    Pessoa p1;
    p1.setNome("Rafael");
    p1.setIdade(19);
    p1.setCpf("123-456-789-01");

    cout << "Pessoa 1:" << endl;
    p1.imprimirDados();

    cout << endl;

    Pessoa p2("Cecília", 18, "987-654-321-98");

    cout << "Pessoa 2:" << endl;
    p2.imprimirDados();

    return 0;

}