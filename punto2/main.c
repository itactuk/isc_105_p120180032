#include <stdio.h>
#include <stdlib.h>


typedef struct complejo{
    int  real;
    int  imaginaria;
} COMPLEJO;


COMPLEJO suma(COMPLEJO a, COMPLEJO b){
a.real += b.real;
a.imaginaria += b.imaginaria;
return a;

}


struct complejo resta(COMPLEJO a, COMPLEJO b){
a.real -= b.real;
a.imaginaria -= b.imaginaria;
return a;

}


COMPLEJO multiplica(struct complejo a, struct complejo b){
a.real *= b.real;
a.imaginaria *= b.imaginaria;
return a;

}


COMPLEJO divide(COMPLEJO a, COMPLEJO b){
int x;
x = ((a.real + b.imaginaria) * (a.imaginaria - b.real)) / ((a.imaginaria * a.imaginaria) + (b.real * b.real));
return x;
}

int main () {
    printf("Numeros Complejos!");
    printf("Digita dos numeros(uno real y otro imaginario respectivamente)");

return 0;

}
