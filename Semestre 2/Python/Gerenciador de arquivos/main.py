sair = 0
sair1 =0

nome_arquivo = str(input('\nDigite o nome do arquivo no qual você gostaria de editar:\n-> '))#Usuário cria arquivo com o nome que quer


while sair == 0:

        

        try:

            while sair1 == 0:

                opcao1 = int(input('\nDigite uma das opções abaixo:\n1- Adicionar mensagem ao arquivo\n2- Editar mensagem\n3- Sair do arquivo atual.\n'))

                match(opcao1):

                    case 1:#Adicionar nova mensagem na última linha do arquivo criado
                            
                        try:

                            with open (nome_arquivo,"a") as arq:
                                 
                                mensagem = str(input('\nDigite a mensagem que gostaria de adicionar no arquivo:\n-> '))
                                arq.write(f'\n{mensagem}\n')

                        except(FileNotFoundError):
                            print('\nErro: Arquivo não encontrado!\n')

                    case 2:#Editar uma linha do arquivo
                            
                        try:

                            print('\nEm Breve\n')

                        except(FileNotFoundError):
                            print('\nErro: Arquivo não encontrado!\n')


        except(ValueError):
            print('\nErro: Digite um número inteiro!\n')



