import scipy.integrate as spi
import scipy.interpolate as scip
import scipy.optimize as opt
import matplotlib.pyplot as plt
import numpy as np

#--------------------------------------------------------------------------------------
'''
def f(x):

    return x**2

resultado,erro = spi.quad(f,0,2)
print(resultado)
print(erro)#Erro estimado

#-------------------------------------------------------------------------------------

def f(x,y):

    return x**2 + y**2

resultado,erro = spi.dblquad(f,0,1,0,2)
print(f"Resultado da integral dupla : {resultado}")
print(f"Erro estimado: {erro}")

#---------------------------------------------------------------------------------------

x= np.array([0,1,2,3,4])
y = np.array([0,1,4,9,16])

f_linear = scip.interp1d(x,y,kind = 'linear')
y_1 = f_linear(x)

plt.plot(x,y,label='Dados originais')
plt.plot(x,y_1,label='Interpolação Linear')
plt.legend()
plt.title('Interpolação Linear')
plt.show()

#--------------------------------------------------------------------------------------

x = np.array([0,1,2,3,4,5])
y = np.array([0,1,4,9,16,25])

polinomio = scip.lagrange(x,y)
print(polinomio)

#---------------------------------------------------------------------------------------

#Exercício 1

hora=[1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

temp=[42, 53, 61, 72, 79, 83, 90, 102, 111, 119]

def modelo_linear(x,a,b):
    return a* x + b

params,cov = opt.curve_fit(modelo_linear,hora,temp) 

remp_ajustada = modelo_linear()


#-----------------------------------------------------------------------------------------

#Exercício 2

tensao = [1, 2, 3, 4, 5]
corrente = [1.2, 2.4, 3.1, 4.0, 5.2]

polinomio = scip.lagrange(tensao,corrente)
print(polinomio)

# Criar pontos suaves para o gráfico
x = np.linspace(1, 5, 300)
y = polinomio(x)

# Plot
plt.scatter(tensao, corrente, color='red', label='Pontos originais')
plt.plot(x, y, label='Polinômio de Lagrange')
plt.xlabel('Tensão (V)')
plt.ylabel('Corrente (A)')
plt.title('Interpolação de Lagrange')
plt.grid()
plt.legend()
plt.show()
'''

#----------------------------------------------------------------------------------------

#Exercício 3

np.random.seed(42)

A_real = 5.0
B_real = 0.8

t = np.linspace()