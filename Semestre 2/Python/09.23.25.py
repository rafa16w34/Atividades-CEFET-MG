#match case (equivalentente ao switch case do C)

var = 10

match var:

    case 1:
        #instrução
        print('case 1')

    case _:
        #instrução
        print('case default')


#While 
#Indicado para a repetição condicional
#Pode usar o break ou continue

while True:
    age = int(input('Qual sua idade'))

    if age < 18:
        break

    if age > 18 and age< 40:
        break
    
    if age >= 40:
        break
    break

#Espaço entre os exercícios
print(' ')

#Exercício 1

contato = [ [], [], [], [] ]

aniversario_separado = []

estrutura_lista = ['Nome: ' , 'Data de nascimento: ', 'Endereço: ', 'Telefone de Contato: ']

while True:

    sair = False

    print(' ')
    opcao = int(input('Digite o que que fazer:\n1- Inserir contato\n2- remover contato\n3- pesquisar contato pelo nome\n4- listar todos os contatos\n5- listar os contatos cujo o nome se inicia com uma dada letra\n6- imprimir os aniversariantes do mês\n0- sair\n'))
    
    print(' ')

    match opcao:

        case 0:
            sair = True

        case 1:

            print(' ')
            contato[0].append(input('Digite o nome do contato: '))
            print(' ')
            contato[1].append(str(input('Digite a data de nascimento (DD/MM/AAAA): ')))
            print(' ')
            contato[2].append(input('Digite o endereço do contato: '))
            print(' ')
            contato[3].append(input('Digite o telefone do contato: '))
            print(' ')
                
        case 2:

            print(' ')
            remover = int(input('Digite qual o indice do contato que deseja remover: '))
            print(' ')
            for i in range(4):
                contato[i].remove(contato[i][remover])

        case 3:
            print(' ')
            pesquisar_nome = str(input('Digite o nome que gostaria de buscar: '))
            print(' ')

            for i in range(len(contato[0])):

                if contato[0][i] == pesquisar_nome:
                    print(f'Contato "{contato[0][i]}" encontrado.')


        case 4:

            print(' ')    
            for i in range(len(contato)):
                
                print(' ')
                print(f'{estrutura_lista[i]}')


                for j in range(len(contato[i])):
                    print(' ')
                    
                    print(f'{j}. {contato[i][j]} ')
            print(' ')

        case 5:
            print(' ')
            letra_pesquisar_nome= str(input('Digite a letra inicial do nome que gostaria de buscar: '))
            print(' ')

            for i in range(len(contato[0])):

                if contato[0][i].startswith(letra_pesquisar_nome):
                    print(f'Contato "{contato[0][i]}" inicia com a letra {letra_pesquisar_nome}.')

        case 6:

            print('')
            mes = str(input('Digite o mês que gostaria de verificar os aniversários (MM): '))
            print(' ')
            
            for i in range(len(contato[1])):

                aniversario_separado.append(contato[1][i].partition('/'))

            for i in range(len(contato[0])):
                if aniversario_separado[i][2].startswith(mes):

                    print(f'O {contato[0][i]} faz aniversário esse mês !')



    if sair == True:
        break

