#Exercício 1

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

#Exercicio 3

sequencia_1 = list(map(int,input('Digite os números da 1º sequência, separados por espaço: ')split))






sequencia_organizada = sequencia_1 + sequencia_2

print(sequencia_organizada)

sequencia_organizada.sort()

print(sequencia_organizada)