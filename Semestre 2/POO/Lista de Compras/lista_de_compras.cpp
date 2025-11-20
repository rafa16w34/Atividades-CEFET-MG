#include <iostream>
#include <string>

#include "Lista.hpp"
#include "Produto.hpp"

Lista lista;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool adicionarProduto(){

    std::string descricao;
    float peso;
    int unidade;
    float preco;
    std::string id;
    int quantidade;

    std::cout << "\nDigite a descrição do produto:\n-> ";
    std::getline(std::cin >> std::ws, descricao);

    std::cout << "\nDigite o peso (kg):\n-> ";
    while (!(std::cin >> peso)) {
        std::cout << "Entrada inválida! Digite um número válido: ";
        std::cin.clear();
        std::cin.ignore(1000, '\n');
    }

    std::cout << "\nDigite a unidade (ex: 1 = pacote, 2 = unidade, etc):\n-> ";
    while (!(std::cin >> unidade)) {
        std::cout << "Entrada inválida! Digite um número válido: ";
        std::cin.clear();
        std::cin.ignore(1000, '\n');
    }

    std::cout << "\nDigite o preço:\n-> ";
    while (!(std::cin >> preco)) {
        std::cout << "Entrada inválida! Digite um número válido: ";
        std::cin.clear();
        std::cin.ignore(1000, '\n');
    }

    std::cout << "\nDigite o ID do produto:\n-> ";
    std::getline(std::cin >> std::ws, id);
    

    std::cout << "\nDigite a quantidade:\n-> ";
    while (!(std::cin >> quantidade)) {
        std::cout << "Entrada inválida! Digite um número válido: ";
        std::cin.clear();
        std::cin.ignore(1000, '\n');
    }

    if (id == "0"){

        std :: cout << "\nErro: O ID não pode ser 0!\n";

        return false;
        
    }else{

        Produto* p = new Produto(descricao, peso, unidade, preco, id, quantidade);

        // adiciona na lista
        lista.adicionarLista(p);

        return true;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void menu(){

    int opcao = 99;
    int sair = 0;

    while(sair != 1){
            
        std::cout <<"\nMenu\n1- Adicionar itens;\n2- Editar quantidade de um produto listado;\n3- Exibir lista;\n4- Finalizar carrinho de compras;\n0- Sair\n-> ";
        
        while (!(std::cin >> opcao)) {
            std::cout << "Entrada inválida! Digite um número: ";
            std::cin.clear();
            std::cin.ignore(1000, '\n');
        }

        switch (opcao){

            case 1:{//Adiciona o produto (na primiera ou última posição)
                
                bool teste = adicionarProduto();

                if (teste == true){

                    std::cout <<"\nItem adicionado com sucesso!\n";

                }
                else{

                    std::cout <<"\nNão foi possível adicionar o produto!\n";
                    
                }

                
                break;
            }

            case 2:{//Permite editar a quantidade de um produto

                std :: string id = "";

                std::cout << "\nDigite o ID do produto:\n-> ";
                std::getline(std::cin >> std::ws, id);

                bool verificar = lista.adicionarQuantidade(id);

                if (verificar == true){

                    std::cout <<"\nQuantidade alterada com sucesso!\n";

                }else{

                    std::cout <<"\nErro: não existe um produto com este ID!\n";

                }

                break;

            }

            case 3:{//Exibe a lista completa

               lista.exibirLista();
                break;

            }
            
            case 4:{//Carrinho de compras
                
               lista.CarrinhoDeCompras();
               break;

            }


            case 0:{

                std::cout<<"\nEncerrando sistema...\n";
                sair = 1;
                break;
            }

            default:{
                std::cout <<"\nDigite uma opção válida!\n";
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
