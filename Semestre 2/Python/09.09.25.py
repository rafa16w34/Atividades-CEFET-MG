bandas = ['AcDc', 'Black Sabbatah', 'Metallica', 'Iron Maiden' ]

print(bandas) #imprime a lista

print(bandas[0]) #imprime o primeiro
#print(bandas[4])

print(bandas[-1]) #imprime o útltimo
print(bandas[-0]) #imprime o primeiro




#Espaço entre os exercícios
print(' ')




#Exercício 1
nomes = ['Davi','Pedrin','Felpo','Chicão','Felipe']

print(nomes[0])
print(nomes[1])
print(nomes[2])
print(nomes[3])
print(nomes[4])




#Espaço entre os exercícios
print(' ')




#Exercício 2
print(f'Bom dia, {nomes[0]}!')
print(f'Bom dia, {nomes[1]}!')
print(f'Bom dia, {nomes[2]}!')
print(f'Bom dia, {nomes[3]}!')
print(f'Bom dia, {nomes[4]}!')




#Espaço entre os exercícios
print(' ')




#Exercício 3
transportes = ['Moto','Carro','Bike','Busão']

print(f'A {transportes[0]} é perigosa.')
print(f'Eu gostaria de ter um {transportes[1]}.')
print(f'Queria ter andado de {transportes[2]}.')
print(f'Tenho que pegar o {transportes[3]}.')




#Espaço entre os exercícios
print(' ')




#Exercício 1
nomes = ['Davi','Pedrin','Felpo','Chicão','Felipe']

for i in range(len(nomes)):
    print(nomes[i])




#Espaço entre os exercícios
print(' ')




#Exercício 2

for i in range(len(nomes)):
    print(f'Bom dia, {nomes[i]}!')




#Espaço entre os exercícios
print(' ')




#Exercício 3
transportes = ['A Moto é perigosa.','Eu gostaria de ter um Carro.','Queria ter andado de Bike.','Tenho que pegar o Busão.']

for i in range(len(transportes)):
    print(f'{transportes[i]}')




#Espaço entre os exercícios
print(' ')




for i in range(5):
    if i == 3:
        print('Encontrei 3, saindo do loop.')
        break
    print(i)
print('Estou fora do for.')




#Espaço entre os exercícios
print(' ')





for i in range(5):
    if i == 2:
        print('Pulando o 2.')
        continue
    print(i)
print('Estou fora do for.')




#Espaço entre os exercícios
print(' ')




nomes = ['Agnus', 'Malcon', 'Bom Scott']
idades = [25,30,22]

for nomes,idades in zip(nomes,idades):
    print(f'{nomes} tem {idades} anos.')




#Espaço entre os exercícios
print(' ')




for i in range(5):
    if i == 2:
        break
    else:
        print(i)
else:
    print('Fim do for')




#Espaço entre os exercícios
print(' ')





for i in range(5):
    if i == 5:
        break
    else:
        print(i)
else:
    print('Fim do for')




#Espaço entre os exercícios
print(' ')




#Não muito recomendado:

pares = [numero for numero in range(10) if numero %2 == 0]
print(pares)

pares_aninhados = [(x,y) for x in range(2) for y in range(2)]
print(pares_aninhados)

quadrados = [numero * numero for numero in range(1000)]
print(quadrados)





#Espaço entre os exercícios
print(' ')





bandas.append('Ana Castela') #insere no final
print(bandas)
print(bandas[-1])

bandas.insert(0,'Raul Seixas')
bandas.insert(-2,'Bêbados e habilidosos')
print(bandas)