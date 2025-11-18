import matplotlib.pyplot as plt
import numpy as np

'''
data = np.array([1, 2])         [1,2]
ones = np.ones(2, dtype=int)    [1,1]

Soma:
• data + ones

Subtração:
• data - ones

Multiplicação:
• data * data

Divisão:
• data / data

Multiplicação entre matrizes (linhas = colunas)
• (A @ B) ou (A.dot(B))

Somatório dos elementos
• a = np.array([1, 2, 3, 4])
• x = a.sum()

• Somatório de um eixo específico:
• b = np.array([[1, 1], [2, 2]])
• x = b.sum(axis=0)
'''

#Exemplo de matriz 2x2x2

a = np.array([[[1,2],[3,4]],[
               [5,6],[7,8]]])

#print(a)

a = np.array([1, 2, 3, 4])

'''
x = a.max(): máximo
x = a.mim(): mínimo
x = a.mean(): média
x = a.std(): desvio padrão
'''

'''
#Exercício 1

temperaturas = np.array([22.4, 23.1, 22.8, 23.0, 22.7, 22.9, 23.2, 22.7, 23.1, 23.6])

media = temperaturas.mean()

desvio = temperaturas.std()

print(f'\nMédia: {media}\nDesvio Padrão: {desvio}\n')

plt.boxplot(temperaturas)
plt.show()
'''

'''
#Exercício 2

A = np.array([[1, 2, 3], [4, 5, 6], [7, 8, 9]])
B = np.array([[9, 8, 7], [6, 5, 4], [3, 2, 1]])

soma = A + B

print(f'\nA soma das matrizes A e B é: \n{soma}\n')
'''

'''
#Exercício 3

#lista = np.random.uniform(-1, 1, 100)

lista = np.random.choice([-1, 1], size = 100)

deslocamento = np.cumsum(lista)

plt.plot(deslocamento)
plt.show()
'''

#Exercício 4

imagem = np.array([
[[100, 150, 200], [50, 100, 150], [200, 250, 100]],
[[150, 200, 50], [100, 50, 200], [250, 150, 50]],
[[200, 100, 150], [50, 200, 250], [150, 50, 100]]
])

#Cinza= 0.2989R + 0.5870G + 0.1140B

Cinza= 0.2989 * imagem[:,:,0] + 0.5870 * imagem[:,:,1] + 0.1140 * imagem[:,:,2]

print(f'\nImagem em tons de cinza:\n{Cinza}')


#Exercício 5

