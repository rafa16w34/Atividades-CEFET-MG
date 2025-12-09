#include <iostream>
#include <string>
#include <memory>
#include <vector>

using namespace std;

// -------------------------------------------------

class Material {
protected:
    string titulo;
    int ano;
    int id;

public:
    Material(string t, int a, int i)
        : titulo(t), ano(a), id(i) {}

    virtual void mostrar() const = 0; // virtual puro

    virtual ~Material() = default;
};

// -------------------------------------------------

class Livro : public Material {
public:

    Livro(string t, int a, int i)
        : Material(t, a, i) {}

    void mostrar() const override {
        cout << "\n[LIVRO]\nTítulo: " << titulo
             << "\nAno: " << ano
             << "\nID: " << id << "\n";
    }

    void ler(){

        cout << "\nLendo o livro "<< titulo <<"\n";


    }

};

// -------------------------------------------------

class DVD : public Material {
public:
    DVD(string t, int a, int i)
        : Material(t, a, i) {}

    void mostrar() const override {
        cout << "\n[DVD]\nTítulo: " << titulo
             << "\nAno: " << ano
             << "\nID: " << id << "\n";
    }

    void reproduzir(){

        cout << "\nReproduzindo o dvd de "<< titulo << "\n";

    }

};

// -------------------------------------------------

class AudioLivro : public Livro, public DVD {
public:

    AudioLivro(string t, int a, int i) : Livro(t, a, i), DVD(t, a, i) {
    }

    void mostrar() const override {
        cout << "\n[AUDIOLIVRO]\nTítulo: " << Livro :: titulo
             << "\nAno: " << DVD :: ano
             << "\nID: " <<  Livro :: id << "\n";
    }
};

// -------------------------------------------------

int main() {

    string t,buffer;
    int a;
    int id;

//-----------------------------------------------------------------------------------------

    cout << "\nDigite o título do livro:\n";
    getline(cin, t);

    cout << "\nDigite o ano do livro:\n";
    cin >> a;

    cout << "\nDigite o id do livro:\n";
    cin >> id;

    getline(cin,buffer);

    Livro livro(t,a,id);
    livro.mostrar();
    livro.ler();

//-----------------------------------------------------------------------------------------

    cout << "\nDigite o título do dvd:\n";
    getline(cin, t);

    cout << "\nDigite o ano do dvd:\n";
    cin >> a;

    cout << "\nDigite o id do dvd:\n";
    cin >> id;

    getline(cin,buffer);

    DVD dvd(t,a,id);
    dvd.mostrar();
    dvd.reproduzir();

//-----------------------------------------------------------------------------------

    cout << "\nDigite o título do audiolivro:\n";
    getline(cin, t);

    cout << "\nDigite o ano do audiolivro:\n";
    cin >> a;

    cout << "\nDigite o id do audiolivro:\n";
    cin >> id;

    AudioLivro audiolivro(t,a,id);
    audiolivro.mostrar();
    audiolivro.ler();
    audiolivro.reproduzir();


    return 0;
}
