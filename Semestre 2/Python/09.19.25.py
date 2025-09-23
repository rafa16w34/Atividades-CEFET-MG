#Exercício 1

lista = []
primos = []

for i in range(100):
    lista.append(i+1)

for i in range(100):

    divisivel = 0

    for j in range (999):

        j += 1

        if (lista[i] % j == 0) :
            divisivel += 1

    if divisivel <= 2:
        primos.append(lista[i])

print('')
print(lista)
print('')
print(primos)

#Espaço entre os exercícios
print(' ')

#Exercicio 2

vogal = 0
consoante = 0

frase = str(input('Digite uma frase : '))

frase.lower()

for i in range(len(frase)):

    if frase[i].isalpha():

        if frase[i] == ('a') or frase[i] == ('e') or frase[i] == ('i') or frase[i] == ('o') or frase[i] == ('u'):
            vogal += 1   
        else:
            consoante  += 1


print('')
print(f'O total de consoantes é: {consoante} e de vogais é: {vogal}')

tem_engenharia = frase.find('engenharia')

if tem_engenharia != -1:
    print('A frase tem a palavra engenharia')
else:
    print('A frase não tem a palvara engenharia')

print(f'Frase invertida: {frase[i::-1]}')

#Espaço entre os exercícios
print(' ')

#Exercicio 3

maiusculo = 0
minusculo = 0
numero = 0
simbolos = ['@', '#', '$', '%', '&', '*', '!']
simbolo = 0
espaco = 0

senha = str(input('Digite sua senha. A senha deve conter pelo menos uma letra maiuscula, uma letra minuscula, um número, e um símbolo especial, além disso não pode conter espaços : '))

if (len(senha) >= 8):
    maior_que_oito = True
else:
    maior_que_oito = False

for i in range(len(senha)):

    if senha[i].isupper():
        maiusculo +=1
        

    if senha[i].islower():
        minusculo +=1
        
    
    if senha[i].isnumeric():
        numero +=1
        
    for j in range(len(simbolos)):

        if senha[i] == simbolos[j]:
            simbolo =+ 1

    if senha[i] == (' '):
        espaco += 1
        

if (maiusculo >=1) and (minusculo >= 1) and (numero >=1) and (espaco == 0) and (simbolo >= 1) and (maior_que_oito == True):
    print('Senha feita')
else:
    print('Senha inválida')

#Espaço entre os exercícios
print(' ')

#Exercicio 4

from random import randint

pares = []



while(len(pares) < 10):

    numero = randint(0,100) 

    if numero %2 == 0:
        pares.append(numero)

print(f'Lista normal: {pares}')
print(f'Lista invertida: {pares[::-1]}')