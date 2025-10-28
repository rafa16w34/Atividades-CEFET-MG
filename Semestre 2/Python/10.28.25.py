'''

inittest

if __name__ == "__main__":
Instruções ...




assertEqual(a,b)            | a == b
assertNotEqual(a,b)         | a != b
assertTrue(x)               | bool(x) is True
assertFalse(x)              | bool(x) is False
assertIs(a,b)               | a is b (Mesmo objeto, não somente o mesmo valor)
assertIsNot(a,b)            | a is not b
assertIsNone(x)             | x is None (Se um valor é exatamente None)
assertIsNotNone(x)          | x is nor None
assertIn(a,b)               | a in b
assertNotIn(a,b)            | a not in b
assertIsInstance(obj,classe)| isinstance(obj,classe) (se um objeto é instância de uma classe específica])
assertNotIsInstance(a,b)    | not isinstance(a,b)



#Exercício 1

class Employee():
    def __init__(self, primeiro_nome,sobrenome,salario_anual):
        self.primeiro_nome = primeiro_nome
        self.sobrenome = sobrenome
        self.salario_anual = salario_anual

    def give_raise(self, aumento = 5000.00):

        self.salario_anual += aumento


import unittest

class TestEmployee(unittest.TestCase):

    def setUp(self): # Cria uma instância de Employee para usar nos testes.
        
        self.funcionario = Employee('Rafael', 'Alves', 15000.00)

        print(f'\nO funcionário do exemplo é: {self.funcionario.primeiro_nome} {self.funcionario.sobrenome} e tem o salário de: {self.funcionario.salario_anual}\n')

    def test_give_default_raise(self): #Testa se o aumento padrão de 5000 é aplicado corretamente.
        
        self.funcionario.give_raise()
        self.assertEqual(self.funcionario.salario_anual, 20000.00)

        print(f'\nSalário com o aumento default: {self.funcionario.salario_anual}\n')

    def test_give_custom_raise(self): #Testa se um aumento personalizado é aplicado corretamente.
        
        self.funcionario.give_raise(10000.00)
        self.assertEqual(self.funcionario.salario_anual, 25000.00)

        print(f'\nSalário com o aumento personalizado: {self.funcionario.salario_anual}\n')

if __name__ == '__main__':
    unittest.main()

'''

#Exemplo 2

class Matematica():

    def __init__(self,a,b):
        self.a = a
        self.b = b
        self.resultado = 0

    def soma(self):

        self.resultado = self.a + self.b

import unittest

class TestMatematica(unittest.TestCase):

    def setUp(self):
        self.soma_positiva = Matematica(1,1)
        self.soma_negativa = Matematica(1,-1)
        self.soma_zero = Matematica(0,0)

    def teste_soma_positiva(self):
        self.soma_positiva.soma()
        self.assertEqual(self.soma_positiva.resultado, 2)

        print(f'\nTeste 1: Soma = {self.soma_positiva.a} + {self.soma_positiva.b} = {self.soma_positiva.resultado}\n')

    def teste_soma_negativa(self):
        self.soma_negativa.soma()
        self.assertEqual(self.soma_negativa.resultado, 0)

        print(f'\nTeste 2: Soma = {self.soma_negativa.a} + {self.soma_negativa.b} = {self.soma_negativa.resultado}\n')


    def teste_soma_zero(self):
        self.soma_zero.soma()
        self.assertEqual(self.soma_zero.resultado, 0)

        print(f'\nTeste 3: Soma = {self.soma_zero.a} + {self.soma_zero.b} = {self.soma_zero.resultado}\n')


if __name__ == '__main__':
    unittest.main()