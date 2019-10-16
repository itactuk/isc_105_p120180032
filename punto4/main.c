#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct producto{
    int id;
    char nombre[50];
    double precio;
};

struct producto busqueda_binaria(int id, struct producto productos[], int n){
    return _busqueda_binaria_recursiva(id, productos, 0, n-1);
}

struct producto busqueda_binaria(int id, struct producto productos[], int n);
int main(void )
{
printf("Nada");
}


int busquedaBinariaRecursiva(struct producto prods[], int id, int izquierda, int derecha){ //funcion bien
    if (izquierda > derecha) {
        return -1; }

    int indiceDeLaMitad = floor((izquierda + derecha) / 2);       //floor incluida en la biblioteca math.h

    int valorQueEstaEnElMedio = struct producto[indiceDeLaMitad];
    if (id == valorQueEstaEnElMedio){
        return indiceDeLaMitad;
    }

    if (id < valorQueEstaEnElMedio){
        derecha = indiceDeLaMitad - 1;
    }else{
        izquierda = indiceDeLaMitad + 1;
    }
    return busquedaBinariaRecursiva(struct producto[], id, izquierda, derecha);
}

