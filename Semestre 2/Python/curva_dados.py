import numpy as np
import matplotlib.pyplot as plt
from scipy.optimize import curve_fit

def funcao(t, a, k,c):
    
    return (a * np.exp(-k * t) + c)#Retorna a função correta

#------------------------------------------------------------------------------

# Dados do enunciado:
a = 5
k = 0.8
c = 1

#------------------------------------------------------------------------------

t = np.linspace(0,10,50)# 50 pontos entre 0 e 10

y = funcao( t, a, k, c)

np.random.seed(1729)
ruido = 0.5 * np.random.normal(size=t.size)

y_ruido = y + ruido

popt, pcov = curve_fit(funcao,t,y_ruido)

#-------------------------------------------------------------------------------

# Parâmetros estimados
a_est, k_est, c_est = popt

# Erros absolutos médios
erro_a = abs(a_est - a)
erro_k = abs(k_est - k)
erro_c = abs(c_est - c)

print("Parâmetros estimados:")
print(f"A = {a_est:.4f} (erro = {erro_a:.4f})")
print(f"k = {k_est:.4f} (erro = {erro_k:.4f})")
print(f"C = {c_est:.4f} (erro = {erro_c:.4f})")

#----------------------------------------------------------------------------------

#Plot do gráfico

plt.plot(t, funcao(t, *popt), 'r-',linewidth = 2, label= 'Curva ajustada') #curva ajustada

plt.scatter(t, y_ruido, label="Dados experimentais")
plt.xlabel('t (seg.)')
plt.ylabel('y (t)')
plt.legend()
plt.show()