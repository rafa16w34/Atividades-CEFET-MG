
estoque = {}

sair = 0

while sair == 0:

    try:
        opcao = int(input('\nDigite a opção:\n1- Exibir estoque completo\n2- Adicionar produto\n3- Atualizar um produto\n4- Valor total do estoque\n5- Remover um produto\n6- Exibir estoque em ordem alfabética\n7- Exibir estoque em ordem decrescente com base no valor total\n0- Sair\n-> '))

        print('\n') #Somente um espaçamento entre a resposta e o sistema.
    
        match(opcao):

            case 0:#Controla o loop do while
                sair = 1


            case 1:#Exibe o estoque
                if estoque:
                    for nomes,informacoes in estoque.items():
                        
                        print(f'\nNome: {nomes}\nQuantidade do produto: {informacoes['quantidade']}\nValor unitário do produto: {informacoes['preco']}\n\n')

                else:
                    print('\nEstoque vazio.\n')    



            case 2:#Acrescenta um produto ao estoque
                
                nome = str(input('\nDigite o nome do produto.\n'))

                try: 
                    quantidade_novo = int(input('\nDigite a quantidade do novo produto.\n'))

                    valor_novo = int(input('\nDigite o valor do novo produto.\n'))

                    estoque[nome] = { "quantidade": quantidade_novo, "preco": valor_novo}


                except(ValueError):
                    print('\nDeve ser digitado um número inteiro!\n')

                valor = {"quantidade": quantidade_novo, "preco": valor_novo}

                estoque[nome] = valor



            case 3:#Altera informações do produto

                if estoque:
                    chave = str(input('\nDigite o nome do produto que gostaria de alterar\n'))

                    
                    if chave in list(estoque.keys()):


                        try:
                        
                            quantidade_novo = int(input('\nDigite a nova quantidade para o produto.\n'))

                            valor_novo = int(input('\nDigite o novo valor do produto.\n'))

                            estoque[chave]["quantidade"] = quantidade_novo
                            estoque[chave]["preco"] = valor_novo

                        except(ValueError):
                            print('\nDeve ser digitado um número inteiro!\n')

                    else:
                        print(f'\n"{chave}" não é um do produtos presentes no estoque.\n')
                else:
                    print('\nEstoque vazio.\n')
            

            case 4:#Calcula o valor total do estoque

                if estoque:

                    valor_total = 0

                    for info in estoque.items():

                        print(valor_total)
                        
                        valor_total += valor['quantidade'] * valor['preco']

                
                    print(f'\nO valor total do estoque é de R$ {valor_total},00\n')
                
                else:
                    print('\nEstoque vazio.\n')


            case 5:#Exclui o produto

                if estoque:

                    chave = str(input('\nDigite o nome do produto que você gostaria de excluir\n'))

                    if chave in list(estoque.keys()):

                        del(estoque[chave]['quantidade'])
                        del(estoque[chave]['preco'])

                        del(estoque[chave])

                    else:
                        print(f'\n"{chave}" não é um produto presente no estoque.\n')

                else:
                    print('\nEstoque vazio.\n')

            case 6: #Exibe em ordem alfabetica

                if estoque:
                    #Exibir em ordem alfabética:

                    ordem_alfabetica = sorted(list(estoque.keys()))

                    for i in range(len(estoque.keys())):

                        print(f'| {ordem_alfabetica[i]} | {estoque[ordem_alfabetica[i]]['quantidade']} | {estoque[ordem_alfabetica[i]]['preco']} |')
                else:
                    print('\nEstoque vazio.\n')

            case 7: #Exibe o estoque em ordem decrescente com base do valor total do estoque
                if estoque:
                    ordem_decrescente = sorted(estoque.keys(), key=lambda nome: (estoque[nome]['quantidade'] * estoque[nome]['preco']), reverse=True)

                    for i in range(len(ordem_decrescente)):

                        print(f'| {ordem_decrescente[i]} | {estoque[ordem_decrescente[i]]['quantidade']} | R$ {estoque[ordem_decrescente[i]]['preco']},00 | R$ {estoque[ordem_decrescente[i]]['quantidade'] * estoque[ordem_decrescente[i]]['preco']},00')
                else:
                    print('\nEstoque vazio.\n')

            case _:
                print('\nOpção não disponível.\n')

    
    except (ValueError):
        print('\nA opção precisa ser um número inteiro.\n')