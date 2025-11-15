import matplotlib.pyplot as plt
import numpy as np

entrada = [100, 200, 300, 400, 500]

tempo_A = [0.5, 1.0, 1.5, 2.0, 2.5];   

tempo_B = [0.6, 1.1, 1.8, 2.4, 3.0]

#GRÁFICO DE LINHA

plt.title('Gráfico de linha - (Entrada x Execução)') #Título do gráfico
plt.xlabel("Tamanho da entrada") # Título do eixo
plt.plot(entrada,tempo_A,color = "red",marker='o',label='Tempo de exec. A') #(X , Y, cor da linha, marcação no ponto,nome na legenda)
plt.ylabel("Tempo de exec. (seg.)")
plt.plot(entrada,tempo_B,color = "blue", marker ='o',label='Tempo de exec. B')

plt.legend()

plt.show()

#GRÁFICO DE BARRA

largura = 0.35 # Largura das barras
x = np.arange(len(entrada)) # Posições no eixo X (0, 1, 2, 3, 4)

plt.title("Gráfico de barras - (Entrada x Execução)")
plt.xlabel("Tamanho da entrada")
plt.ylabel("Tempo de exec. (seg.)")


plt.bar(x - largura/2, tempo_A, largura, color="orange", label="Tempo de exec. A") # (pos. x da barra, altura da barra, largura da barra, cor da barra, nome na legenda)
plt.bar(x + largura/2, tempo_B, largura, color="green", label="Tempo de exec. B")  

plt.xticks(x,entrada)

plt.legend()

plt.show() 