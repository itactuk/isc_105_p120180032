#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD_MAXIMA_RESULTADOS 100
#define N 3
#define M 4

typedef struct indices{
    int x;
    int y;
} INDICES;

typedef struct resultados{
    INDICES indices[CANTIDAD_MAXIMA_RESULTADOS];
    int cantidad_resultados_indices;
} RESULTADOS;

RESULTADOS puntos_de_silla(int mat[N][M], int posFila, int posColumna);

int main () {
float matriz[2][2] = {1,2,3,4};
return 0;
}

RESULTADOS puntos_de_silla(int mat[N][M], int posFila, int posColumna) {    //funcion
    int i, j, enc=0;

    for(i=0; i<N && !enc; i++)
    {
        for(j=0; j<M && !enc; j++)
        {
            if(mat[posColumna][posFila]>mat[posFila][j] && mat[posColumna][posFila]<mat[i][posColumna])
                enc =1;
        }
    }


    return enc;
}



