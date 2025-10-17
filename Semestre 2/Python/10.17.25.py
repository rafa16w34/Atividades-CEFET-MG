'''
class Restaurante():
    def __init__(self, restaurante_nome,tipo_cuzinha,hora,number_served):
        self.restaurante_nome = restaurante_nome
        self.tipo_cuzinha = tipo_cuzinha
        self.hora = hora
        self.number_served = 0

    def descreve_restaurante(self):
        print(f'\nNome: {self.restaurante_nome}\nTipo: {self.tipo_cuzinha}\nNúmero de clientes servidos: {self.number_served}\n')

    def restaurante_aberto(self):
        
        if (self.hora > 7) or (self.hora < 22):

            print('\nO restaurante está aberto!\n')

        else:

            print('\nO restaurante está fechado!\n')

    def set_numeber_served(self,number_served):
        self.number_served = number_served

    def increment_number_served(self,novos):
        self.number_served += novos


#Exercício 1    (Código acima foi feito na aula anterior, e serve como superclasse)

class Sorveteria(Restaurante):
    def __init__(self, restaurante_nome, tipo_cuzinha, hora, number_served,sabor):
        super().__init__(restaurante_nome, tipo_cuzinha, hora, number_served)
        sabor = ['Chocolate','Flocos','Napolitano']
        self.sabor = sabor

    def printa_sabores(self):
        print(self.sabor)


ygloo = Sorveteria('Ygloo','Sorveteria',8,5,[])

ygloo.printa_sabores()

#Exercício 2

#Exercício 3

class Cliente():

    def __init__(self,nome,cpf):
        self.nome = nome
        self.cpf = cpf

    def exibir_dados(self):
        print(f'\nDados cadastrados:\nNome: {self.nome}\nCPF: {self.cpf}\n')


class ContaBancaria():

    def __init__(self, cliente,numero_conta,saldo):
        self.cliente = cliente
        self.numero_conta = numero_conta
        self.saldo = saldo

    def depositar(self):

        valor = float(input('\nDigite o valor a ser depósitado:\n-> '))
        if valor >= 0:
            self.saldo += valor
            print(f'\nSaldo atual: R$ {self.saldo:.2f}\n')
        else:
            print('\nDigite uma valor positivo!\n')


    def sacar(self):

        valor = float(input('\nDigite o valor a ser sacado:\n-> '))

        if (self.saldo >= valor):
            self.saldo -= valor
            print(f'\nSaldo atual: R$ {self.saldo:.2f}\n')
        else:
            print('\nSaldo insuficiente!\n')    

    def exibir_saldo(self):
        
        print(f'\nSaldo atual: R$ {self.saldo:.2f}\n')


cliente_1 = Cliente('Rafael','123.456.789-00')
conta1 = ContaBancaria(cliente_1,'1234',200.0)

cliente_1.exibir_dados()
conta1.depositar()
conta1.sacar()
conta1.exibir_saldo()

'''

#Exercício 4

class Funcionario():

    def __init__(self,nome,salario_base,bonus):
        self.nome = nome
        self.salario_base = salario_base
        self.bonus = bonus

    def calcular_salario(self):

        salario = self.salario_base + ((self.salario_base * self.bonus)/100)
        print(f'\n{salario}\n')


class Gerente(Funcionario):

    def __init__(self, nome, salario_base, bonus):
        super().__init__(nome, salario_base,bonus)
        bonus = 20
        self.bonus = bonus

    def calcular_salario(self):
        return super().calcular_salario()
    
class Engenheiro(Funcionario):

    def __init__(self, nome, salario_base, bonus):
        super().__init__(nome, salario_base,bonus)
        bonus = 10
        self.bonus = bonus

    def calcular_salario(self):
        return super().calcular_salario()
    

Rafael  = Engenheiro('Rafael',5000,0)

Guido = Gerente('Guido',10000,0)

funcionarios = [Rafael,Guido]

Rafael.calcular_salario()
Guido.calcular_salario()

print(funcionarios)