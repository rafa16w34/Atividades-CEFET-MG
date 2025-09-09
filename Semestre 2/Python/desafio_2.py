#DESAFIO!!!!

nome = str(input('Digite seu nome: '))
idade = str(input('Digite sua idade: '))
senha = str(input('Digite sua senha: '))

validar_idade = idade.isnumeric()

admin_na_senha = senha.startswith('admin')

nome = nome.lower()

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


        #Senha inteira e somado + 10
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
