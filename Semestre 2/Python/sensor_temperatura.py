from random import sample                       #Usado para aleatorizar a temperatura
from unittest.mock import Mock

class Temperatura:                              #Classe Temperatura
    def __init__(self):

        self.temperatura_atual = [None]     #É uma lista para que o sample funcione de maneira correta
        
        
    def ler_temperatura(self):
        #(simula leitura aleatória entre -10 e 50 °C)

        self.temperatura_atual = sample (range (-10,51) , 1)

        print(f'\nA temperatura atual é de: {self.temperatura_atual}° C\n')

    def alerta(self):
        #retorna True se > 40 °C.
        
        if self.temperatura_atual[0] > 40:

            print('\nAlerta: Temperatura acima de 40°C !')

            return True
        
        elif self.temperatura_atual[0] < -10:

            print('\nTemperatura muito baixa.')

            return False
        
        else:

            print('\nTemperatura normal.')

            return False



class Teste():#Classe para os testes

    def __init__(self):#Cada teste é uma instância de Temperatura
         
        self.teste = Temperatura()

    def teste_temp_normal(self): #Testa temperaturas normais

        self.teste.ler_temperatura = Mock()
        self.teste.temperatura_atual[0] = 25

        retorno = self.teste.alerta()

        print(f'Temperatura : {self.teste.temperatura_atual[0]}° C\nAlerta? ({retorno})\n')

    def teste_temp_alta(self):

        self.teste.ler_temperatura = Mock() #Testa temperaturas acima de 40
        self.teste.temperatura_atual[0] = 45

        retorno = self.teste.alerta()
        
        print(f'Temperatura : {self.teste.temperatura_atual[0]}° C\nAlerta? ({retorno})\n')


    def teste_temp_baixa(self): #Testa temperaturas abaixo de -10

        self.teste.ler_temperatura = Mock()
        self.teste.temperatura_atual[0] = -11

        retorno = self.teste.alerta()
        
        print(f'Temperatura : {self.teste.temperatura_atual[0]}° C\nAlerta? ({retorno})\n')



teste1 = Teste()    #Instância para executar os testes de temperatura

teste1.teste_temp_normal()
teste1.teste_temp_alta()
teste1.teste_temp_baixa()