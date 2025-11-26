#include <iostream>
#include <string>

using namespace std;

class Pessoa {

private:
    int idade;
    string nome;
    float altura;
    float peso;
    string cor_olhos;

public:

    Pessoa()
        : idade(0), altura(0), peso(0), nome(""), cor_olhos("") {}

    Pessoa(string n) 
        : nome(n), idade(0), altura(0), peso(0), cor_olhos("") {}

    Pessoa(string n, int i)
        : nome(n), idade(i), altura(0), peso(0), cor_olhos("") {}

    Pessoa(string n, int i, float a, float p, string cor)
        : nome(n), idade(i), altura(a), peso(p), cor_olhos(cor) {}
};