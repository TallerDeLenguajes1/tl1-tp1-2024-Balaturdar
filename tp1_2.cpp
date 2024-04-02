#include<stdio.h>
#include<stdlib.h>

float cuadrado(float a){
    return a*a;
};

void cuadradoVoid(float *a){
    *a = (*a) * (*a) ;
};

void Invertir(float *a,float *b){
    float aux;
    aux = *a;
    *a = *b;
    *b = aux;
};

void orden(float *a, float *b){
    float aux;

    if(*a > *b){
        aux = *a;
        *a = *b;
        *b = aux;
    }
};

int main()
{
    /*
    -a) Haga una función que devuelva el cuadrado de un número
    -b) Haga la función anterior, pero devolviendo un tipo void
    -c) Al recibir una variable muestre por pantalla la dirección y el contenido de la variable
    -d) Dado dos parámetros de entrada, deberá invertir los valores entre ambos. void Invertir(a,b) //deberá devolver en el valor de a en la variable b, y en el valor de b el valor de a
    -e) Dado dos parámetros de entrada, deberá devolverlos de forma ordenada, en el primer parámetro el menor y en el segundo el mayor. void orden(a,b) //deberá devolver en el valor de a el valor más chico, y en el valor de b el valor más grande
    f) Utilice las funciones anteriores para leer pares de valores e imprimirlos por pantalla
    */
    float num, num2;

    //asigno las variables a los punteros
    float *puntA = &num;
    float *puntB = &num2;
    
    printf("\n**\tIngrese un par de numeros\t**");
    //pido el primer numero y muestro su direccion y contenido
    printf("\n**\tIngrese el primer numero\t**\n");
    scanf("%f",&num);
    printf("\n\n**direccion del la variable es: \t %p \t**",&num);
    printf("\n**El contenido de la variable es: \t %.2f \t**",num);
    //pido el segundo numero y muestro su direccion y contenido
    printf("\n**\tIngrese el segundo numero\t**\n");
    scanf("%f",&num2);
    printf("\n\n**direccion del la variable es: \t %p \t**",&num2);
    printf("\n**El contenido de la variable es: \t %.2f \t**",num2);

    //calculo el cuadrado usando una funcion que devuelve un valor
    printf("\nEl cuadrado del primer numero es: %.2f", cuadrado(num));
    
    //calculo el cuadrado con la funcion void usando el puntero
    cuadradoVoid(puntA);
    printf("\nel cuadrado del primer numero usando punteros es: %.2f", *puntA);

    //invierto el valor de los punteros
    printf("\nlos numeros a invertir son a= %.2f y b= %.2f", *puntA, *puntB);
    Invertir(puntA,puntB);
    printf("\nlos numeros invertidos son a= %.2f y b= %.2f", *puntA, *puntB);

    //ordeno el contenido de los punteros de menor a mayor
    printf("\nEl orden actual de los numeros es a: %.2f y b: %.2f ", *puntA, *puntB);
    orden(puntA, puntB);
    printf("\nLos punteros ordenados son a: %.2f y b: %.2f ",*puntA, *puntB);


    return 0;
}

