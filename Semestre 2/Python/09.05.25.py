#Condição 'Se' ou 'If'
# == Igualdade
# < ou <= Menor
# > ou >= Maior
# != Diferença
# in Presente
# not in Ausente




#Espaço entre os exercícios
print(' ')





a = 2
b = 2

if (a != b):
    print(f'{a} é diferente de {b}')
if (a == b):
    print(f'{a} é igual a {b}')




#Espaço entre os exercícios
print(' ')





#if(condição):
#   instruções
#elif(condição):
#   instruções
#else:
#   instruções




#Espaço entre os exercícios
print(' ')





x = 0

if (x > 0):
    print("Positivo")
elif (x == 0):
    print('Zero')
else:
    print('Negativo')




#Espaço entre os exercícios
print(' ')





#Operadores lógicos (and, or, not) podem ficar nas condições do if




#Espaço entre os exercícios
print(' ')





idade = 20

tem_carteira = True

if (idade >= 18 and tem_carteira):
    print('Pode dirigir')




#Espaço entre os exercícios
print(' ')





esta_chovendo = False

if not esta_chovendo:
    print('Vou sair para passear!')
else:
    print('É melhor ficar em casa.')



#Espaço entre os exercícios
print(' ')




usuario_logado = None

if not usuario_logado:
    print("Por favor faça login para continuar")

else:
    print(f"Bem vindo(a), {usuario_logado} !")

usuario_logado = "Alice"

if not usuario_logado:
    print('Por favor, faça login para continuar.')
else:
    print(f'Bem vindo(a) {usuario_logado} !')




#Espaço entre os exercícios
print(' ')




idade = 17
tem_autorizacao = False

if not (idade >= 18 or tem_autorizacao):
    print("Acesso negado: você é menor de idade")
else:
    print("Bem vindo!")




#Espaço entre os exercícios
print(' ')




#Exercício 1

idade = int(input('Digite sua idade:'))

if (idade <= 15):
    print("Você não pode votar!")

elif ( idade >= 16 and idade < 18 or idade >= 71):
    print('voto facultativo')

elif (idade >=18 and idade < 71):
    print('voto obrigatorio')




#Espaço entre os exercícios
print(' ')





#Execício 2

peso = float(input('Digite seu peso em kg:'))
altura = float(input('Digite sua altura em metros:'))

imc = (peso/(altura * altura))

if (imc < 18.5):
    print('Abaixo do peso')
elif (imc >= 18.5 and imc <= 24.9):
    print('Peso normal')
elif (imc >= 25 and imc <= 29.9):
    print('Sobrepeso')
elif( imc >= 30):
    print('Obesidade')




#Espaço entre os exercícios
print(' ')






#Exercicio 3
numero = int(input('Digite um numero: '))

par = False
impar = False
menor = False
zero = False
maior = False


if ( numero%2 == 0) :
    par = True
else:
    impar = True

    
if( numero < 0):
    menor = True
elif(numero == 0):
    zero = True
elif(numero > 0):
    maior = True

print(f'| Par: {par} | Ímpar: {impar} | Maior que Zero: {maior} | Menor que zero: {menor} | O número é zero: {zero} |')





#Espaço entre os exercícios
print(' ')






#Exercício 4
usuario = 'admin'
senha = '123'

usuario_digitado = str(input('Digite o nome de usuario: '))
senha_digitada = str(input('Digite a senha: '))

if (usuario == usuario_digitado and senha == senha_digitada):
    print(f'| Usuario: {usuario_digitado} | Senha: {senha_digitada} | Autentificação bem sucedida! |')
else:
    print(f'| Usuario: {usuario_digitado} | Senha: {senha_digitada} | Usuário ou senha incorretos! |')





#Espaço entre os exercícios
print(' ')







#Exercício 5
temperatura_original = str(input('Digite qual o tipo de temperatura (C para Celsius e F para Fahrenheit): '))
temperatura = float(input('Digite o numero da temperatura: '))
temperatura_converter = str(input('Digite qual o tipo de temperatura gostaria de converter (C para Celsius e F para Fahrenheit): '))

temperatura_converter.upper()
temperatura_original.upper()

if (temperatura_original != 'C' or temperatura_converter != 'F' or temperatura_original != 'F' or temperatura_converter != 'C' ):
    print('Digite um tipo válido!')

else:

    if (temperatura_original == temperatura_converter):
        print(f'A temperatura final é: {temperatura}')
    else:
        if (temperatura_original == 'C' and temperatura_converter == 'F' ):
            final = (temperatura * (9/5) + 32)
            
        if (temperatura_original == 'F' and temperatura_converter == 'C' ):
            final = ((temperatura - 32) * (5/9))

        print(f'A temperatura final é: {final}')




#Espaço entre os exercícios
print(' ')





#DESAFIO!!!!

nome = str(input('Digite seu nome: '))
idade = str(input('Digite sua idade: '))
senha = str(input('Digite sua senha: '))

validar_idade = idade.isnumeric()

admin_na_senha = senha.startswith('admin')

nome = nome.lower()
print(nome)

if (nome.startswith('a') == True or nome.startswith('e') == True  or nome.startswith('i') == True  or nome.startswith('o') == True  or nome.startswith('u') == True ):
    vogal_nome = True
else:
    vogal_nome = False

idade_int = int(idade)

if (validar_idade == True):
    
    if ((nome != None) and (idade_int > 18) and (senha != "1234") and (admin_na_senha == False)):
        print('Acesso Liberado!')

        # Nome começa com vogal?

        if (vogal_nome == True):
            print('O nome começa com uma vogal.')
        else:
            print('O nome não começa com uma vogal.')


        # Idade booleana

        if (idade != 0):
            idade_bool = True
        else:
            idade_bool = False

        print(f"Idade : {idade_bool}")

        senha_int = senha.isnumeric()

        if(senha_int == True):

            senha_somada = int(senha)
            print(f"{senha_somada + 10}")
        else:
            print('Não é possível transformar a senha em inteiro.')

    else:
        print("Login inválido!")    

else:
    print("Valores inválidos!")
