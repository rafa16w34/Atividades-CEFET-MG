
estoque = {}

sair = 0

while sair == 0:

    try:
        opcao = int(input('\nDigite a opção:\n1- Exibir estoque completo\n2- Adicionar produto\n3- Atualizar um produto\n4- Valor total do estoque\n5- Remover um produto\n0- Sair\n-> '))

    
        match(opcao):

            case 0:#Controla o loop do while
                sair = 1


            case 1:#Exibe o estoque
                
                for nomes,informacoes in estoque.items():
                    
                    print(f'\nNome: {nomes}\nQuantidade do produto: {informacoes['quantidade']}\nValor unitário do produto: {informacoes['preco']}\n\n')
                



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

            

            case 4:#Calcula o valor total do estoque

                valor_total = 0

                for info in estoque.items():

                    print(valor_total)
                    
                    valor_total += valor['quantidade'] * valor['preco']
            
                print(f'\nO valor total do estoque é de R$ {valor_total},00\n')

            case 5:#Exclui o produto1

                chave = str(input('\nDigite o nome do produto que você gostaria de excluir\n'))

                if chave in list(estoque.keys()):

                    del(estoque[chave]['quantidade'])
                    del(estoque[chave]['preco'])

                    del(estoque[chave])



                else:
                    print(f'\n"{chave}" não é um produto presente no estoque.\n')

            case _:
                print('\nOpção não disponível.\n')

    
    except (ValueError):
        print('\nA opção precisa ser um número inteiro.\n')