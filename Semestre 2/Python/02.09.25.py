#Exercicio : Separador de Nome

nome = str(input("Digite seu nome completo:"))

print(f"Maiúsculas: {nome.upper()}")

print(f"Minúsculas: {nome.lower()}")

espaco = nome.count(' ')

caracteres = (len(nome)) - espaco

print(f"Total de letras (sem espaço): {caracteres}")

separado = nome.partition(' ')

print(f'Primeiro nome tem {len(separado[0])} letras')




#Separar os dois exercícios..
print(' ')




#Exercício: Contador de Letras Específicas

frase = str(input("Digite uma frase:"))

numero_de_a = frase.count('a')

numero_de_A = frase.count('A')

total = numero_de_A + numero_de_a

print(f'Numero de letras a ou A: {total}')




#Separar os exercícios da aula
print(' ')




#Operadors e Expressões

# + - soma
# - - subtração
# * multiplicação
# / - Divisão real
# // - Divisão Inteira      #COPIAR OS EXEMPLOS
# % - Módulo (resto)
# ** - Potência

# = - Atribuição simples
# += -
# -= -
# *= -
# /= -
# //= -
# %= -
# **= -

# == - 
# != -
# > -
# < -
# >= -
# <= -

#and - E lógico
#or - OU lógico
#not - Negação Lógica

# is - Mesmo objeto                 ex = x is y
# is not - Objetos diferentes       ex
# in - Contido em                   ex
# not in - Não contido em           ex

#Ordem de precedência
# 1. ()
# 2. **
# 3. * ou / ou // ou %
# 4. + ou -
# 5. == ou != ou > ou < ou >= ou <=
# 6. not
# 7. and
# 8. or




#Espaço entre matéria e exercício
print(' ')




#Exercicio: Analisador de Senha

senha = str(input('Digite sua senha: '))

tamanho =len(senha)

print(f'Tamanho: {tamanho}')

arroba = senha.find('@')

tem_arroba = (arroba > 0)

print(f"Contém '@' ? {tem_arroba}" )

booleana = (tamanho > 8)

print(f'Senha longa (>8)? {booleana}')



#Espaço entre os exercícios
print(' ')




#Exercício: Codificador de vogais
frase = str(input('Digite uma frase:'))

frase = frase.lower()

frase = frase.replace('a' , '1', frase.count('a')).replace('e' , '2', frase.count('e')).replace('i' , '3', frase.count('i')).replace('o' , '4', frase.count('o')).replace('u' , '5', frase.count('u'))

print(frase)



#Espaço entre os exercícios
print(' ')




#Exercício: Conversor de Temperaturas
temperatura = float(input('Digite a temperatura em Celcius: '))

F = ((temperatura * 1.8 ) + 32)

print(f'Temperatura em Fahrenheit: {F}')




#Espaço entre os exercícios
print(' ')




#Exercício: Área de um Círculo
raio = float(input('Digite o raio do círculo: '))

from math import pi

A = ((raio**2) * pi)

print(f'Área do cícrculo: {A:.2f}')




#Espaço entre os exercícios
print(' ')




#DESAFIO!!!!

palavra = str(input("Digite uma palavra qualquer:"))

numero = int(input("Digite um número qualquer:"))

print(f'{(palavra + ' ') * numero}')