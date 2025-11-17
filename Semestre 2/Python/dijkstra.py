import numpy as np
import networkx as nx #Necessário para criar grafos com matplot
import matplotlib.pyplot as plt


def dijkstra(grafo, origem):#Função do dijkstra

    n = len(grafo)  #Usar uma variável para salvar o tamanho da lista para facilitar
    
    dist = [float('inf')] * n
    dist[origem] = 0
    
    # Conjunto de nós visitados
    verificado = [False] * n
    
    for i in range(n):
        # Escolher o nó não visitado com menor distância
        menor = float('inf')
        no_verificado = 0

        for no in range(n):

            if not verificado[no] and dist[no] < menor:#Se ele ainda não tiver sido verificado e for menor do que o atual menor, então se torna o menor caminho
                menor = dist[no]
                no_verificado = no
        
        
        verificado[no_verificado] = True # Marca como verificado
        
        
        for no_vizinho in range(n):#Verifica se o nó verificado tem aresta com o verificado

            aresta = grafo[no_verificado][no_vizinho]  #Recebe o valor da aresta

            if aresta > 0 and not verificado[no_vizinho]:

                if dist[no_verificado] + aresta < dist[no_vizinho]:

                    dist[no_vizinho] = dist[no_verificado] + aresta

    return dist



# matriz fornecida
grafo = np.array([
    #0  1   2  3    4
    [0, 10, 0, 30, 100], #0
    [10, 0, 50, 0, 0],   #1
    [0, 50, 0, 20, 10],  #2
    [30, 0, 20, 0, 60],  #3
    [100, 0, 10, 60, 0]  #4
])


G = nx.Graph()

n = len(grafo) #Usar uma variável para salvar o tamanho da lista para facilitar no for

for i in range(n):

    for j in range(n):

        if grafo[i][j] > 0:  #Verificação para criar a aresta do grafo

            G.add_edge(i, j, weight=grafo[i][j])    #Adiciona uma aresta entre i e j

pos = { 0: (0, 0), 1: (1, 0), 2: (1, 1), 3: (0, 1), 4: (0.5, 2) }   #Dicionário para posições aleatórias simplesmente para visualização do grafo (não afetam nas arestas)


plt.title('Grafo Dijkstra')
nx.draw(G, pos, with_labels=True, node_size=900, font_size=10)                          #Cria o grafo
nx.draw_networkx_edge_labels(G, pos, edge_labels=nx.get_edge_attributes(G, 'weight'))   #Cria o grafo


menor_dist = dijkstra(grafo, 0)# chama a função Dijkastra e salva as menores distancia nos indices de uma lista

print(f'Menor distância do nó 0 para cada nó: \nDe 0 até 1: {menor_dist[1]}\nDe 0 até 2: {menor_dist[2]}\nDe 0 até 3: {menor_dist[3]}\nDe 0 até 4: {menor_dist[4]}\n')

plt.show()