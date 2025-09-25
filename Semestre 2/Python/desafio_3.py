from math import ceil

print(' ') #Espaço de separação

#Frase
frase = str(input('Digite uma frase:'))

frase.lower()

lista_da_frase = []

print(' ') #Espaço de separação

#Lista e número de palavras

palavras = frase.split()

print(f'Total de palavras únicas: {len(palavras)}')

print(' ') #Espaço de separação

#Maior e menor palavra

maior = ''
menor = '                                                            '

for i in range (len(palavras)):

    if len(palavras[i]) > len(maior):

            maior = palavras[i] 
            

    if len(palavras[i]) < len(menor):

            menor = palavras[i] 
           



print(f'Mais longa: "{maior}" | Mais curta: "{menor}"')

print(' ') #Espaço de separação

#Lista de vogais

lista_vogal = []

vogais = ['a','e','i','o','u']

for i in range(len(palavras)):

    comeca_com_vogal = False

    for j in range(len(vogais)):

        comeca_com_vogal = palavras[i].startswith(vogais[j])
        
        if comeca_com_vogal:
            lista_vogal.append(palavras[i])
            break


print(f'Palavras que começam com vogal: {lista_vogal}')

print(' ') #Espaço de separação

#Inverter palavras

palavras_invertidas = []

for i in range(len(palavras)):

    palavras_invertidas.append(palavras[i][::-1])
   

frase_invertida = " ".join(palavras_invertidas)

print(f'Frase invertida: "{frase_invertida}"')

print(' ') #Espaço de separação

#Media de letras de cada palavra

media = 0.0

for i in range(len(palavras)):

    media += len(palavras[i])

media = media/len(palavras)

print(f'Média de caracteres por palavra: {ceil(media)}.0')

print(' ') #Espaço de separação

#Ordem alfabética inversa

ordem_alfabetica = sorted(palavras_invertidas,reverse=True)

print(f'Palavras em ordem alfabética inversa:{ordem_alfabetica}')

print(' ') #Espaço de separação