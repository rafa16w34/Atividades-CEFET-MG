#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIN 7
#define COL 9

// Imprime o mapa na tela
void imprimir_mapa(char mapa[LIN][COL])
{
    for (int i = 0; i < LIN; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            printf("%c ", mapa[i][j]);
        }
        printf("\n");
    }
}

// Inicializa o mapa com espaços, robôs, humano e zona segura
void inicializar_mapa(char mapa[LIN][COL])
{
    int i, j;

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            mapa[i][j] = ' ';
        }
    }

    int quantidade_robos = 15;
    for (int k = 0; k < quantidade_robos; k++)
    {
        int x = rand() % LIN;
        int y = rand() % COL;
        if (mapa[x][y] == ' ')
        {
            mapa[x][y] = 'R';
        }
        else
        {
            k--;
        }
    }

    // Humano
    while (1)
    {
        int x = rand() % LIN;
        int y = rand() % COL;
        if (mapa[x][y] == ' ')
        {
            mapa[x][y] = 'H';
            break;
        }
    }

    // Zona de evacuação
    while (1)
    {
        int x = rand() % LIN;
        int y = rand() % COL;
        if (mapa[x][y] == ' ')
        {
            mapa[x][y] = 'Z';
            break;
        }
    }
}

// Busca caminho mais curto com BFS usando vetores paralelos
int fuga_humana(char mapa[LIN][COL])
{
    int fila_x[LIN * COL];
    int fila_y[LIN * COL];
    int pai_x[LIN][COL];
    int pai_y[LIN][COL];
    int visitado[LIN][COL] = {0};

    int ini = 0, fim = 0;

    int hx = -1, hy = -1;

    // Localiza o 'H'
    for (int i = 0; i < LIN; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (mapa[i][j] == 'H')
            {
                hx = i;
                hy = j;
            }
        }
    }

    if (hx == -1 || hy == -1)
        return 0;

    fila_x[fim] = hx;
    fila_y[fim] = hy;
    fim++;

    visitado[hx][hy] = 1;
    pai_x[hx][hy] = -1;
    pai_y[hx][hy] = -1;

    int destino_x = -1, destino_y = -1;

    int dx[] = {-1, 1, 0, 0}; // cima, baixo
    int dy[] = {0, 0, -1, 1}; // esquerda, direita

    while (ini < fim)
    {
        int x = fila_x[ini];
        int y = fila_y[ini];
        ini++;

        if (mapa[x][y] == 'Z')
        {
            destino_x = x;
            destino_y = y;
            break;
        }

        for (int k = 0; k < 4; k++)
        {
            int nx = x + dx[k];
            int ny = y + dy[k];

            if (nx >= 0 && nx < LIN && ny >= 0 && ny < COL &&
                mapa[nx][ny] != 'R' && !visitado[nx][ny])
            {

                fila_x[fim] = nx;
                fila_y[fim] = ny;
                fim++;

                visitado[nx][ny] = 1;
                pai_x[nx][ny] = x;
                pai_y[nx][ny] = y;
            }
        }
    }

    if (destino_x == -1)
        return 0;

    // Reconstruir o caminho
    int x = destino_x;
    int y = destino_y;

    while (pai_x[x][y] != -1 && pai_y[x][y] != -1)
    {
        if (mapa[x][y] != 'Z')
            mapa[x][y] = '*';
        int px = pai_x[x][y];
        int py = pai_y[x][y];
        x = px;
        y = py;
    }

    mapa[hx][hy] = '*';

    printf("Caminho encontrado:\n");
    imprimir_mapa(mapa);
    return 1;
}

int main()
{
    char mapa[LIN][COL];
    srand(time(NULL));

    inicializar_mapa(mapa);

    printf("Mapa gerado:\n");
    imprimir_mapa(mapa);

    if (!fuga_humana(mapa))
    {
        printf("Nao foi possivel encontrar o caminho.\n");
    }

    return 0;
}