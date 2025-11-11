import matplotlib.pyplot as plt

#Exercício 1
'''
dados = [1,2,3,4,5,6,7,8,9,10,11]

vezesdois = []

for i in range(len(dados)):

    vezesdois.append(dados[i]*2)


plt.plot(vezesdois) # aumenta a espessura da linha (padrão = 1).
plt.title("Tabuada do 2", fontsize=24) #Define o título ‘Dados’ e tamanho da fonte.
plt.xlabel("X", fontsize=14) #Nomeia o exio x.
plt.ylabel("X * 2", fontsize=14) #Nomeia o exio y.
plt.tick_params(axis='both', labelsize=14)
plt.show()
'''

#Exercício 2
'''
estudantes = ['Ana','Bruno','Carlos','Diana','Eduardo']
livros = [5,7,3,8,6]

plt.title('Quantidade de livros pegos por pessoa')
plt.ylabel('Qtd. livros')
plt.xlabel('Pessoas')
plt.legend('Um gráfico bem bacana, não é mesmo?')

plt.bar(estudantes,livros)
plt.show()
'''

#Exercício 3

#Exercício 4
'''
Altura = [ 160,165,170,175,180,185]

Pesos = [55,60,65,70,75,80]

plt.title('Altura x Peso')
plt.ylabel('Atura')
plt.xlabel('Peso')

plt.scatter(Altura,Pesos)
plt.show()
'''

#Exercício 5
'''
tempo_min = [ 12,14,11,15,13,16,14,15,10,17]

plt.title('Tempo de corrida:')
plt.ylabel('Tempo (min.)')
plt.boxplot(tempo_min)
plt.show()
'''

#Exercício 6
'''
planta_a = [0,2,4,6,8,10]
planta_b = [1,3,5,6,7,9]

plt.plot(planta_a,planta_b)

plt.show()
'''
#Exercício 7

'''
produtos = ['Produto A']
'''

#Exercício 8
'''

dias = ['Dom.','Seg.','Ter','Qua','Qui','Sex','Sab']
temperatura = [22,24,23,25,21,20,22] 

plt.scatter(dias,temperatura,color = {'red'})
plt.plot(dias, temperatura)
plt.show()
'''

#Exercício 9

parque_a = [200,220,250,270]
parque_b = [180,210,240,260]

plt.bar(parque_a,parque_b)
plt.show()