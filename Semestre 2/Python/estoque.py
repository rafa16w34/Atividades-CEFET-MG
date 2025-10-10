
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

                    print('\nESTOQUE COMPLETO: \n')

                    i = 1

                    for nomes,informacoes in estoque.items():
                        
                        print(f'\n(Produto {i})\nNome: {nomes}\nQuantidade do produto: {informacoes['quantidade']}\nValor unitário do produto: R$ {informacoes['preco']},00\n')
                        
                        i+=1

                else:
                    print('\nEstoque vazio.\n')    



            case 2:#Acrescenta um produto ao estoque
                
                nome = str(input('\nDigite o nome do produto.\n'))

                nome = nome.capitalize()

                if nome in list(estoque.keys()):

                    print('\nEsse nome já foi cadastrado no estoque, você pode escolher alterar suas informações selecionando a opção 3 no menu.\n')

                else:

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

                    for i in estoque.values():

                        valor_total += i['quantidade'] * i['preco']

                
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

                    print('\nESTOQUE ORGANIZADO EM ORDEM ALFABÉTICA:\n')

                    for i in range(len(estoque.keys())):

                        print(f'\n(Produto {i+1})\nNome: {ordem_alfabetica[i]}\nQuantidade do produto: {estoque[ordem_alfabetica[i]]['quantidade']}\nValor unitário do produto: R$ {estoque[ordem_alfabetica[i]]['preco']},00 ')
                else:
                    print('\nEstoque vazio.\n')

            case 7: #Exibe o estoque em ordem decrescente com base do valor total do estoque
                if estoque:
                    ordem_decrescente = sorted(estoque.keys(), key=lambda nome: (estoque[nome]['quantidade'] * estoque[nome]['preco']), reverse=True)

                    print('\nESTOQUE ORGANIZADO EM ORDEM CRESCENTE COM BASE NO VALOR TOTAL DOS PRODUTOS:\n')

                    for i in range(len(ordem_decrescente)):

                        print(f'\n(Produto {i+1})\nNome: {ordem_decrescente[i]}\nQuantidade do produto: {estoque[ordem_decrescente[i]]['quantidade']}\nValor unitário do produto: R$ {estoque[ordem_decrescente[i]]['preco']},00\nValor total do produto no estoque: R$ {estoque[ordem_decrescente[i]]['quantidade'] * estoque[ordem_decrescente[i]]['preco']},00')

                else:
                    print('\nEstoque vazio.\n')

            case _:
                print('\nOpção não disponível.\n')

    
    except (ValueError):
        print('\nA opção precisa ser um número inteiro.\n')