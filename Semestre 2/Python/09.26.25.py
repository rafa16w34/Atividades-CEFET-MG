#Exercício 1
'''
from math import sqrt, pow

n = []
quantidade = int(input('\nQuantos números gostaria de digitar?\n'))

for i in range(quantidade):
    n.append( int(input(f'Digite o número {i} da lista que você deseja: ')))

x = 0

for i in range(len(n)+1):
    x = x + i 
    print(x)

media =x/len(n)
print(media)

parte_2 = 0

for i in range(len(n)):
   parte_2 = parte_2 +  pow((n[i] - media),2)

desvio = sqrt( ((1)/(len(n)-1)) * parte_2 )

print(f'O desvio padrão de n : {n} é : {desvio}')

#Exercicio 2

lista_1 = set([])
quantidade = int(input('\nQuantos números gostaria de digitar para a lista 1?\n'))

for i in range(quantidade):
    lista_1.add( int(input(f'Digite o número {i} da lista 1 que você deseja: ')))

lista_2 = set([])
quantidade = int(input('\nQuantos números gostaria de digitar para a lista 2?\n'))

for i in range(quantidade):
    lista_2.add( int(input(f'Digite o número {i} da lista 2 que você deseja: ')))

print(f'A intercessão entre as duas listas é: {lista_1&lista_2}')
''''''


#Exercicio 3

sequencia_1 = set([])
quantidade = int(input('\nQuantos números gostaria de digitar para a sequência 1?\n'))

for i in range(quantidade):
    sequencia_1.add( int(input(f'Digite o número {i} da lista 1 que você deseja: ')))

print(sequencia_1)

sequencia_2 = set([])
quantidade = int(input('\nQuantos números gostaria de digitar para a lista 2?\n'))

for i in range(quantidade):
    sequencia_2.add( map(int(input(f'Digite o número {i} da lista 2 que você deseja: '))))

print(sequencia_2)






sequencia_organizada = sequencia_1 + sequencia_2



print(sequencia_organizada)

sequencia_organizada = sorted(sequencia_organizada)

print(sequencia_organizada)'''

#Exercicio 4

'''escolha = str(input('Digite qual média você quer escolher:\n1 - Aritmética\n2 - Ponderada\n3 - Harmônica'))

lista = []

for i in range(3):
    lista.append( int(input(f'Digite a nota {i}: ')))



match (escolha):

    case 1:
        for i in range(3):
            soma = soma + lista[i]
        media = soma/3
        print(f'A média é {media}')

    case 2:
        for i in range(3):
                soma = soma + (lista[i] *3)
        media = soma/3
        print(f'A média é {media}')'''