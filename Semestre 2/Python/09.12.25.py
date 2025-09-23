numeros = [1,2,3,4,5,None]

print(numeros)

del numeros[-2]

print(numeros)

poppy = numeros.pop(-2)

print(numeros)

print(poppy)

numeros.remove(1)

print(numeros)





#Espaço entre os exercícios
print(' ')





#Exercício 7

convidados = [None,None,None,None]

for n in (range(4)):
    convidados[n] = input('Digite o nome da pessoa que gostaria de chamar para jantar:')

print('')

for n in (range(len(convidados))):
    print(f"Bom dia {convidados[n]}. Gostaria de te convidar para jantar, topa?")







#Espaço entre os exercícios
print(' ')





#Exercício 8

banido = input('Quem voce quer desconvidar?')

r = convidados.index(banido)

convidados[r] = input('Digite o nome da pessoa que gostaria de chamar para jantar:')








#Espaço entre os exercícios
print(' ')





#Exercício 9
print(f'Lamentamos que o convidado "{banido}" não é mais bem vindo no recinto.')







#Espaço entre os exercícios
print(' ')





#Exercício 10
#Já fiz isso








#Espaço entre os exercícios
print(' ')





#Exercício 11
for n in (range(len(convidados))):
    print(f"Bom dia {convidados[n]}. Gostaria de te convidar para jantar, topa?")







#Espaço entre os exercícios
print(' ')





#Exercício 12
