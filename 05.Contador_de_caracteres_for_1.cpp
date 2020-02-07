#include<iostream>
/*Vamos a hacer un programa que deletree una palabra y cuente las letras*/

int main(){
    //Introducimos variables
    char palabra[10];
    //El numero (10) es el maximo de caracteres que se pueden introducir
    char salir;
    int cont;
    int longitud;
    longitud=0;
    //Introducimos nombre
    std::cout<<"Dime tu nombre: ";
    std::cin>> palabra;
    //Dirty trick
    cont=0;
    for (cont=0;palabra[cont]!='\0';cont++){
          longitud ++;
          }
   
    std::cout<<"El nombre de ";
    std::cout<<palabra;
    std::cout<<" tiene ";
    std::cout<< longitud;
    std::cout<<" letras";
    //Sales del programa
    std::cin>> salir; 
}   
