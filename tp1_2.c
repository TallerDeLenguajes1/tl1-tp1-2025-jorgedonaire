#include <stdio.h>

//Ejercicio 4 a)
// int devuelveCuadrado(int numero);

// int main()
// {
//     int numeroIngresado;
//     printf("Ingrese un numero: ");
//     scanf("%d",&numeroIngresado);
//     printf("El cuadrado del numero ingresado es: %d", devuelveCuadrado(numeroIngresado));
//     return 0;
// }

// int devuelveCuadrado(int numero){
//     int resultado = numero * numero;
//     return resultado;
// }

//////////////////////////////////////////////////////////////////////////////////////
//Ejercicio 4 b)
// void devuelveCuadrado(int numero);

// int main()
// {
//     int numeroIngresado;
//     printf("Ingrese un numero:");
//     scanf("%d", &numeroIngresado);
//     devuelveCuadrado(numeroIngresado);
//     return 0;
// }

// void devuelveCuadrado(int numero){
//     printf("El cuadrado del numero ingresado es: %d", numero*numero);
// }
/////////////////////////////////////////////////////////////////////////////////////
//Ejercicio 4 c)

// int main()
// {
//     int numeroIngresado;
//     int *puntero;

    
//     printf("Ingrese un numero:");
//     scanf("%d", &numeroIngresado);
//     puntero = &numeroIngresado;
//     printf("La direccion de memoria de la variable ingresada es: %p", puntero);
//     printf("El contenido de la variable ingresada es: %d", *puntero);

//     return 0;
// }


////////////////////////////////////////////////////////////////////////////////////////
//Ejercicio 4 d)

// void invertir(int a, int b);
// int main()
// {
//     int a,b;
//     printf("Ingrese el primer numero: ");
//     scanf("%d", &a);
//     printf("Ingrese el segundo numero: ");
//     scanf("%d", &b);
//     invertir(a,b);
//     return 0;
// }

// void invertir(int a, int b){
//     //a = 5 ; b = 10
//     int temp;
//     int *aux;

//     aux = &a;  //aux = 5
//     temp = *aux; //temp = 5

//     *aux = b; //aux = 10
//     b = temp; //b = 5
//     printf("El valor de la variable a es: %d\n", a);
//     printf("El valor de la variable b es: %d", b);
// }

//////////////////////////////////////////////////////////////////
//Ejercicio 4 e)

void orden(int a, int b);
int main()
{
    int a,b;
    printf("Ingrese el primer numero: ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);
    orden(a,b);
    return 0;
}

void orden(int a, int b){
    int temp;
    int *aux;

    if (a > b)
    {
        aux = &a;
        temp = *aux;

        *aux = b;
        b = temp;
    }

    printf("El valor de la variable a es: %d\n", a);
    printf("El valor de la variable b es: %d", b);
}
