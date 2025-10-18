class Biblioteca():                                                                                                                         #Classe Biblioteca

    def __init__(self,livros_disponiveis,livros_emprestados):                                                                               #Recebe as listas de livros emprestados e livros disponíveis
        self.livros_disponiveis = livros_disponiveis
        self.livros_emprestados = livros_emprestados

    def adicionar_livro (self):                                                                                                             #Função para adicionar um livro na lista de disponíveis

        try:                                                                                                                                #Controla que o usuário não irá digitar algo diferente de um número inteiro
            numero_de_livros = int(input('\nDigite quantos livros você gostaria de adicionar:\n-> '))                                       #Permite que o usuário adicione mais de um livro na lista

            for i in range(numero_de_livros):                                                                                               #Controla para que o usuário possa adicionar a quanttidade pedida de livros
                livro_novo = str(input('\nDigite o nome do livro que gostaria de adicionar:\n-> '))                                         #Usuário digita o nome do livro

                if livro_novo in self.livros_disponiveis:

                    print(f'\nO livro {livro_novo} já está cadastrado em nossa biblioteca\n')

                elif any(livro_novo in livros for livros in self.livros_emprestados.values()):

                    print(f'\nO livro {livro_novo} já está cadastrado em nossa biblioteca mas foi pego emprestado por alguém.\n')

                else:
                    self.livros_disponiveis.append(livro_novo.lower())                                                                          #Por padrão os livros são salvos em letra minúscula para que não tenha problema do usuário digitar o nome de alguma forma diferente (Ex: Narnia e narnia)
                    print(f'\nO livro "{livro_novo.title()}" foi adicionado a lista de livros disponíveis!\n')                                  #Uma mensagem informa o usuário que o livro foi cadastrado com sucesso

        except(ValueError):                                                                                                                 #Caso o usuário digite algum caractere diferente de um número inteiro, esse aviso irá aparecer para ele
            print('\nErro: Digite um número inteiro!\n')

    def remover_livro(self):                                                                                                                #Função para remover um livro da lista de livros disponíveis

        if len(self.livros_disponiveis) > 0:                                                                                                #Caso a lista de livros disponíveis não esteja vazia..

            try:                                                                                                                            #Controla que o usuário não irá digitar algo diferente de um número inteiro
                numero_de_livros = int(input('\nDigite quantos livros você gostaria de remover:\n-> '))                                     #O usuário tem a opção de excluir quantos livros quiser

                for i in range(numero_de_livros):                                                                                           #Controla para que o usuário consiga excluir o tanto de livros que lhe for necessário

                        livro_remover = input('\nDigite o nome do livro que gostaria de remover:\n-> ').lower()                             #Usuário digita o nome do livro que deseja excluir, e todas as letras estão minuscúlas para manter o padrão da lista

                        if livro_remover in self.livros_disponiveis:                                                                        #Se o livro digitado estiver na lista de livros disponíveis...
                            
                            self.livros_disponiveis.remove(livro_remover)                                                                   #O livro será removido da lista

                            print(f'\nO livro "{livro_remover.title()}" foi removido com sucesso!\n')                                       #Uma mensagem irá aparecer para usuário informando que o livro foi removido com sucesso

                        else:                                                                                                               #Caso o livro digitado não esteja presente na lista de livros disponíveis, essa mensagem irá aparecer para o usuário
                            print(f'\nO livro "{livro_remover.title()}" não está em nossa lista de livros disponíveis.\n')

            except(ValueError):                                                                                                             #Caso o usuário digite algum caractere diferente de um número inteiro, esse aviso irá aparecer para ele
                print('\nErro: Digite um número inteiro!\n')

        else:                                                                                                                               #Caso a lista de livros disponíveis esteja vazia, essa mensagem irá aparecer
            print('\nNenhum livro disponível para empréstimo!\n')

    def exibir_livros(self):                                                                                                                #Função que exibe a lista completa de livros disponíveis

        if len(self.livros_disponiveis) > 0:                                                                                                #Caso a lista de livros disponíveis não esteja vazia..

            print('\nLISTA DE LIVROS DIPONÍVEIS:\n')                                                                                        #Título da exibição

            for i in range(len(self.livros_disponiveis)):                                                                                   #Navega por toda a lista de livros disponíveis
                print(f'\nLivro {i+1}: {(self.livros_disponiveis[i]).title()}')                                                             #Printa para cada livro, o seu número e o seu nome, sempre com a primeira letra maiúscula

        else:                                                                                                                               #Caso a lista de livros disponíveis esteja vazia, essa mensagem irá aparecer

            print('\nNenhum livro disponível para empréstimo!\n')

    def emprestimo_livro(self):                                                                                                             #Função que permite que o usuário pegue um livro emprestado

        if len(self.livros_disponiveis) > 0:                                                                                                #Caso a lista de livros disponíveis não esteja vazia..
                
            try:                                                                                                                            #Controla que o usuário não irá digitar algo diferente de um número inteiro

                nome = (str(input('\nDigite seu nome:\n-> '))).lower()                                                                                #Usuário digita o seu nome

                if nome in list(self.livros_emprestados.keys()):

                    print('\nEsse usuário já está cadastrado com livros emprestados, devolva os livros emprestados antes de pegar mais.\n')
                    
                else:
                    numero_de_livros = int(input('\nDigite quantos livros você gostaria de pegar:\n-> '))                                       #Existe a possibilidade do usuário pegar mais de um livro

                    livros_emprestados_controle = []                                                                                            #Uma lista de controle que irá salvar os livros que forem pegos emprestados

                    for i in range(numero_de_livros):                                                                                           #Permite que o usário possa pegar quantos livros quiser

                        livro_emprestimo = (str(input('\nDigite o nome do livro que gostaria de pegar:\n-> '))).lower()                         #Usuário digita o nome do livro, que fica com todas as letras minúculas por conta do padrão estabelecido para a lista

                        if livro_emprestimo in self.livros_disponiveis:                                                                         #Se o livro digitado estiver na lista de livros disponíveis...

                            livros_emprestados_controle.append(livro_emprestimo)                                                                #Adiciona o livro que foi emprestado para a lista de livros emprestados de controle                                                         
                            
                            self.livros_disponiveis.remove(livro_emprestimo)                                                                    #Remove o livro emprestado da lista de livros disponíveis

                        else:                                                                                                                   #Caso o livro digitado não esteja presente na lista de livros disponíveis, essa mensagem irá aparecer para o usuário
                            print(f'\nO livro {livro_emprestimo.title()} não está em nossa lista de livros disponíveis.\n')

                    if livros_emprestados_controle != None:

                        print(f'\nCADASTRO DO EMPRÉSTIMO:\nNome: {nome.title()}')

                        self.livros_emprestados[nome] = livros_emprestados_controle                                                                #A lista de controle é atibuída como o valor no dicionário de livros emprestados

                        for i in range(len(self.livros_emprestados[nome])):

                            print(f'\nLivro {i+1}: {(livros_emprestados_controle[i]).title()}\n')                                                  #Exibe quais livros o usuário cadastrado pegou emprestado

                    else:
                        print(f'\nErro: Usuário "{nome.title()}" não cadastrado!\n')


            except(ValueError):                                                                                                             #Caso o usuário digite algum caractere diferente de um número inteiro, esse aviso irá aparecer para ele
                print('\nErro: Digite um número inteiro!\n')


        else:                                                                                                                               #Caso a lista de livros disponíveis esteja vazia, essa mensagem irá aparecer
            
            print('\nNenhum livro disponível para empréstimo!\n')
    
    def exibir_livros_emprestados(self):                                                                                                                #Função que exibe a lista completa de livros disponíveis

            if len(self.livros_emprestados) > 0:                                                                                                #Caso a lista de livros disponíveis não esteja vazia..

                print('\nLISTA DE LIVROS EMPRESTADOS:\n')                                                                                        #Título da exibição

                for nome,livro in self.livros_emprestados.items():

                    print(f'\nNome:{nome.title()}')

                    for i in range(len(livro)):
                        print(f'\nLivros {i}:{(livro[i+1]).title()}')

            else:                                                                                                                               #Caso a lista de livros disponíveis esteja vazia, essa mensagem irá aparecer

                print('\nNenhum livro foi pego para empréstimo!\n')

    def devolver_livros(self):

        if len(self.livros_emprestados) > 0:  

            nome = (str(input('\nDigite o seu nome de usuário cadastrado:\n-> '))).lower()

            if nome in self.livros_emprestados:
                
                for livro in self.livros_emprestados[nome]:
                    self.livros_disponiveis.append(livro)
                    
                del self.livros_emprestados[nome]

                print(f'\nOs livros pegos pelo usuário cadastrado como "{nome.title()}" foram devolvidos!\n')
            
            else:

                print(f'\nO nome "{nome.title()}" não está cadastrado\n')

        else:                                                                                                                               #Caso a lista de livros disponíveis esteja vazia, essa mensagem irá aparecer

            print('\nNenhum livro foi pego para empréstimo!\n')
