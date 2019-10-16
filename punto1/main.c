#include <stdio.h>
#include <stdlib.h>
#define ESPACIO '\n'
void inverso();
int main()
{
    printf("\tInversa de un texto!\n");
    printf("Digite una linea de texto\n");
    inverso();
    return 0;
}

void inverso() {
char c;

if ((c = getchar()) != ESPACIO) {
    inverso();
}
putchar(c);
return ;
}
