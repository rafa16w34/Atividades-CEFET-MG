#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <exception>

using namespace std;

// ------------------------------------------------------------------------------------------

class DadoInvalido : public exception {
public:
    const char* what() const noexcept override {
        return "Dado inválido fornecido!";
    }
};

// ------------------------------------------------------------------------------------------

class Pessoa {
protected:
    string nome;
    int idade;

public:
    Pessoa(string n, int i) : nome(n), idade(i) {
        if (i <= 0)
            throw DadoInvalido();
    }

    virtual void mostrar() const = 0;

    virtual ~Pessoa() = default;
};

// ------------------------------------------------------------------------------------------

class Professor : public Pessoa {
private:
    string disciplina;

public:
    Professor(string n, int i, string d)
        : Pessoa(n, i), disciplina(d) {}

    void mostrar() const override {
        cout << "\n[PROFESSOR]\nNome: " << nome
             << "\nIdade: " << idade
             << "\nDisciplina: " << disciplina << "\n";
    }
};

// ------------------------------------------------------------------------------------------

class Aluno : public Pessoa {
private:
    string matricula;
    string curso;

public:
    Aluno(string n, int i, string m, string c)
        : Pessoa(n, i), matricula(m), curso(c) {}

    void mostrar() const override {
        cout << "\n[ALUNO]\nNome: " << nome
             << "\nIdade: " << idade
             << "\nMatrícula: " << matricula
             << "\nCurso: " << curso << "\n";
    }
};

// ------------------------------------------------------------------------------------------

class Funcionario : public Pessoa {
private:
    string setor;

public:
    Funcionario(string n, int i, string s)
        : Pessoa(n, i), setor(s) {}

    void mostrar() const override {
        cout << "\n[FUNCIONÁRIO]\nNome: " << nome
             << "\nIdade: " << idade
             << "\nSetor: " << setor << "\n";
    }
};

// ------------------------------------------------------------------------------------------

int main() {

    vector<unique_ptr<Pessoa>> sistema;
    int opcao = 99;

    while (opcao != 0) {

        cout << "\n--- MENU ---\n"
             << "1 - Cadastrar Professor\n"
             << "2 - Cadastrar Aluno\n"
             << "3 - Cadastrar Funcionário\n"
             << "4 - Listar\n"
             << "0 - Sair\n-> ";
        cin >> opcao;
        cin.ignore();

        try {

            if (opcao == 1) {
                string nome, disc;
                int idade;

                cout << "Nome: "; getline(cin, nome);
                cout << "Idade: "; cin >> idade; cin.ignore();
                cout << "Disciplina: "; getline(cin, disc);

                sistema.push_back(make_unique<Professor>(nome, idade, disc));
            }
            else if (opcao == 2) {
                string nome, matricula, curso;
                int idade;

                cout << "Nome: "; getline(cin, nome);
                cout << "Idade: "; cin >> idade; cin.ignore();
                cout << "Matrícula: "; getline(cin, matricula);
                cout << "Curso: "; getline(cin, curso);

                sistema.push_back(make_unique<Aluno>(nome, idade, matricula, curso));
            }
            else if (opcao == 3) {
                string nome, setor;
                int idade;

                cout << "Nome: "; getline(cin, nome);
                cout << "Idade: "; cin >> idade; cin.ignore();
                cout << "Setor: "; getline(cin, setor);

                sistema.push_back(make_unique<Funcionario>(nome, idade, setor));
            }
            else if (opcao == 4) {
                for (auto &p : sistema)
                    p->mostrar();
            }

        } catch (exception& e) {
            cout << "\nEXCEÇÃO: " << e.what() << "\n";
        }
    }

    return 0;
}
