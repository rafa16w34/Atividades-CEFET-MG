from random import sample #Usado para sortear um indice aleatório para a lista de palavras

print('\nSeja bem vindo ao jogo da Forca.\nPara jogar siga as instruções que forem dadas no terminal.\nFeito por Rafael Alves F.\n')

palavras = ['abacaxi', 'carro', 'bicicleta', 'bola', 'avestruz', 'urubu', 'elefante']#Lista de palavras

palavra_sorteada = sample((palavras),1)#Sorteia um indice aleatório

tamanho = len(palavra_sorteada[0])#Descobre o tamanho da palavra

palavra_criptografada = []#Uma lista para armazenar os tracinhos que formarão a string da palavra criptografada

for i in range(tamanho):#Adiciona os tracinhos na lista, sendo o número de tracinhos o mesmo do que os de letras da palavra sorteada, número o qual foi armazenado em "tamanho" 

    palavra_criptografada.append('-')

palavra_forca = ''.join(palavra_criptografada)#Transforma a lista em string


perder = 0 #Variável de controle para o loop do jogo

def forca(perder):#Função que printa a forca

    if perder == 0:
        print('____\n    |\n\n\n\n')

    if perder == 1:
        print('____\n    |\n    O\n\n\n')
        
    if perder == 2:
        print('____\n    |\n    O\n    |\n\n')
        
    if perder == 3:
        print('____\n    |\n    O\n    |-- \n\n')

    
    if perder == 4:
        print('_____\n     |\n     O\n   --|-- \n\n')

    
    if perder == 5:
        print('_____\n     |\n     O\n   --|-- \n    -\n')

    
    if perder == 6:
        print('_____\n     |\n     O\n   --|-- \n    - - \n')

jogadas = { 'acertos':'','erros':''} #Dicionário que guarda as letras.

while perder < 6: #Loop básico do jogo, enquanto no perder..

    forca(perder)#Printa a forca

    print(jogadas)#Printa as letras que o usuário escolheu, as que tem e não tem na palavra

    print(f'\n{palavra_forca}\n')#Mostra a palavra criptografada

    letra = str(input('\nDigite uma letra:\n')).lower() #Pede uma letra ao usuário

    if (letra in jogadas['acertos']) or (letra  in jogadas['erros']):#Verifica se o usuário vai digitar letras diferentes

        print('\nEssa letra já foi escolhida antes, tente outra!\n')

    if (letra not in jogadas['acertos']) and (letra not in jogadas['erros']):

        if len(letra) == 1:#Para controlar que o usuário digite somente um caractere

            if not letra.isalpha():
                print('\nDigite apenas letras!\n')
                continue

            indices = [] #Uma lista que irá armazenar os indices da letra, escolhida pelo usuário, na palavra sorteada

            for i in range(len(palavra_sorteada[0])):#Navega pela palavra sorteada.
                if palavra_sorteada[0][i] == letra:#Se a letra da palavra sorteada, for igual a letra que o usuário escolheu, salva-se o índice
                    indices.append(i)

            if indices == []:#Se a lista de índices estiver vazia, significa que o usuário errou
                perder += 1
                jogadas['erros'] += letra
                jogadas['erros'] += ' - '

                if perder == 6:#Se ele errar 6 vezes ele perde

                    forca(perder)

                    print(f'\nVocê perdeu!\nA palavra era: "{palavra_sorteada[0].title()}"')

            else:
                for i in range(len(indices)):#Substitui os tracinhos pela letra do índice da lista
                    palavra_criptografada[indices[i]] = palavra_sorteada[0][indices[i]]

                jogadas['acertos'] += letra
                jogadas['acertos'] += ' - '

                indices = []#Deixa a lista vazia de novo para a próxima rodada
                palavra_forca = ''.join(palavra_criptografada)#Junta as strings da lista em somente uma, de novo

                if palavra_forca == palavra_sorteada[0]:#Se a palavra da forca ficar igual a palavra sorteada, então o usuário venceu
                    
                    forca(perder)
                    
                    print(f'\nA palvara era: "{palavra_forca.title()}"\nVocê venceu!\n')
                    break

        else:#Mostra uma mensagem caso o usuário digite mais de um caractere
            print('\nDeve digitar somente uma letra.\n')