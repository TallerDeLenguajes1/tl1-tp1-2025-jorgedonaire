#include <stdio.h>

int main()
{
    int numero = 5;
    int *Pnumero;

    // *Pnumero = numero;
    Pnumero = &numero;

    printf("El contenido del puntero es: %d\n",*Pnumero);
    printf("La dirección de memoria almacenada por el puntero es: %d\n",Pnumero);
    printf("La dirección de memoria de la variable es: %d\n",&numero);
    printf("La dirección de memoria del puntero es: %d\n",&Pnumero);
    printf("El tamaño de memoria utilizado por esa variable es: %d\n",sizeof(int));

    return 0;
}
