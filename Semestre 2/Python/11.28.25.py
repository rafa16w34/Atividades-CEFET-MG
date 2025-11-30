from scipy import optimize
from scipy import integrate
import scipy.interpolate as pqp
import matplotlib.pyplot as plt
import numpy as np

#Exercício 1
'''


#-----------------------------------------------

def volume(z, y, x):
    return x * y * z

#------------------------------------------------

resultado, erro = integrate.tplquad(
    volume,
    0, 1,             # limites de x
    lambda x: 0,
    lambda x: 1,      # limites de y
    lambda x, y: 0,
    lambda x, y: 1    # limites de z
)

#-------------------------------------------------

print("Volume =", resultado)
print("Erro estimado =", erro)

#------------------------------------------------

#Exercício 2

def trabalho(x):

    return (5*pow(x,2))


#trabalho,erro = quad(trabalho,x)#Tem que arrumar a parte de exibir o erro

for i in range(2):

    x = i+1
    resultado = trabalho(x)
    print(f'Resultado = {resultado}')

#--------------------------------------------------

#Exercício 3


#------------------------------------------------------------------------------

anos = [2000, 2005, 2010, 2015, 2020]
temperaturas = [22.5, 23.0, 24.0, 25.0, 26.0]

linear = pqp.interp1d(anos, temperaturas, kind='linear', fill_value="extrapolate")

#------------------------------------------------------------------------------

anos_novos = [2023, 2024, 2025]
temp_novas = linear(anos_novos)

print("Temperaturas estimadas:")
for ano, temp in zip(anos_novos, temp_novas):
    print(f"{ano}: {temp:.2f} °C")

#------------------------------------------------------------------------------


plt.plot(anos, temperaturas, 'o-', label='Dados originais')
plt.plot(anos_novos, temp_novas, 's--', label='Interpolação / Extrapolação')
plt.legend()
plt.title('Interpolação Linear de Temperaturas')
plt.xlabel('Ano')
plt.ylabel('Temperatura média (°C)')
plt.grid(True)
plt.show()

#------------------------------------------------------------------------------

#Exercício 4

v1 = 15
v2 = 10
d0 = 100

def f(t):
    return v1*t - (v2*t + d0)

#------------------------------------------------------------------------------

resultado = optimize.root_scalar(f, bracket=[0, 20])

print("Tempo da colisão:", resultado.root, "segundos")

#------------------------------------------------------------------
'''

#Exercício 5
V = np.array([0, 1, 2, 3, 4, 5]) # Saída do sensor
T_real = np.array([10, 12, 16, 22, 30, 40]) # Temperatura real (°C)
