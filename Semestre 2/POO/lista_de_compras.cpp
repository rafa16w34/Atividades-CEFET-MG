#include <iostream>
#include "Lista.hpp"


#include <string>

Lista lista;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void adicionarProduto(){

    std :: string descricao;
    int quantidade, prioridade;
    bool inicioLista;


    std :: cout<<"\nDigite a descrição do produto:\n-> "; //Preciso tratar as respostas do usuário

    std :: getline(std::cin >> std::ws, descricao);


    std :: cout<<"\nDigite a quantidade que se tem desse produto:\n-> ";

      while (!(std :: cin >> quantidade)) {
        std :: cout << "Entrada invalida! Digite um numero: ";
        std :: cin.clear();            // limpa estado de erro
        std :: cin.ignore(1000, '\n'); // descarta lixo do buffer
    }



    std :: cout<<"\nDigite a prioridade do produto na lista:\n-> ";

    while (!(std :: cin >> prioridade)) {
        std :: cout << "Entrada invalida! Digite um numero: ";
        std :: cin.clear();            // limpa estado de erro
        std :: cin.ignore(1000, '\n'); // descarta lixo do buffer
    }


    std :: cout<<"\nGostaria de adicionar esse item no:\n0- Inicio da lista\n1- Final da lista\n-> ";

    while (!(std :: cin >> inicioLista)) {
        std :: cout << "Entrada invalida! Digite um numero: ";
        std :: cin.clear();            // limpa estado de erro
        std :: cin.ignore(1000, '\n'); // descarta lixo do buffer
    }
  

    lista.adicionarLista( descricao,quantidade, prioridade, inicioLista);

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void menu(){

    int opcao = 99;
    int sair = 0;

    while(sair != 1){
            
        std :: cout <<"\nMenu\n1- Adicionar itens;\n2- Remover o ultimo item;\n3- Verificar se o item existe;\n4- Exibir lista;\n5- Mostrar tamanho da lista\n0- Sair\n-> ";
        
        while (!(std::cin >> opcao)) {
                std::cout << "Entrada inválida! Digite um número: ";
                std::cin.clear();
                std::cin.ignore(1000, '\n');
        }


        switch (opcao){

            case 1:{//Adiciona o produto (na primiera ou última posição)
                
                adicionarProduto();

                std :: cout <<"\nItem adicionado com sucesso!\n";
                break;
            }

            case 2:{//Remove o último produto da lista

                lista.removerUlltimo();

                std :: cout <<"\nÚltimo item removido com sucesso!\n";
                break;
            }

            case 3:{//Verifica se o produto está presente na lista

                std :: string descricao;
                
                std :: cout<<"\nDigite a descrição do produto:\n-> "; //Preciso tratar as respostas do usuário

                std :: getline(std::cin >> std::ws, descricao);

                bool existe = lista.estaPresente(descricao);

                if (existe == 1){

                    std :: cout <<"\nO item esta presente na lista!\n";

                }else{

                    std :: cout <<"\nO item não esta presente na lista\n";

                }
                break;
            }
            
            case 4:{//Exibe a lista completa
                
                lista.exibirLista();

                break;
            }

            case 5:{

                int tamanho = lista.tamanhoLista();
                
                std :: cout <<"\nO tamanho da lista eh:" <<tamanho << "\n";
                break;
            }

            case 0:{

                std :: cout<<"\nEncerrando sistema..\n";
                sair = 1;
                break;
            }

            default:{
                std :: cout <<"\nDigite uma opcao valida!\n";
                break;
            }
        }

    }

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(){

    menu();

    return 0;
}