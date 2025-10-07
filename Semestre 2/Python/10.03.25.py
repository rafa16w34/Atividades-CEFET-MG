#Exercicio 5
'''
rios = {'Rio São Francisco':'Brasil','Rio Nilo':'Egito','Rio Eufrates':'Iraque'}

i = 0

for rio, pais in rios.items():
  
    
    if i == 0:
        print(f"\nO {rio} é um dos principais rios da região nordeste do {pais}.\n")
    elif i == 1:
       print(f'\nO {rio} é o conhecido rio que auxiliou na construção do antigo {pais}.\n')
    elif i == 2:
       print(f'\nO {rio} é um rio bíblico e sua bacia hidrográfica está concentrada no {pais}\n')
    
    i += 1
'''

#Exercicio 6

'''
pessoas = ['Maria','Rafael','Gabriel','Deyse','Jessica','Chicao','Cecília','Davi']

respostas = {'Maria','Gabriel','Jessica'}

for i in range(len(pessoas)):

    respondeu = 0

    for nome in respostas:

        if nome == pessoas[i] :

            respondeu += 1
            
    if respondeu == 1:
        print(f'Obrigado por responder {pessoas[i]}!')
    elif respondeu == 0:
        print(f'Porfavor {pessoas[i]} responda nossa enquete.')        


#Execício 7  
''
Pluto = {'tipo':'Cachorro','dono':'Mickey'}
Garfield = {'tipo':'Gato','dono':'Jonh'}

pets = [Pluto,Garfield]

for pet in pets:
    print(f'Animal: {(pet['tipo'])}, Dono: {(pet['dono'])}')
'''


#Exercicio 8
'''
lugares_rafa = ['Brasil','Roma']

lugares_ga = ['Vaticano','Notredame','Jerusalem']

lugares_jeje = ['Londres']

favorite_places = {'Rafael':lugares_rafa,'Gabriel':lugares_ga,'Jessica':lugares_jeje}

i = 0

for lugares in favorite_places:

    if i == 0:
        print(f'\nRafael: {favorite_places["Rafael"]}\n')

    if i == 1:
        print(f'\nGabriel: {favorite_places["Gabriel"]}\n')

    if i == 2:
        print(f'\nJessica: {favorite_places["Jessica"]}\n')

    i+=1
'''

#Exercicio 9

sandwich_orders = []

finished_sandwichs = []

sair = 0

while sair == 0:

    try:

        opcao = int(input('\nDigite a opção:\n1- Fazer pedido\n2- Finalizar pedido\n0- Sair\n-> '))

        match(opcao):

            case 0:
                sair = 1
            
            case 1:
                pedido = input('\nDigite o seu pedido.\n')
                sandwich_orders.append(pedido)

                print(sandwich_orders)
                print(finished_sandwichs)

            case 2:
                try:

                    try:
                        
                        indice = int(input('\nDigite o índice do pedido que gostaria de finalizar.\n'))
                        finalizado = sandwich_orders[indice]
                        finished_sandwichs.append(finalizado)
                        sandwich_orders.pop(indice)
                        print('\nSeu pedido foi finalizado.\n')

                    except IndexError:
                        print('\nO índice não existe na lista\n')
                    
                except ValueError:
                    print('\nO índice deve ser um número inteiro.\n')

                print(sandwich_orders)
                print(finished_sandwichs)

            case _:
                print('\nOpção não disponível.\n')

    except ValueError:
        print('\nA opção precisa ser um número inteiro.\n')