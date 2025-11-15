#numpy

import numpy as np

'''

a = np.array([[1,2,3],[4,5,6]])

b = np.array([2,2,3.1,4])

print(a[:2,:1])

print(a[:-1])

print(b[-1])

#ndim : número de dimensão
#shape 
#COPIAR

a.ndim == 2
#COPIAR

a = np.zeros(2,np.int64)

#a = np.ones(10,np.boolean)

a = np.ones(10,np.float64)

#a = np.empty()

print('\n\n')

a = np.arange(0,10,2)#(inicio,fim,passo)

print('\n\n')

a = np.linspace(0,10,4)#(inicio,fim,x)
print(a)

print('\n\n')

b = np.array([9,8,7,6,5])#não funcionou
np.sort(b)
print(b)

print('\n\n')

c = np.concatenate((a,b))
print (c)

print('\n\n')

c= a.reshape(2,2)
print(c)

a = np.array([[1,2,3,4],[5,6,7,8],[9,10,11,12]])
print(a[a<5])
five_up = (a >= 5)
print(a)
#COPIAR

a = np.array([[1,2,3,4,5,6,7,8,9,10]])

b = a[3:8]
c = a[:-1]
d = a[1:-1]
e = a[-4:1]
#f = a[4,-1]


'''
#Exercicio 1

a = np.random.randint(0,101,25)
a = a.reshape(5,5)
print(a)

#Terminar