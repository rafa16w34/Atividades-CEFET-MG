from random import sample    

print('Bem vindo ao Labirinto do Robô. Para jogar siga as instruções informadas no terminal.\nFeito por Rafael Alves Faria.\n')     


def printar_labirinto(m,n):                                   
        numero_colunas = []                                   
        numero = 0
                                                                
        for i in bloqueadas:       
            linha = i// n
            coluna = i % n

            if (linha != 1 or coluna!= 1):
                labirinto[linha][coluna] = "#"
            else:
                labirinto[0][0] = "#"

        for i in range(n):                 
            numero_colunas.append(numero)
            numero = numero + 1

        for i in range(numero):     

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


try:
    print('\n(Escolha valores maiores que 2)\n')
    m = int(input('Digite a extensão vertical do labirinto : '))                          
    n = int(input('Digite a extensão horizontal do labirinto : '))                       

    if m <= 2 or n <= 2 :  

        print('\nInforme números maiores que 2.\n')                                             

    
except ValueError:                                   
    print(f'\nA m e n devem ser números inteiros.\n')


bloqueadas = sample(range(m*n),n)

print(bloqueadas)


labirinto = []                                                                        

for i in range(m):                                                          
    linha = []

    for j in range(n):
        linha.append('-')

    labirinto.append(linha)

coordenadas_robo = [1,1]


labirinto[m-1][n-1] = 'S'


sair = 0

while sair == 0:

    print(f'\nPara escapar do labirinto, guie o Robô (R) para a Saída (S), passando pelos Obstáculos (#).\nCaso a saída esteja impedida, selecione 0 para sair!\nCoordenadas do robô: {coordenadas_robo}\n')

    labirinto[coordenadas_robo[0]][coordenadas_robo[1]] = 'R'

    printar_labirinto(m,n)



    try:

        andar = int(input('\nEscolha para qual lado o Robô (R), irá andar:\n1 - Sul\n2 - Norte\n3 - Leste\n4 - Oeste\n0 - Sair\n-> '))

        match(andar):

            case 1:

                if ((coordenadas_robo[0] + 1) != m) and (labirinto[coordenadas_robo[0]+1][coordenadas_robo[1]] != '#'):

                    labirinto[coordenadas_robo[0]][coordenadas_robo[1]] = '-'
                    coordenadas_robo[0] += 1
                else:
                    print('\nVocê não pode descer mais!\n')

            case 2:
                if ((coordenadas_robo[0] - 1) != -1) and (labirinto[coordenadas_robo[0]-1][coordenadas_robo[1]] != '#'):
                    
                    labirinto[coordenadas_robo[0]][coordenadas_robo[1]] = '-'
                    coordenadas_robo[0] -= 1
                else:
                    print('\nVocê não pode subir mais!\n')

            case 3:
                if ((coordenadas_robo[1]+1) != n) and (labirinto[coordenadas_robo[0]][coordenadas_robo[1]+1] != '#'):
                    labirinto[coordenadas_robo[0]][coordenadas_robo[1]] = '-'
                    coordenadas_robo[1] += 1
                else:
                    print('\nVocê não pode ir mais para direita!\n')

            case 4:
                if ((coordenadas_robo[1]-1) != -1)and (labirinto[coordenadas_robo[0]][coordenadas_robo[1]-1] != '#'):
                    labirinto[coordenadas_robo[0]][coordenadas_robo[1]] = '-'
                    coordenadas_robo[1] -= 1
                else:
                    print('\nVocê não pode ir mais para esquerda!\n')

            case 0 :
                sair = 1

            case _:
                print('\nDigite uma opção válida!\n')

    except (ValueError):
        print('\nDigite uma das opções exibidas no menu!\n')

    if labirinto[coordenadas_robo[0]][coordenadas_robo[1]] == labirinto[m-1][n-1]:
        print('\n')
        printar_labirinto(m,n)
        print('\nVocê escapou! Parabéns!!\n')
        sair = 1