'''def msg():
    """Recebe uma saudação simples""" #Docstring

    print ('Olá como vai?')

msg()

def soma(a, b):

    """Soma dois números.
    Args:
    a (int || float): Primeiro número.
    b (int || float): Segundo número.
    Returns:
    int || float: Resultado da soma.
    """

    return a + b

import random

def msg(nome):
    """Exibe saudações simples"""

    print(f'Olá como vai {nome.title()}?!')

    msg('guido')


help(msg)
print(msg)
msg('guido')
soma(3,4)


def printIdade(nome, id=0):#id definido como 0
    """Exibe uma saudação"""
    print(f'Olá {nome.title()} a sua idade é {id}!')

nome = str(input('Olá, qual seu nome?'))
idade = int(input('Olá, qual a sua idade?'))
printIdade(nome,idade)
printIdade(nome)


def media(a=0,b=0,c=0):
    """Exibe a media de até 3 valores"""
    soma=0
    num = 0
    if a != 0:
        soma += a
        num += 1
    if b != 0:
        soma += b
        num += 1
    if c != 0:
        soma += c
        num += 1

    media = soma/num
    print(f'A média é {media:.2f}!')

media(3,2)


def media (*nums):
    soma = sum(nums)
    tam = len(nums)
    med = soma/tam
    print(f'A média é {med:.1f} .')
media(1, 2, 3)
media(1, 3, 4, 9, 50, 4, 56, 34, 7, 34, 16)
media(2, 2, 2, 3, 5, 8, 9, 10)

def pedido(valor, borda='', *ings):
    print(f'A seu pedio ficou no valor R${valor}')
    if borda:
        print(f'Pizza: Borda {borda} e {ings}\n')
    else: 
        print(f'Pizza: Sem Borda Recheada, {ings}\n')

pedido(110, 'catupiry', 'muçarela', 'tomate','pepperoni')
pedido(120, 'muçarela', 'tomate','pepperoni')
pedido(130, '', 'molho', 'tomate','pepperoni')

def ordenaLista(lst):
    lst.sort()
    return lst

listas = [1, 1, 7, 9, 10, 5, 6 ,3 ,2, 20]
print(listas)
lista_ordenada = ordenaLista(listas)
print(lista_ordenada)

def build_person(first_name, last_name):
    person = {'first': first_name, 'last': last_name, '}
    return person


musico = build_person('jimi', 'hendrix')
print(musico)


def build_profile(first,last,**outros):
    profile={}

    profile["first_name"] = first
    profile["last_name"] = last

    for key, value in outros.items():
        profile[key] = value

    return profile

user_profile = build_profile('guido','patuza',field='python')
print(user_profile)
user_profile = build_profile('guido', 'pantuza', location='cefet', field='PO', dep='computação', sala=15)
print(user_profile)



#Exercício 1

def make_album(nome,titulo,album):


    album[nome] = titulo

    return album

album = {}

sair = 0

while sair == 0:

    try:
        opcao = int(input('\nDigite a opção:\n1- novo album\n0- Sair\n-> '))

    
        match(opcao):

            case 0:#Controla o loop do while
                sair = 1

            case 1:
                nome = input('\nDigite o nome do cantor\n')
                titulo = input('\nDigite o título do album\n')

                album = make_album(nome,titulo,album)

                print(f'\n{album}\n')

    except(ValueError):
        print('\nDigite uma das opções!\n')



def funcao(a):
    a += 2
    b = 0
    #c = 0
    #d 
    if (d == 0):
        print(f'\nDentro a:{a}, b:{b}, c:{c}\n')
    return a

a = 1
b = 5
c = 13
d = 0
print(f'\nFora a:{a}, b:{b}, c:{c}\n')
funcao(a)
d = 1
print(f'\nDepois a:{a}, b:{b}, c:{c}\n')
a = funcao(a)
print(f'\nDepois de retornar a:{a}, b:{b}, c:{c}\n')

import util

med = util.media(1,1,1,1)
print(med)
util.fib(10)
print(util.fib2(10))

from util import*

med = media(1,1,1,1)
print(med)
fib(10)
print(fib2(10))

from util import media, fib

med = media(1,1,1,1)
print(med)
fib(10)

import util as u

med = u.media(1,1,1,1)
print(med)
u.fib(10)
print(util.fib2(10))

from util import media as m, fib as f

med = m(1,1,1,1)
print(med)
f(10)

def calcular_media(lista_notas):
    return sum(lista_notas) / len(lista_notas)

def funcao_com_parametros_muito_longa(
    parametro_um, parametro_dois, parametro_tres, parametro_quatro, parametro_cinco
):
    return parametro_um + parametro_dois
'''