# Concatenação de listas ' + '
a = [1, 2, 3]
b = [4, 5, 6]
c = a + b


# Concatenação ' : '
t = [9, 41, 12, 3, 74, 15]
print(t[1:3])

print(t[:4])
print(t[3:])
print(t[:])

print(t[::2])
print(t[::-1])

print(t[4:1:-2])


#
nums = [9, 41, 12, 3, 74, 15]
print(9 in nums)
print(9 not in nums)
print(0 in nums)
print(0 not in nums)


#
print(max(nums))
print(min(nums))
print(sum(nums))
print(sum(nums)/len(nums))


#Exercicio 18
from random import randint

lista_numeros_aleatorios = []

for i in range(20):
    numeros_aleatorios = randint(1,80)
    lista_numeros_aleatorios.append(numeros_aleatorios)

print(lista_numeros_aleatorios)

print(f'Maior número da lista:{max(lista_numeros_aleatorios)}')

print(f'Menor número da lista:{min(lista_numeros_aleatorios)}')

print(f'Amplitude dos números da lista:{max(lista_numeros_aleatorios) - min(lista_numeros_aleatorios)}')

print(f'Soma dos números da lista:{sum(lista_numeros_aleatorios)}')

print(f'Media dos números da lista:{(sum(lista_numeros_aleatorios))/(len(lista_numeros_aleatorios))}')

print(f'Média dos 10 primeiros números da lista:{(sum(lista_numeros_aleatorios[0:10]))/(10)}')

print(f'Maior número entre os 10 últimos números da lista:{max(lista_numeros_aleatorios[-10:])}')
print(f'Menor número entre os 10 últimos números da lista:{min(lista_numeros_aleatorios[-10:])}')




#Exercicio 19
sabores_de_pizza = ['Peperoni','Vegetariana', 'Maguerita']

print('')
print('Sabores de Pizza')
print('')

for i in range(3):
    print(f'Sabor {i}: {sabores_de_pizza[i]}')

print('')

for i in range(3):
    if(i == 0):
        print(f'Adoro pizza de {sabores_de_pizza[i]}')
    if(i == 1):
        print(f'A pizza {sabores_de_pizza[i]} é muito saudável')
    if(i == 2):
        print(f'Amo pizza {sabores_de_pizza[i]}')

print(f'Eu gosto um pouco de {sabores_de_pizza[2]}. Gosto da pizza de {sabores_de_pizza[1]}. Mas eu amo a pizza {sabores_de_pizza[0]}')
print('Eu realmente adoro pizza!')



#Exercicio 20




#Exercicio 21
numeros = []

for i in range(20):
    numeros.append(i)

print('')

for i in range(20):
    print(numeros[i]+1)


#Exercicio 22
numeros = []

for i in range(1000000):
    numeros.append(i)

print('')

for i in range(1000000):
    print(numeros[i]+1)


soma = 0
for i in range(1000000):

    soma += numeros[i]+1

print(soma)


#Exercicio 23
