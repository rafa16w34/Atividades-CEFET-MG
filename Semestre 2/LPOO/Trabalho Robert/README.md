# Trabalho-LPOO

Lógica de programação da clinica de exames
quem chegou
qual o clientes
valor relacionado com os exames do pedido
liberação depende da lista de exame (tempo depende do exame)
alguns exames exigem preparos
informações do cliente: nome e telefone
podem fazer exame em casa para alguns clientes, ex: idosos e pessoas com dificuldade de locomoção
convenio com empresa: cobra da empresa o valor do exame que cada funcionário vai fazer mas com 10% de desconto
prioridade na coleta para idosos
descontos só para convênio com empresas
Nome, telefone, data e hora da coleta, data e hora do resultado ( esses dois últimos dependem do tipo de exame)
Lista de exames serão passados
Funcionamento:
Segunda a sexta-feira
06:00 – 9:30 AM 13:00 – 15:00 PM
Não preocupa com a linguagem ainda não paizão
O resto dos horários é o trabalho interno
Marcação de horário depende dos exames que serão feitos
Marca um horário, pessoa chega e pega uma senha e faz os exame lá






Classe Cliente
Nome
Idade
Convenio
Telefone
FazInscrição()
TemConvenio()
FazEmCasa()
PrioridadeIdoso()



Classe Exame
Nome
Convenio
Data da Coleta()
Data de Entrega()
PrecisaDePreparo() #Ex: Precisa de jejum para fazer exame?
DescontoConvenio() # Puxa o salario dos funcionários e aplica o desconto do convênio
Tempo() #Calcula o tempo para fazer o exame



Classe Funcionários
Tempo de Trabalho
Função de Trabalho
Salário() #Calcula o valor que deve receber baseado na Função e no Tempo trabalhado





1-Reunião com o Professor Roberth:Organização das Classes do Laboratório de Analises Clinicas

Na aula do dia 10/09/25 , eu Pedro Francisco Sousa Silva e o meu parceiro de grupo Rafael Alves realizamos uma reunião com nosso professor Roberth ,sobre a discussão de nosso trabalho do laboratorio de POO que discorre do tema de um Laboratorio de Analises Clinicas e como seria feito o processo para organizar as classes.

Criamos uma classe denominada Cliente que se relaciona na questão dos clientes que irão atender na nossa clinica contendo objetos nome,idade,convenio,telefone e os atributos relacionados a essa classe são FazInscrição(),TemConvenio(),FazEmCasa(),PrioridadeIdoso().

Criamos tambem a classe Exame relacionada aos exames que vamos executar em nossa empresa e contem nome,convenio e os atributos relacioandos sao DataDeColeta(),DataDeEntrega(),PrecisaDePreparo(),DescontoConvenio(),Tempo().

E também fomos aconselhados a criar uma classe de convenios ,para falar sobre os clientes que irão contratar os serviços e trabalham em empresas,e uma classe de preparo que ira se relacionar com os exames na questao de alguns dos clientes precisarem de fazer algum jejum ou tomar algum medicamento.E na questão de alguns exames devem ter o horario marcado e outros não que normalmente são feitos rapidamentes.Os exames contem procedimentos podendo ser um ou varios,os dois se relacionam mutuamente.
