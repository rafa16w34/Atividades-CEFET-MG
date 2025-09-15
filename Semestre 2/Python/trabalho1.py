from random import sample

while True :
    altura = int(input('Digite a extensão vertical do campo minado.'))                      #Usuario escolhe a altura da matriz do campo minado 
    largura = int(input('Digite a extensão horizontal do campo minado.'))                   #Usuario escolhe a largura da matriz do campo minado
    
    if altura <= 0 or largura <= 0 :                                                         #Barra o processo se o usuario digitar um numero de linhas e colunas igual ou menor que 0
        print('Informe números maiores que 0')
    
    else:
            

        minas = int(input('Digite a quantidade de minas para o campo minado do campo minado.')) #Usuario escolhe a quantidade de minas do campo minado 

        if (minas < (altura * largura)):                                                        #Se o numero de minas for menor que o numero de posições do campo, então o código continua

            colunas = []                                                                        #Colunas é basicamente a Matriz que será preenchida pelas linhas

            for i in range(altura):                                                             #Usa o valor fornecido pelo usuário para ir preenchendo a matriz com '*'
                linha = []

                for j in range(largura):
                    linha.append('*')
            
                colunas.append(linha)


            print(colunas) #TESTE

            posicoes_minas = sample(range(largura * altura),minas)

            for i in posicoes_minas:                                                              #Usa o valor fornecido pelo usuário para preencher a matriz com as minas
                
                colunas[i // largura][i % largura] = 'B'            #Minas são os M

            print(colunas) #TESTE

            while True:
                #MENU
                print(colunas)
                print('')
                print('Digite agora o que gostaria de fazer:')
                print('1 - Marcar uma posição suspeita')
                print('2 - Escolher uma posição')
                print('0 - Sair')

                decisao = int(input('->  '))

                if decisao == 0:
                    break
                
                if decisao == 1:
                    y = int(input('Digite uma coluna: '))
                    x = int(input('Digite uma linha: '))

                    colunas[x][y] = 'M'
                
                if decisao == 2:
                    y = int(input('Digite uma coluna: '))
                    x = int(input('Digite uma linha: '))


                    if colunas[x][y] == 'S':
                        print('Posição já averiguada')

                    if colunas[x][y] == '*':

                        colunas[x][y] = 'S'
                        print(colunas)

                    if colunas[x][y] == 'B':
                        print('Game Over')
                        break
            break

        else:                                                                                    #Caso o usuário digite um número de minas maior que os epaços da matriz, o programa não rodará
            print('Número de minas é maior do que o suportado no campo escolhido')
            

        