import matplotlib.pyplot as plt
#import numpy as np
#import math

#Gráfico simples
dados = [1, 4, 9, 16, 25]
plt.plot(dados)
plt.grid()
#plt.show()

#Teste meu, Gráfico de uma função : y = (x² * 4x)/ sqrt(3)
'''
# 1. Gerar os dados
# Crie um intervalo de valores para o eixo x usando numpy.linspace
x = np.linspace(-5, 5, 100) 

# Defina a função que você quer plotar, por exemplo, y = x^2
y = ((x**2) * (4*x) )/ (math.sqrt(3))

# 2. Criar o gráfico
# Use plt.plot() para desenhar a função
plt.plot(x, y)

# 3. Adicionar rótulos e título (opcional, mas recomendado)
plt.xlabel("Eixo X")
plt.ylabel("Eixo Y")
plt.title("Gráfico da Função y = x^2")

# 4. Exibir o gráfico
plt.show() 
'''


plt.plot(dados, linewidth=5) # aumenta a espessura da linha (padrão = 1).
plt.title("Dados", fontsize=24) #Define o título ‘Dados’ e tamanho da fonte.
plt.xlabel("Obs", fontsize=14) #Nomeia o exio x.
plt.ylabel("Valor", fontsize=14) #Nomeia o exio y.
plt.tick_params(axis='both', labelsize=14)
#plt.show()


plt.title("Quadrados", fontsize=24)
xdata = [1, 2, 3, 4, 5]
ydata = [1, 4, 9, 16, 25]
plt.plot(xdata, ydata)
#plt.show()


#Grafico para aprender como mudar a cor dos pontos
xdata = [1, 2, 3, 4, 5]
ydata = [1, 4, 9, 16, 25]
#plt.scatter(xdata, ydata, s=100) # s: parâmetro tamanho do ponto
#plt.scatter(xdata,ydata,c = (0.7,0,0.5),edgecolors='none',s=40)
plt.scatter(xdata,ydata,c = 'red',edgecolors='none',s=40)
plt.axis([0, 5, 0, 30]) # Eixo x de 0 a 5 e eixo y de 0 a 30
plt.show()


#Grafico em que a linha varia de acordo com os valores de x
x_values = list(range(1001))
y_values = [x**2 for x in x_values]
plt.scatter(x_values, y_values, c=x_values, cmap=plt.cm.Blues)
plt.show()


#Gráfico de barras
fruits = ['apple', 'blueberry', 'cherry', 'orange']
counts = [40, 100, 30, 55]
plt.title('Frutas preferidas')
plt.ylabel('Pessoas')
plt.xlabel('Frutas')
plt.legend('Um gráfico bem bacana, não é mesmo?')
plt.colorbar = 'red'
plt.bar(fruits, counts)
plt.show()

#Gráfico de barras laterais
fruits = ['apple', 'blueberry', 'cherry', 'orange']
counts = [40, 100, 30, 55]
plt.barh(fruits, counts)
plt.show()


#Gráfico de pizza
labels = 'Frogs', 'Hogs', 'Dogs', 'Logs'
sizes = [15, 30, 45, 10]
plt.pie(sizes, labels=labels, autopct='%1.1f%%')
plt.show()


#Gráfico de boxplot
#Divide os dados em quatro quartils (25% dos dados em cada parte)
#Separa os outlines
fruit_weights = [
(1,2,3,4,3,2,3,4,5,3,2,1,2,3,4,5,80),
(2,3,4,5,6,4,3,4,5,3,6,7,8,9,4,10,2),
]
labels = ['peaches', 'oranges']
plt.boxplot (fruit_weights, labels = labels)
plt.show()


#Gráfico com categorias 
cat = ["bored", "happy", "bored", "bored",'happy', "happy", "bored"]
dog = ["happy", "happy", "happy", "happy",'bored', "happy", "bored"]
activity = ["combing", "drinking", "feeding",'fishing', "napping", "playing", "washing"]
plt.plot(activity, dog, label="dog")
plt.plot(activity, cat, label="cat")
plt.legend()
plt.show()



#Combinando gráficos
data = {'apple': 10, 'orange': 15, 'lemon': 5, 'lime': 20}
names = list(data.keys())
values = list(data.values())
plt.plot(names, values, color='red')
plt.bar(names, values)
plt.show()

#Subplotlib
plt.subplot(2,2,1)
plt.plot([1,2,3], [1,4,9])
plt.title('Gráfico 1')


plt.subplot(2,2,2)
plt.bar([1,2,3], [3,5,7])
plt.title('Gráfico 2')


plt.subplot(2,2,3)
plt.scatter([1,2,3], [9,4,1])
plt.title('Gráfico 3')


plt.subplot(2,2,4)
plt.hist([1, 1, 2, 3, 3, 3, 4, 5])
plt.title('Gráfico 4')

plt.tight_layout()
plt.suptitle("Nome da Figura",fontsize=20)
plt.show()