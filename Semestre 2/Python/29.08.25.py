nome = 'Rafael'
idade = 18
print ("Idade: " +str(idade), "Nome: " +nome) #Codigo de estilo antigo, talvez nem funcione em futuras versões do python

nome = input('Digite seu nome: ')
idade = int(input("Digite sua idade: ")) #Ajuda para evitar que o usuario não digite um caractere que não seja aceito
print(f'{nome} tem {idade} anos.')

#input() sempre retorna uma string
#use conversão (int, float)

#int : inteiros
#float : ponto flutuante
#str : caracteres
#bool : true == 1, false == 0

letra = 'A'
print(letra)
print(type(letra))
print(len(letra))

x = 10
print( x > 5)
print(x == 0)

ligado = True
ativo = False
print(type(ligado))
print(ligado)
print(f'Ligado: {ligado} e Ativo: {ativo}')

y = 3.14159
print(type(y))
print(y)

from decimal import Decimal

#Boa pratica dar dois espaçoes depois de usar um código de import
a= (0.1 + 0.2)
print(f'{a:.30f}')#print com lixo de memoria
z = Decimal("0.1") + Decimal("0.2")
print(f'{z:.30f}')#print sem lixo de memoria

print(True + True)
print(True * 10)
print(False + 5)
print(True + False)
print(int(True))
print(int(False))

b = 5
c = 10
# Conta quantas condições são verdadeiras
condicoes_verdadeiras = (b>0) + (b<5) + (a == 5)
print(condicoes_verdadeiras) 

print("Ate que'C'nao é das piores")

#.lower() todas as letras minusculas
#.upper() todas as letras maiusculas
#.capitalize() primeira letra maiuscula
#.title() primeira letra das palavras separadas por espaço é maiuscula

texto = "Python"
print(texto.lower())
frase = 'c é melhor que python, kkkkk'
print(frase.upper())
texto = 'ada lovelace'
print(texto.title())

#.strip()
#.lsrtip()
#.rstrip()
#.replace(a,b)

texto = " Python "
print(texto.strip())
frase = 'c ainda é melhor que Python, kkkkk'
print(frase.strip())

#startswith("var") verifica se uma string comeca com o que for indicado, retornando true ou false
#endswith("var") verifica se uma string finaliza com o que for indicado, retornando true ou false
#find("var") verifica se o trecho existe na string, e qual a posição ele se localiza

texto = 'Python'
print(texto.startswith('P'))
print(texto.startswith('p'))
print(texto.find('o'))
print(texto.find('a'))
print(texto.find('p'))
print(texto.find('P'))

# .index('var')
# .count('var')
# .len('texto')

texto = 'Python'
print(texto.index('P'))
print(texto.index('p'))
print(len(texto))

# .split()
# .partition('sep')
# .join()

texto = 'Não adianta , C continua melhor que Python'
print(texto.split())
texto = '1000,00'
print(texto.split(','))
texto = "email@dominio.com"
print(texto.partition('@'))

# .center(10, '.')
# .ljust(10, '-')
# .rjust(10, '*')
# .zfill(5)
# .isnumeric()

texto = "oi".center(9)
print(texto)
texto = '10'
print(texto.zfill(4))
texto = 10
print(texto.zfill(4))
#AttributeError: 'int' object has no attribute 'zfill'