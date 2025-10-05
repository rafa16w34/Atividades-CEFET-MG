#Dicionário

'''shows ={'Lex luthor':'convite','Dias de Truta':50}
print(shows['Dias de Truta'])

prof_guido = {'peso': 100, 'idade': 40, 'filhos': 2}
print(prof_guido['idade'])

#nome['chave'] = valor
print(prof_guido)
prof_guido['estado_civil'] = 'preso'
print(prof_guido)


prof_guido = {}
print(prof_guido)
prof_guido['idade'] = 40
print(prof_guido)
prof_guido['estado_civil'] = 'casado'
prof_guido['idade'] = 44
print(prof_guido)

#Exercício 1
cadastro = {}

CPF = input('Digite seu CPF: ')

cadastro['CPF'] = CPF

ID = input('\nDigite seu ID: ')

cadastro['ID'] = ID

CEP = input('\nDigite seu CEP: ')

cadastro['CEP'] = CEP

CIDADE = input('\nDigite sua cidade natal: ')

cadastro['CIDADE'] = CIDADE

TELEFONE = input('\nDigite seu Telefone: ')

cadastro['TELEFONE'] = TELEFONE

print(f'\n{cadastro}\n')


print(prof_guido)
prof_guido['estado_civil'] = 'casado'
print(prof_guido)


#Deletar campos

print(prof_guido)
del prof_guido['estado_civil']
print(prof_guido)

estado = dict()
brasil = list()
for c in range(3):
    estado['uf'] = str(input('Unidade Federativa: '))
    estado['sigla'] = str(input('Sigla do Estado: '))
    brasil.append(estado.copy())                        #Caso não use o copy, será adicionado as últimas informações somente, perdendo as outras informações
print(brasil)


#for chave, valor in nome.items()       # método items(): devolve uma lista de pares chave-valor

user_0 = {'username': 'miziphi', 'first': 'Guido', 'last': 'Pantuza', 'idade': 40}
for i, value in user_0.items():
    print('\nKey: {}'.format(i))
    print('Value: {}'.format(value))

# for chave in nome.keys()

user_0 = {'username': 'miziphi', 'first': 'Guido', 'last': 'Pantuza', 'idade': 40}
for i in user_0.keys():
    print('\nKey: {}'.format(i), end='')

# for valor in nome. values()

user_0 = {'username': 'miziphi', 'first': 'Guido', 'last': 'Pantuza', 'idade': 40}
for i in user_0.values():
    print('\nValor: {}'.format(i))
          
#Set: conjuntos de elementos iguais

fav_languages = {'jen': 'python', 'sarah': 'c', 'edward': 'c', 'phil': 'python', }
print('As linguagens citadas foram: ', end=''  )
for language in set(fav_languages.values()): 
    print(language.title())

#sorted()    De forma ordenada.

favorite_languages = {'jen': 'python', 'sarah': 'c', 'edward': 'ruby', 'phil': 'python', }
for name in sorted(favorite_languages.keys()):
    print('{}, obrigado'.format(name.title()))
    print(f'{name.title()}, obrigado')


#Cria dicionário, em seguida cria a lista

prof_0 = {'nome':'guido', 'sobrenome':'pantuza'}
prof_1 ={'nome':'fulano', 'sobrenome': 'beltrano'}
prof_2 = {'nome':'paulo', 'sobrenome':'cavegato'}
profs = [prof_0, prof_1, prof_2]

pizza = {'preço':100, 'ings':['molho', 'tomate', 'muçarela']}

#   Não aninhe muitos níveis
users = {
'aeinstein': {'first': 'albert', 'last': 'einstein', 'location': 'princeton', },
'mcurie': {'first': 'marie', 'last': 'curie', 'location': 'paris', },
}

'''


#Exercício 3

'''from random import randint

notas = {'Rafael': 0,'Davi':0,'Gabriel':0,'Chicão':0,'Carlos':0}
soma = 0

nota = randint(0,10)
notas['Rafael'] = nota
soma += nota

nota = randint(0,10)
notas['Davi'] = nota
soma += nota

nota = randint(0,10)
notas['Gabriel'] = nota
soma += nota

nota = randint(0,10)
notas['Chicão'] = nota
soma += nota


nota = randint(0,10)
notas['Carlos'] = nota
soma += nota

print(notas)

media = soma/5

print('\n',media)

if media< 6:
    print('\nRever metodologia.\n')
elif media == 6:
    print('\nPor pouco!\n')
elif 6< media and media < 8:
    print('\nSatisfatório\n')
elif media>8 :
    print('\nAí sim!\n')
'''

#   Execício 4

glossario = {'Append':0,'Sort':0,'Len':0,'Range':0,'Upper':0}

glossario['Append'] = '\nAppend: Serve para acrescentar mais um item em uma lista.\n'

glossario['Sort'] = '\nSort: Serve para ordenar uma lista.\n'

glossario['Len'] = '\nLen: Serve para receber o tamanho de uma lista.\n'

glossario['Upper'] = '\nUpper: Serve para transformar todas as letras de uma string em maiúscula\n'

'''for i in palavra,significado in glossario.items():
    print(f'(palavra):\nt(significado)')'''