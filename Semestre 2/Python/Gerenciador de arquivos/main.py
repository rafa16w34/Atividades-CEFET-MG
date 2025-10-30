sair = 0

while sair == 0:
        
    try:

        opcao = int(input('\nDigite uma das opções a seguir:\n1- Criar/Editar um arquivo ".txt"\n0- Sair\n-> '))

        match(opcao):

            case 1:

                sair1 = 0
                nome_arquivo = str(input('\nDigite o nome do arquivo no qual você gostaria de criar/editar:\n-> '))#Usuário cria arquivo com o nome que quer   

                if not nome_arquivo.endswith('.txt'):
                    
                    nome_arquivo = nome_arquivo + '.txt'

                try:

                    while sair1 == 0:

                        opcao1 = int(input('\nDigite uma das opções abaixo:\n1- Adicionar mensagem ao arquivo\n2- Editar mensagem\n3- Sair do arquivo atual.\n'))

                        match(opcao1):

                            case 1:#Adicionar nova mensagem na última linha do arquivo criado
                                    
                                try:

                                    with open (nome_arquivo,"a") as arq:
                                            
                                        mensagem = str(input('\nDigite a mensagem que gostaria de adicionar no arquivo:\n-> '))
                                        arq.write(f'{mensagem}\n')

                                except(FileNotFoundError):
                                    print('\nErro: Arquivo não encontrado!\n')

                                except (PermissionError):
                                    print('\nErro: Você não tem permissão para acessar o arquivo!\n')


                            case 2:#Editar uma linha do arquivo
                                    
                                try:

                                    with open (nome_arquivo,'r') as arq:
                                        linhas = arq.readlines()
                                        
                                        try:
                                            linha_editar = int(input('\nDigite qual linha você gostaria de editar:\n-> '))
                                        
                                            nova_mensagem = str(input('\nDigite a nova mensagem para essa linha:\n-> '))
                                            
                                            if 1 <= linha_editar <= len(linhas):
                                                
                                                linhas[linha_editar - 1] = nova_mensagem + '\n'
                                                
                                                with open(nome_arquivo, "w") as arq:
                                                    arq.writelines(linhas)

                                                print(f'\nLinha {linha_editar} editada com sucesso!\n')
                                            else:
                                                print('\nErro: Linha inexistente!\n')                        

                                        except(ValueError):
                                            print('\nErro: Digite um número inteiro!\n')

                                except(FileNotFoundError):
                                    print('\nErro: Arquivo não encontrado!\n')

                                
                                except (PermissionError):
                                    print('\nErro: Você não tem permissão para acessar o arquivo!\n')

                            case 3:
                                sair1 = 1

                            case _:
                                print('\nDigite uma opção válida!\n')
                                


                except(ValueError):
                    print('\nErro: Digite um número inteiro!\n')

            case 0:
                sair = 1

            case _:
                print('\nDigite uma opção válida!\n')

    except(ValueError):
        print('\nErro: Digite um número inteiro!\n')

    except Exception as e:
        # Qualquer erro inesperado é registrado no log
        with open('gerenciamento_erros.log', 'a') as log:
            log.write(f'Erro inesperado: {str(e)}\n')
        print('\nUm erro inesperado ocorreu! O problema foi registrado em "gerenciamento_erros.log".\n')


