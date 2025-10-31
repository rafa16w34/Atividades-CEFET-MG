'''
#Exercicio 1

import unittest

class Inverter_string:

    def __init__(self,string):

        self.string = string
        

    def inverter(self):

        return self.string[::-1]


string = str(input('\nDigite a string que deseja inverter:\n-> '))

class Teste(unittest.TestCase):

    def teste_versao_normal(self):
        inverter = Inverter_string("Python")
        resultado = inverter.inverter()
        self.assertEqual(resultado, "nohtyP")
        
    def teste_versao_vazia(self):
        inverter = Inverter_string('')
        resultado = inverter.inverter()
        self.assertEqual(resultado,'')

    def teste_versao_espaco(self):
        inverter = Inverter_string('oi amigo')
        resultado = inverter.inverter()
        self.assertEqual(resultado,'ogima io')


if __name__ == '__main__':
    unittest.main()

#Exercicio 2

import unittest

def eh_primo(n):

    if n <= 1:

        return False
    
    for i in range(2,n):

        if n % i == 0:

            return False
    
    return True

class TesteEhPrimo(unittest.TestCase):

    def test_numero_primo_pequeno(self):
        self.assertTrue(eh_primo(7))

    def test_nao_primo(self):
        self.assertFalse(eh_primo(10))

    def test_1(self):
        self.assertFalse(eh_primo(1))

    def test_numero_primo_grande(self):
        self.assertTrue(eh_primo(101))



if __name__ == '__main__':
    unittest.main()


#Exercicio 3

import unittest

class Retangulo:

    def __init__(self,altura,largura):
        self.altura = altura
        self.largura = largura

    def area(self):

        return (self.altura*self.largura)

    def perimetro(self):

        return ((2*self.altura) + (2*self.largura))
    

class TesteRetangulo(unittest.TestCase):

    def teste_area(self):
        
        self.retangulo = Retangulo(2,2)
        self.assertEqual(self.retangulo.area(),4)

    def teste_perimetro(self):

        self.retangulo = Retangulo(1,1)
        self.assertEqual(self.retangulo.perimetro(),4)

    def teste0(self):

        self.retangulo = Retangulo(0,2)
        self.assertEqual(self.retangulo.area(),0)


if __name__ == "__main__":
    unittest.main()

'''

#Exercicio 4

import unittest

def ehpar(n):

    if n % 2 == 0:

        return True
    
    else:

        return False
    
class TestePar(unittest.TestCase):

    def teste_positivo_par(self):

        self.assertTrue(ehpar(2))

    def teste_positivo_impar(self):

        self.assertFalse(ehpar(5))

    def teste_negativo_impar(self):

        self.assertTrue(ehpar(-2))

    def teste_negativo_impar(self):

        self.assertFalse(ehpar(-5))

    def teste_zero(self):

        self.assertTrue(ehpar(0))

if __name__ == "__main__":
    unittest.main()