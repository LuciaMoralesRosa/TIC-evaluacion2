//Este programa devuelve el valor de la variable, de un puntero y la direccion de memoria de un puntero

#include <stdio.h>
#include<iostream>

int main()
{
int a=0; //Declaraci�n de variable entera de tipo entero
int *puntero; //Declaraci�n de variable puntero de tipo entero
std::cin >> a;
puntero = &a; //Asignaci�n de la direcci�n memoria de a

printf("El valor de a es: %d. \nEl valor de *puntero es: %d. \n",a,*puntero);
printf("La direcci�n de memoria de *puntero es: %p",puntero);

return 0;
}
