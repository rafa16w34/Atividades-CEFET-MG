from Metodos import Biblioteca

biblioteca = Biblioteca([],{})

sair = 0 

print('\nBem vindo ao sistema de nossa biblioteca!\nSiga as instruções do terminal para prosseguir com suas ações!\nCriado por Rafael Alves F.\n')

while sair == 0:

    
    try:
    
        opcao = int(input('\nMenu:\n1- Adicionar livros a lista de livros disponíveis.\n2- Remover livros da lista de livros disponíveis.\n3- Exibir lista de livros disponíveis.\n4- Pegar emprestado livros disponíveis.\n5- Exibir lista de livros emprestados.\n6- Devolver livros.\n0- Sair\n-> '))

        match(opcao):

            case 1:
                biblioteca.adicionar_livro()

            case 2:
                biblioteca.remover_livro()

            case 3:
                biblioteca.exibir_livros()

            case 4:
                biblioteca.emprestimo_livro()

            case 5:
                biblioteca.exibir_livros_emprestados()

            case 6:
                biblioteca.devolver_livros()
            
            case 0:
                sair = 1
                print('\nVolte sempre!\n')

            case _:
                print('\nDigite uma opção válida!\n')

    except(ValueError):
        print('\nErro: Digite um número inteiro!\n')
