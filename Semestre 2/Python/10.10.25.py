'''
#Exercício 1

def sanduiche(pedido):
    print(f'Função dos pedidos uau {pedidos}')                   TENHO QU EFINALIZAR ESSE


pedidos = []

igredientes = 0

try:
    igredientes = int(input('\nDigite o número de igredientes que você gostaria de colocar no seu sanduíche: \n'))
except (ValueError):
    print('\nDigite um número inteiro.\n')

for i in range(igredientes):

    pedidos.append(input(f'Digite o nome do igrediente {i}'))

sanduiche(pedidos)


#Exercício 2

TENHO QUE FAZER ESSE MAIS TARDE

#Exercício 3


def printar(cadastro):

    if cadastro:

        print(cadastro)

    else:

        print('\nNenhum aluno cadastrado.\n')

cadastro = {}

numero_de_alunos = 0

nota_aluno = 0

try:

    numero_de_alunos = int(input('\nDigite o número de alunos que serão cadastrados.\n'))

except (ValueError):

    print('\nErro: Digite um valor do tipo inteiro\n')
    exit()
    

for i in range(numero_de_alunos):

    nome_aluno = input('\nDigite o nome do aluno.\n')

    try:

        nota_aluno = float(input('\nDigite a nota do aluno\n'))

    except(ValueError):

        print('\nErro: Digite um valor do tipo float\n')
        exit()

    cadastro[nome_aluno] = nota_aluno

printar(cadastro)
'''

#Exercício 4
try:

    quantidade_de_numeros = int(input('\nDigite a quantidade de números que gostaria de colocar na lista.\n'))

except(ValueError):

    print('\nErro: Digite um valor inteiro\n')
    quit()

numeros = []

for i in range(quantidade_de_numeros):

    try:
        numeros.append(float(input(f'\nDigite o número {i}: ')))

    except(ValueError):
        print('\nErro: Digite um valor float\n')
        quit()


soma = 0

for i in range(quantidade_de_numeros):
    soma += numeros[i]

media = soma/quantidade_de_numeros

numeros_ordenados = sorted(numeros,reverse=True)

amplitude = numeros_ordenados[0] - numeros_ordenados[-1]

desvio_padrao = 0

for i in range(quantidade_de_numeros):

    desvio_padrao += pow((numeros[i] - media),2)

print(f'\nLista de números: {numeros}\nSoma: {soma}\nMédia: {media}\nAmplitude: {amplitude}\nDesvio Padrão: {desvio_padrao}')
