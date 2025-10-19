from Metodos import Biblioteca#Importando o código da classe que criamos

biblioteca = Biblioteca([],{})#Definindo a biblioteca que usaremos, passando uma lista e um dicionário vazios

sair = 0 #Variável sair que irá controlar o loop do programa

print('\nBem vindo ao sistema de nossa biblioteca!\nSiga as instruções do terminal para prosseguir com suas ações!\nCriado por Rafael Alves F.\n')#Mensagem de apresentação para o usuário

while sair == 0:

    
    try:
    
        opcao = int(input('\nMenu:\n1- Adicionar livros a lista de livros disponíveis.\n2- Remover livros da lista de livros disponíveis.\n3- Exibir lista de livros disponíveis.\n4- Pegar emprestado livros disponíveis.\n5- Exibir lista de livros emprestados.\n6- Devolver livros.\n0- Sair\n-> ')) #Menu que mostra todas as ações possíveis para o usuário

        match(opcao):

            case 1:#Adiciona um livro a lista de livros disponíveis
                biblioteca.adicionar_livro()

            case 2:#Remove um livro da lista de livros disponíveis
                biblioteca.remover_livro()

            case 3:#Mostra a lista de livros disponíveis formatada para uma melhor visualização
                biblioteca.exibir_livros()

            case 4:#Permite que o usuário pegue algum dos livros disponíveis emprestado
                biblioteca.emprestimo_livro()

            case 5:#Exibe o nome do usuário cadastrado e os livros que ele pegou
                biblioteca.exibir_livros_emprestados()

            case 6:#Permite que o usuário devolva os livros que pegou, permitindo que ele possa pegar mais livros (Fiz essa função extra para impedir que o mesmo nome não seja cadastrado várias vezes, fazendo com que se perca a lista original de livros emprestados pelo usuário)
                biblioteca.devolver_livros()
            
            case 0:#Finaliza o loop do menu
                sair = 1
                print('\nVolte sempre!\n')

            case _:#Trata dos casos onde o usuário digita algo diferente do que é mostrado no menu
                print('\nDigite uma opção válida!\n')

    except(ValueError):#Caso o usuário digite algo diferente de um número inteiro
        print('\nErro: Digite um número inteiro!\n')
