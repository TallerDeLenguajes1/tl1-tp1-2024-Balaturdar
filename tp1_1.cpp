#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    printf("hola mundo");
/*
    Declare un puntero en el procedimiento principal que apunte a una variable de algún tipo y muestre por pantalla lo siguiente:
    1) El contenido del puntero
    2) La dirección de memoria almacenada por el puntero.
    3) la dirección de memoria de la variable.
    4) la dirección de memoria del puntero.
    5) el tamaño de memoria utilizado por esa variable usando la función sizeof()
*/
    int variable = 10;
    int *puntero = &variable;

    printf("\nContenido del puntero:\t\t %d ", *puntero);
    printf("\nDireccion de memoria almacenada:\t\t %p", puntero);
    printf("\nDireccion de memoria de la variable:\t\t %p", &variable);
    printf("\nDireccion de memoria del puntero:\t\t %p", &puntero);
    printf("\nTamaño de memoria utilizado por la variable:\t\t %d Bytes", sizeof(variable));

   return 0;
}
