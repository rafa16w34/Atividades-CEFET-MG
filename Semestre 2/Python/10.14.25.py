'''class Nome():
    def_init_(self,atr1,atr2):
    self.atr1 = atr1
    self.atr2 = atr2
    Def função(self):
        instrução
    Def função(self):
        instrução

#Ex:

class Dog():
    def __init__(self, nome, raca,idade):
        self.nome = nome
        self.raca = raca
        self.idade = 0

    def sentar(self):
        print(f'{self.nome.title()} está sentado')

    def latir(self):
        print('AuAu AuAu AuAu!')

    def mudaIdade(self, idade):
        self.idade = idade

dog = Dog('cacique', 'pastor alemão',3) #dog é uma instância da classe Dog

dog = Dog('cacique', 'pastor alemão',3) #dog é uma instância da classe Dog
cao = Dog('cacique', 'pastor alemão',3) #dog é uma instância da classe Dog
dog.latir()
dog.sentar()
print(f'O nome do meu cachorro é {cao.nome.title()}')
print(f'Ele é da raça \'{cao.raca.title()}\'')

#my_car.odometer_reading = 23

    
dog.mudaIdade(12)
print(f'\nO nome do meu cachorro é {dog.nome.title()}, a sua idade é {dog.idade}')

class ElectricCar():
    def __init__(self, nome, raca):
        super().__init__(nome, raca)



#Exercício 1:

class Restaurante():
    def __init__(self, restaurante_nome,tipo_cuzinha,hora):
        self.restaurante_nome = restaurante_nome
        self.tipo_cuzinha = tipo_cuzinha
        self.hora = hora

    def descreve_restaurante(self):
        print(f'\nNome: {self.restaurante_nome}\nTipo: {self.tipo_cuzinha}\n')

    def restaurante_aberto(self):
        
        if (self.hora > 7) or (self.hora < 22):

            print('\nO restaurante está aberto!\n')

        else:

            print('\nO restaurante está fechado!\n')


restaurante.nome = str(input('\nDigite o nome do restaurante: \n'))
tipo_cuzinha = str(input('\nDigite o tipo do restaurante: \n'))

restaurante = Restaurante("Skema","Churrascaria",18)

restaurante.descreve_restaurante()

restaurante.restaurante_aberto()



#Exercício 2:

quantidade_de_pedidos = int(input('\nDigite quantos pedidos gostaria de fazer: \n'))

class Cliente():

    def __init__(self,first_name,last_name,historico):
        self.first_name = first_name
        self.last_name = last_name
        self.historico = historico

    def describe_client(self):
        print(f"\nNome: {self.first_name.title()} {self.last_name.title()}\nHistórico: {self.historico}\n")

    def greet_client(self):
        print(f'\nOlá {self.first_name} {self.last_name}\n')

    def salva_historico(self):
        
        self.historico.append(pedido.title())

jao = Cliente("Jão","Carlos",["Cheeseburguer","Pastel"])

jao.describe_client()
jao.greet_client()

for i in range(quantidade_de_pedidos):
    pedido = str(input('\nDigite seu pedido: \n'))
    jao.salva_historico()

jao.describe_client()

'''

#Exercício 3:

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

restaurante = Restaurante("Skema","Churrascaria",18,5)

restaurante.descreve_restaurante()

restaurante.restaurante_aberto()

restaurante.set_numeber_served(12)

restaurante.descreve_restaurante()

novos = int(input('\nQuantos clientes a mais foram atendidos?\n-> '))

restaurante.increment_number_served(novos)

restaurante.descreve_restaurante()