quantidade = []
valor = []

informacoes = [quantidade,valor]

estoque = {}

sair = 0

while sair == 0:

    try:
        opcao = int(input('\nDigite a opção:\n1- Exibir estoque completo\n2- Adicionar produto\n3- Atualizar um produto\n4- Valor total do estoque\n5- Remover um produto\n0- Sair\n-> '))

    
        match(opcao):

            case 0:#Controla o loop do while
                sair = 1


            case 1:#Exibe o estoque
                i = 0
                for nomes,informacoes in estoque.items():
                    
                    print(f'\nNome: {nomes}\nQuantidade do produto: {informacoes[0][0+i]}\nValor unitário do produto: {informacoes[1][0+i]}\n\n')
                    i+=1



            case 2:#Acrescenta um produto ao estoque
                
                nome = str(input('\nDigite o nome do produto.\n'))

                try: 
                    quantidade_novo = int(input('\nDigite a quantidade do novo produto.\n'))

                    quantidade.append(quantidade_novo)

                    valor_novo = int(input('\nDigite o valor do novo produto.\n'))

                    valor.append(valor_novo)


                except(ValueError):
                    print('\nDeve ser digitado um número inteiro!\n')


                estoque[nome] = informacoes

            case 3:#Altera informções do produto
                chave = str(input('\nDigite o nome do produto que gostaria de alterar\n'))

                
                if chave in list(estoque.keys()):

                    indice = list(estoque.keys()).index(chave)

                    try:
                    
                        quantidade_novo = int(input('\nDigite a nova quantidade para o produto.\n'))

                        quantidade[indice] = quantidade_novo

                        valor_novo = int(input('\nDigite o novo valor do produto.\n'))

                        valor[indice] = valor_novo

                    except(ValueError):
                        print('\nDeve ser digitado um número inteiro!\n')

                else:
                    print(f'\n"{chave}" não é um do produtos presentes no estoque.\n')

                estoque[chave] = informacoes

            case 4:#Calcula o valor total do estoque

                valor__total = 0

                for i in range(len(quantidade)):

                    print(valor__total)
                    
                    valor__total += quantidade[i] * valor[i]
            
                print(f'\nO valor total do estoque é de R$ {valor__total},00\n')

            case 5:#Exclui o produto

                chave = str(input('\nDigite o nome do produto que você gostaria de excluir\n'))

                if chave in list(estoque.keys()):

                    indice = list(estoque.keys()).index(chave)

                    del(quantidade[indice])
                    del(valor[indice])

                    del(estoque[chave])



                else:
                    print(f'\n"{chave}" não é um produto presente no estoque.\n')

            case _:
                print('\nOpção não disponível.\n')

    
    except (ValueError):
        print('\nA opção precisa ser um número inteiro.\n')