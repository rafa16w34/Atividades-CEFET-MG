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


print(f'Frase invertida: "{frase[::-1]}"')

print(' ') #Espaço de separação

#Media de letras de cada palavra

media = 0.0

for i in range(len(palavras)):

    media += len(palavras[i])

media = media/len(palavras)

print(f'Média de caracteres por palavra: {media}')

print(' ') #Espaço de separação

#Ordem alfabética inversa

ordem_alfabetica = []

alfabeto = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',]

for i in range(len(alfabeto)):
     
     
     for j in range(len(palavras)):
          
          if palavras[j].startswith(alfabeto[i]):
               
               ordem_alfabetica.append(palavras[j][::-1])



print(f'Palavras em ordem alfabética inversa:{ordem_alfabetica[::-1]}')

print(' ') #Espaço de separação