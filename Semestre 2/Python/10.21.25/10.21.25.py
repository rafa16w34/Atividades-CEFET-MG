'''
print('\n')

with open ("txt/arq3.txt","rt",encoding = "utf-8") as arq:
    conteudo = arq.read()
    print(conteudo)
    print(type(conteudo))

print('\n')

with open("txt/arq3.txt","rb") as arq:
    conteudo = arq.read()
    print(conteudo)
    print(type(conteudo))

print('\n')

with open("txt/pi.txt") as arq:
    conteudo = arq.read()

print(conteudo) 

print('\n')

file_name = 'txt/arq.txt'
with open(file_name) as file_object:
    for lin in file_object:
        print(lin)

print('\n')

with open(file_name) as file_object:
    linhas = file_object.readlines()
    print(linhas)

print('\n')

dist = list()
with open('txt/arq2.dat') as arquivo:

    for i in arquivo:
        valores = list(map(int,i.strip().split()))
        dist.append(valores)
    print(dist)



with open("learning_python.txt","r") as arq:

    conteudo = arq.read()
    print(conteudo)
    print(conteudo)
    print(conteudo)
    
#Exiba o conteúdo uma vez lendo o arquivo todo, uma vez percorrendo o objeto arquivo com um laço e outra armazenando as linhas em uma lista e então trabalhando com ela fora do bloco with.



message = 'I really like dogs.'
print(f'\n{message}\n')
message = message.replace('dogs', 'cat') 
print(f'\n{message}\n')

with open("learning_python.txt","r") as arq:

    for i in arq:

        
        print(i)
        i = i.replace('Python','C')
        print(i)

'''
numero = 1;

for i in range(5):
    

    nome = str(input('\nDigite seu nome:\n-> '))
    print(f'\nOlá {nome.title()} obrigado pela visita!\n')

    with open("guest_book.txt",'a') as arq:

        arq.write(f'\n{numero}. {nome.title()}\n')
        numero += 1
        