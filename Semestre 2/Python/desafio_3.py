from random import sample#Usei a função sample da biblioteca random para escolher as posições dos obstáculos

print('Bem vindo ao Labirinto do Robô. Para jogar siga as instruções informadas no terminal.\nFeito por Rafael Alves Faria.\n')#Simples mensagem de boas vindas ao usuário   


def printar_labirinto(m,n):#Função para printar o labirinto                         
        numero_colunas = []#Uma lista que irá armazenar o número de colunas (somente para melhorar a visualização)                    
        numero = 0#Variável controle que serve para preencher a lista da linha anterior (somente para melhorar a visualização)
                                                                
        for i in bloqueadas:#Vai navegar pela lista de índices aleatórios, e irá usar suas respectivas posições para colocar os obstáculos  
            linha = i// n
            coluna = i % n

            if (linha != 1 or coluna!= 1) and (linha != m-1 or coluna != n-1):#Impede que a posição inicial do robô e da saída sejam registradas como obstáculos
                labirinto[linha][coluna] = "#"
            else:#Caso a posição do robô ou da saída sejam escolhidas, a posição [0][0] será um obstáculo
                labirinto[0][0] = "#"

        for i in range(n):#Preenche a lista de coluna (somente para melhorar a visualização)
            numero_colunas.append(numero)
            numero = numero + 1

        for i in range(numero):#Printa o labirinto todo já formatado    

            if i == 0:
                print('  ',end='')

            print(f' {numero_colunas[i]}',end='')
        
        print(' ')

        for i in range(m):        
            for j in range(n):

                if (j == 0):
                    print(f'[{i}]',end = '')

                print(f'{labirinto[i][j]}', end = ' ')
            print(' ')


try:#Impede que o usuário digite algo diferente de um número inteiro
    print('\n(Escolha valores maiores que 2)\n')#Avisa o usuário que o código não funcionará com extensões menores que 2 
    m = int(input('Digite a extensão vertical do labirinto : '))                          
    n = int(input('Digite a extensão horizontal do labirinto : '))                       

    if m <= 2 or n <= 2 :#Impede que o usuário digite as extensões menores que 2

        print('\nInforme números maiores que 2.\n')
        exit()                                             

    
except ValueError:#Impede que o usuário digite algo diferente de um número inteiro                             
    print(f'\nAs extensões devem ser números inteiros.\n')
    exit()


bloqueadas = sample(range(m*n),n)#Preenche a lista de bloqueados com os indíces de posições aleatórias


labirinto = []#Criando a lista de onde surgirá a matriz (labirinto)                                                              

for i in range(m):#Preenche a matriz (labbirinto) com '-'                    
    linha = []

    for j in range(n):
        linha.append('-')

    labirinto.append(linha)

coordenadas_robo = [1,1]#Cria uma lista que irá salvar a posição do robô dentro da matriz (lanbirinto). Criar a lista é importante já que o usuário poderá move-lo pela matriz (labirinto)

labirinto[m-1][n-1] = 'S'#Determina a posição da saída


sair = 0#Variável controle para o funcionamento do loop

while sair == 0:

    print(f'\nPara escapar do labirinto, guie o Robô (R) para a Saída (S), passando pelos Obstáculos (#).\nCaso a saída esteja impedida, selecione 0 para sair!\nCoordenadas do robô: {coordenadas_robo}\n')#Menu que informa quais as opções do usuário

    labirinto[coordenadas_robo[0]][coordenadas_robo[1]] = 'R'#Atualiza a posição do robô com base nos últimos movimentos do usuário

    printar_labirinto(m,n)#Printa o labirinto já formatado e com a posição atual do robô
    
    


    try:

        andar = int(input('\nEscolha para qual lado o Robô (R), irá andar:\n1 - Sul\n2 - Norte\n3 - Leste\n4 - Oeste\n0 - Sair\n-> '))

        match(andar):

            case 1:#Caso que faz com que o robô se mova para baixo (SUL)

                if ((coordenadas_robo[0] + 1) != m) and (labirinto[coordenadas_robo[0]+1][coordenadas_robo[1]] != '#'):

                    labirinto[coordenadas_robo[0]][coordenadas_robo[1]] = '-'
                    coordenadas_robo[0] += 1
                else:#Impede que o robô vá para uma posição fora da matriz (labirinto) ou que acesse a posição de um obstáculo
                    print('\nVocê não pode descer mais!\n')

            case 2:#Caso que permite que o robô se mova para cima (NORTE)
                if ((coordenadas_robo[0] - 1) != -1) and (labirinto[coordenadas_robo[0]-1][coordenadas_robo[1]] != '#'):
                    
                    labirinto[coordenadas_robo[0]][coordenadas_robo[1]] = '-'
                    coordenadas_robo[0] -= 1
                else:#Impede que o robô vá para uma posição fora da matriz (labirinto) ou que acesse a posição de um obstáculo
                    print('\nVocê não pode subir mais!\n')

            case 3:#Caso que permite que o robô se mova para a direito (LESTE)
                if ((coordenadas_robo[1]+1) != n) and (labirinto[coordenadas_robo[0]][coordenadas_robo[1]+1] != '#'):
                    labirinto[coordenadas_robo[0]][coordenadas_robo[1]] = '-'
                    coordenadas_robo[1] += 1
                else:#Impede que o robô vá para uma posição fora da matriz (labirinto) ou que acesse a posição de um obstáculo
                    print('\nVocê não pode ir mais para direita!\n')

            case 4:#Caso que permite que o robô se mova para a esquerda (OESTE)
                if ((coordenadas_robo[1]-1) != -1)and (labirinto[coordenadas_robo[0]][coordenadas_robo[1]-1] != '#'):
                    labirinto[coordenadas_robo[0]][coordenadas_robo[1]] = '-'
                    coordenadas_robo[1] -= 1
                else:#Impede que o robô vá para uma posição fora da matriz (labirinto) ou que acesse a posição de um obstáculo
                    print('\nVocê não pode ir mais para esquerda!\n')

            case 0 :#Caso que permite que o usuário encerre o programa
                sair = 1

            case _:#Caso padrão para uma opção não aceita
                print('\nDigite uma opção válida!\n')

    except (ValueError):#Caso o usuário digiite um caractere não suportado.
        print('\nDigite uma das opções exibidas no menu!\n')

    if labirinto[coordenadas_robo[0]][coordenadas_robo[1]] == labirinto[m-1][n-1]:#Se a posição do robô for a mesma da saída então o usuário irá receber a mensagem que conseguiu escapar e o loop se encerra.
        print('\n')
        printar_labirinto(m,n)
        print('\nVocê escapou! Parabéns!!\n')
        sair = 1