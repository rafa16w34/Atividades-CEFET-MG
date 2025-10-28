'''
#Execício 1
sair = 0

while sair ==0:

    try:

        opcao = int(input("\nDigite uma das opções para prosseguir:\n1- Somar\n0- Sair\n-> "))

        match(opcao):

            case 1:

                try:
                    numero1 = int(input("\nDigite o primeiro valor a ser somado:\n-> "))
                    numero2 = int(input("\nDigite o segundo valor a ser somado:\n-> "))

                    soma = numero1 + numero2
                    print(f"\nA soma é: {soma}\n")

                except(ValueError):
                    print("\nErro: Digite um número inteiro!\n")

            case 0:
                sair = 1

            case _:
                print('\nErro: Digite uma opção válida!\n')



    except(ValueError):
            print("\nErro: Digite um número inteiro!\n")

#Exercício 2

try:

    print('\nLista de nomes de gatos:')
    with open ("cats.txt","r",encoding = "utf-8") as arq:
        conteudo = arq.read()
        print(conteudo)

    print('\nLista de nomes de cachorros:')
    with open ("dogs.txt","r",encoding = "utf-8") as arq:
        conteudo = arq.read()
        print(conteudo)

except(FileNotFoundError):
    print('\nErro: Arquivo não encontrado!\n')

'''
#Exercício 3

nome_arquivo = str(input("Digite o nome do arquivo que você gostaria de abrir:\n-> "))

try:

    with open (nome_arquivo,"r",encoding = "utf-8") as arq:
        conteudo = arq.read()
        print(conteudo)

except(FileNotFoundError):
    print('\nErro: Arquivo não encontrado!\n')

